#Further subdirectories
add_subdirectory(Addition)

#Adding to targets
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(3D-Featuretest main.cpp)
target_link_libraries (3D-Featuretest AdditionCore OpenMeshCore)
