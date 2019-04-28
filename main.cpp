#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <iostream>

#include "Engine.h"

int main(int argc, const char* argv[]) {
	Engine app;
#ifndef NDEBUG
	try {
		app.run();
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
#else
	app.run();
	return 0;
#endif
	
}