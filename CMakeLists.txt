cmake_minimum_required(VERSION 3.19)
project(ButtonSystem)

set(CMAKE_CXX_STANDARD 17)
#set up glfw so that when building from source test and example configs are not compiled as well
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)


add_subdirectory(ExternalSystems/glfw)
add_executable(ButtonSystem main.cpp ShaderUnits/ShaderUnit.h)
target_link_libraries(ButtonSystem glfw)
