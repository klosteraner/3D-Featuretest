cmake_minimum_required (VERSION 2.8 FATAL_ERROR)
project (3D-Featuretest)

# -------------------------------- Configurations

# Version number
set (3D-Featuretest_VERSION_MAJOR 1)
set (3D-Featuretest_VERSION_MINOR 0)

# Compiler Settings
add_definitions(-std=c++11 )

# -------------------------------- Libraries(external)

#Making the folderstructure neater
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
set(3D-Featuretest_SOURCE_DIR src)

#OpenMesh
find_library(OpenMeshCore OpenMesh)
include_directories(${OPENMESH_INCLUDE_DIRS})


# -------------------------------- Technical stuff

# Subdirectories
add_subdirectory(src)
add_subdirectory(lib)

set(CONFIGURED_ONCE TRUE CACHE INTERNAL "Cmake is configured once")

#
# -------------------------------  Testing
#

# Uncomment next line for testing 
enable_testing()

add_test(testname 3D-Featuretest)
