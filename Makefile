SRC := src
LIB := lib
INCLUDE := include
object = Application

object: ${SRC}/Application.cpp
	g++ ${SRC}/Application.cpp -o ./output/demo.exe ${LIB}/libglfw3dll.a ${LIB}/libopengl32.a ${LIB}/glew32.lib

Application.cpp: ${INCLUDE}/glfw3.h