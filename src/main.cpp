#include <iostream>

#include <OpenMesh/Core/Mesh/PolyMesh_ArrayKernelT.hh>

#include "Addition/Addition.h"

typedef OpenMesh::PolyMesh_ArrayKernelT<> MyMesh;

int main(int argc, char** argv) {

	Addition add1;

	MyMesh::Scalar valence(5.0);
	std::cout << "Hallo Georg!" << valence << std::endl;

	return 0;
}
