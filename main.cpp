#include <iostream>
#include <GLFW/glfw3.h>

#include "Adder/adder.h"

int main()
{
	std::cout<<"Hello, World!\n";
	std::cout<<"adding 2 and 3: "<<add(2,3)<<"\n";
	
	GLFWwindow* window;

	if (!glfwInit())
	{
		return -1;
	}

	window = glfwCreateWindow(640,480,"Hello World",NULL,NULL);

	if(!window)
	{
		glfwTerminate();
		return -1;
	}

	
	while (!glfwWindowShouldClose(window))
	{

		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}


