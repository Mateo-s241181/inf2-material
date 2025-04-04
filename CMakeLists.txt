cmake_minimum_required(VERSION 3.10)

project("Informatik 2")

set(CMAKE_COMPILE_WARNING_AS_ERROR ON)  # treat warning as errors
set(CMAKE_CXX_STANDARD 20)              # c++ standard 20

#enable all warnings
add_compile_options(-Wall -Wextra -pedantic -Werror)  # GCC/Clang all warnings and treat as error


find_package(Catch2 REQUIRED)                                   # Suche die Bibliothek catch2
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)      

include(CTest)  # globale include statements
include(Catch)

add_subdirectory(src)

cmake_path(SET GITIGNORE_FILE NORMALIZE "${CMAKE_BINARY_DIR}/.gitignore")
file(WRITE ${GITIGNORE_FILE} "*")
