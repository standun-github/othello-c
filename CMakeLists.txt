cmake_minimum_required(VERSION 3.16)
project(opengltest)

add_executable(opengltest main.cpp draw.cpp draw.h Disk.cpp Disk.h player.cpp player.h board.cpp board.h utility.cpp utility.h coord.cpp coord.h moves.cpp moves.h)

find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)
find_package(glm REQUIRED)
find_package(GLUT REQUIRED)

target_link_libraries(opengltest GL glfw)
target_link_libraries(opengltest glfw ${GLFW_LIBRARIES} GLEW)
target_link_libraries(opengltest glm)
target_link_libraries(opengltest ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})