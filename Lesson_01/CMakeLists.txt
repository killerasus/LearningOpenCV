cmake_minimum_required (VERSION 3.8)

# Required packages
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

# Add source to this project's executable.
add_executable(Lesson01 "src/main.cpp")

target_link_libraries(Lesson01 ${OpenCV_LIBS})

configure_file("img/mandrill.tiff" ${CMAKE_CURRENT_BINARY_DIR}/img/mandrill.tiff COPYONLY)
