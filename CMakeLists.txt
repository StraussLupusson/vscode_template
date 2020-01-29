#cmake_minimum_required (VERSION 2.8)
project(MULTI_BUILD_VSCODE)
#set(CMAKE_CXX_COMPILER "g++")
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)
#set (CMAKE_CXX_FLAGS  "-g -fexec-charset=utf-8")

find_package(OpenCV REQUIRED)  
# if(CMAKE_VERSION VERSION_LESS "2.8.11")
#   include_directories(${OpenCV_INCLUDE_DIRS})
# endif()
 
include_directories(${PROJECT_SOURCE_DIR}/inc)
aux_source_directory(${PROJECT_SOURCE_DIR}/src srcfiles)

add_executable(MULTI_BUILD_VSCODE ${srcfiles})

target_link_libraries(MULTI_BUILD_VSCODE ${OpenCV_LIBS})

 

 


 


 


 

