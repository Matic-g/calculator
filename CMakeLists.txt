cmake_minimum_required(VERSION 3.16)
project(Calculator CXX)
set(CMAKE_CXX_STANDARD 17)

add_library(calc src/calculator.cpp)
target_include_directories(calc PUBLIC include)

add_executable(calculator src/main.cpp)
target_link_libraries(calculator calc)

enable_testing()
add_executable(test_calc tests/test_calculator.cpp)
target_link_libraries(test_calc calc)
add_test(NAME test_calc COMMAND test_calc)