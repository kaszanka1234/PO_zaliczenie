#pragma once
#include <vector>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
class Config {
public:
	static const int WIDTH = 1024;
	static const int HEIGHT = WIDTH/16*9;
	static const int MAX_FRAMES_IN_FLIGHT = 2;
	static const char* TITLE;

	static bool anisotropyEnable;

#ifdef NDEBUG
	static const bool enableValidationLayers = false;
#else
	static const bool enableValidationLayers = true;
#endif

	static const inline std::vector<const char*> validationLayers = {
		"VK_LAYER_LUNARG_standard_validation"
	};

	static const inline std::vector<const char*> deviceExtensions = {
		VK_KHR_SWAPCHAIN_EXTENSION_NAME
	};

};