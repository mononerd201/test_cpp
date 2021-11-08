#include <iostream>
#include <GLFW/glfw3.h>



int main()
{
	std::cout<<"Hello, World!\n";

	
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


