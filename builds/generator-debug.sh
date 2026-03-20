#! /bin/bash

set -e

EMF4CPPDIR=../..

# generator-debug
VERSION=emf4cpp-generator-3.0.0-debug
mkdir -p emf4cpp-debug
mkdir -p generator-debug
mkdir -p xmltype-debug
mkdir -p ${VERSION}

if [[ "$OSTYPE" == "msys" || "$OSTYPE" == "cygwin" ]]; then

    ( cd generator-debug && \
	cmake -G "MSYS Makefiles" \
	    -DCMAKE_BUILD_TYPE=Debug ${EMF4CPPDIR}/org.csu.emf4cpp.generator \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )
    ( cd emf4cpp-debug && \
	cmake -G "MSYS Makefiles" \
	    -DCMAKE_BUILD_TYPE=Debug ${EMF4CPPDIR}/emf4cpp \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )
    ( cd xmltype-debug && \
	cmake -G "MSYS Makefiles" \
	    -DCMAKE_BUILD_TYPE=Debug ${EMF4CPPDIR}/XMLType \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )

else

    ( cd generator-debug && \
	cmake -DCMAKE_BUILD_TYPE=Debug ${EMF4CPPDIR}/org.csu.emf4cpp.generator \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )
    ( cd emf4cpp-debug && \
	cmake -DCMAKE_BUILD_TYPE=Debug ${EMF4CPPDIR}/emf4cpp \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )
    ( cd xmltype-debug && \
	cmake -DCMAKE_BUILD_TYPE=Debug ${EMF4CPPDIR}/XMLType \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )

fi

tar czf ${VERSION}.tar.gz ${VERSION}
