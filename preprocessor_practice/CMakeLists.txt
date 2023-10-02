
cmake_minimum_required(VERSION 3.8)
project(preprocessor_practice)


if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include_directories(
    include
    ${preprocessor_practice_INCLUDE_DIRS}
)

add_executable(exe src/include_guard.cpp src/hello_def.cpp)


# target_include_directories(exe PUBLIC 
#     include
# )







