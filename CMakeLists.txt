cmake_minimum_required(VERSION 3.25)
project(
  Cpp-Algorithms-Training
  VERSION 1.0.0
  DESCRIPTION "A collection of C++ algorithms and data structures for training purposes"
  LANGUAGES CXX
)
# Set the C++ standard to C++17
# This ensures that the project uses C++17 features and syntax
# It also makes sure that the standard is required and no compiler-specific extensions are used
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set the output directory for the compiled binaries
# This ensures that all binaries are placed in the bin directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Set the output directory for the compiled libraries
# This ensures that all libraries are placed in the lib directory
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Set the output directory for the compiled archives
# This ensures that all archives are placed in the archive directory
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/archive)

# Add the source files for the project
# This includes all the source files in the src directory
# The GLOB command is used to find all files matching the pattern
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add the executable target for the project
# This creates an executable named CppAlgorithmsTraining from the source files
add_executable(CppAlgorithmsTraining ${SOURCES})

# Set the include directories for the project
# This includes the include directory for header files
target_include_directories(CppAlgorithmsTraining PRIVATE "${CMAKE_SOURCE_DIR}/include")

# 设置构建类型
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()


# Add a custom target to run the executable after building
# This allows the user to run the executable with a simple command
add_custom_target(run
  COMMAND CppAlgorithmsTraining
  DEPENDS CppAlgorithmsTraining
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  COMMENT "Running CppAlgorithmsTraining..."
)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_HOME_DIRECTORY}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")

find_package(spdlog CONFIG REQUIRED)
target_link_libraries(CppAlgorithmsTraining PRIVATE spdlog::spdlog)