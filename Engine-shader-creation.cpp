#define GLFW_INCLUDE_VULKAN
#include "Engine.h"

VkShaderModule Engine::createShaderModule(const std::vector<char>& data) {
	VkShaderModuleCreateInfo createInfo = {};
	createInfo.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
	createInfo.codeSize = data.size();
	createInfo.pCode = reinterpret_cast<const uint32_t*>(data.data());

	VkShaderModule shaderModule;
	if (vkCreateShaderModule(device, &createInfo, nullptr, &shaderModule) != VK_SUCCESS) {
		throw std::runtime_error("can't create shader module");
	}

	return shaderModule;
}
