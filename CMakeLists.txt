cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(app)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

add_compile_definitions(HV_SOURCE)
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSNV")
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS)
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")

endif()

add_subdirectory(src)

# add_subdirectory(third)


# enable testing and define tests
# enable_testing()
# add_subdirectory(tests)
