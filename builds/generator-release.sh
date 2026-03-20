#! /bin/bash

set -e

EMF4CPPDIR=../..

# generator-release
VERSION=emf4cpp-generator-3.0.0-release
mkdir -p emf4cpp-release
mkdir -p generator-release
mkdir -p xmltype-release
mkdir -p ${VERSION}

if [[ "$OSTYPE" == "msys" || "$OSTYPE" == "cygwin" ]]; then

    ( cd generator-release && \
	cmake -G "MSYS Makefiles" \
	    -DCMAKE_BUILD_TYPE=Release ${EMF4CPPDIR}/org.csu.emf4cpp.generator \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )
    ( cd emf4cpp-release && \
	cmake -G "MSYS Makefiles" \
	    -DCMAKE_BUILD_TYPE=Release ${EMF4CPPDIR}/emf4cpp \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )
    ( cd xmltype-release && \
	cmake -G "MSYS Makefiles" \
	    -DCMAKE_BUILD_TYPE=Release ${EMF4CPPDIR}/XMLType \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )

else

    ( cd generator-release && \
	cmake -DCMAKE_BUILD_TYPE=Release ${EMF4CPPDIR}/org.csu.emf4cpp.generator \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )
    ( cd emf4cpp-release && \
	cmake -DCMAKE_BUILD_TYPE=Release ${EMF4CPPDIR}/emf4cpp \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )
    ( cd xmltype-release && \
	cmake -DCMAKE_BUILD_TYPE=Release ${EMF4CPPDIR}/XMLType \
	    -DCMAKE_INSTALL_PREFIX=../${VERSION} && \
	make -j7 install )

fi

tar czf ${VERSION}.tar.gz ${VERSION}
