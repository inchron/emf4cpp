#! /bin/bash

FILES="./tree-bintree/Tree.ecore
./tree-bintree/BinTree.ecore
./kdm/KDM.ecore
./svg/SVG.ecore
./svg/PrimitiveTypes.ecore
./mydsl/MyDsl.ecore
./company/company.ecore
./cst/CST.ecore
./xpand/xpand3.ecore
./idlmm/IDLMM.ecore
./json/json.ecore
./enumeration/enumeration.ecore
./eopposite/eopposite.ecore
./resource/ResourceTests.ecore
./subpackage/subpackage.ecore
./treeiterator/treeiterator.ecore
./edate/edate.ecore
./ReferenceSerialization/ReferenceSerialization.ecore
./EOperationBody/EOperationBody.ecore
./crossEcoreInheritance/base.ecore
./crossEcoreInheritance/derived.ecore
./nil-reference/nil-reference.ecore
"

EMF4CPP='${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}'
EMF4CPPJAR=`pwd`/../org.csu.emf4cpp.generator/org.csu.emf4cpp.generator_3.0.0.jar
GENERATOR="java -jar $EMF4CPPJAR"


testLicenseText ()
{
	DIR=`dirname $1`
	FILES="$DIR/CMakeLists.txt $DIR/*.hpp $DIR/*.cpp $DIR/enduserlicense/*.hpp $DIR/enduserlicense/*.cpp"
	rm -f $FILES -r $DIR/enduserlicense

	(cd $DIR ; $GENERATOR -o . -e $EMF4CPP `basename $1`)
	egrep -L "was created by EMF4CPP [[:digit:]]+.[[:digit:]]+.[[:digit:]]+ and is copyrighted by the" $FILES
	if [ $? -ne 0 ] ; then
	    echo "License text failed: No foreign copyright when called w/o -i"
	    return 1
	fi

	rm -f $FILES -r $DIR/enduserlicense

	(cd $DIR ; $GENERATOR --internal -o . -e $EMF4CPP `basename $1`)
	grep -L "SAES-UMU 2010 <andres.senac@um.es>" $FILES
	if [ $? -ne 0 ] ; then
	    echo "License text failed: No internal copyright when called w/ -i"
	    return 2
	fi

	rm -f $FILES -r $DIR/enduserlicense

	echo "License text passed for $1"
	return 0
}

testTargetVersion ()
{
	ECORES="v_3_0 v_2_0 v_1_0"
	(
	cd 'TargetVersion'
	for i in $ECORES; do
		FILENAME="${i}_edate.ecore"
		echo "Updating $FILENAME"
		$GENERATOR --clear --internal -o . -e $EMF4CPP --target-version=$i $FILENAME
		echo "Done!"
	done
	)
}

if test -n "$1" ; then
	if test "$1" == "EndUserLicense/enduserlicense.ecore" ; then
		testLicenseText "EndUserLicense/enduserlicense.ecore"
	else
		(cd `dirname $1` ; $GENERATOR --internal -o . -e $EMF4CPP `basename $1`)
	fi
else
	for i in $FILES; do

		DIRNAME=`dirname $i`
		BASENAME=`basename $i`

		echo "Updating $i"

	        (cd $DIRNAME && $GENERATOR --clear --internal -o . -e $EMF4CPP $BASENAME)

		echo "Done!"
	done

	testLicenseText "EndUserLicense/enduserlicense.ecore"
	testTargetVersion
fi
