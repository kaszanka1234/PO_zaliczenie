#include "QueueFamilyIndices.h"
#include <vector>

bool QueueFamilyIndices::isComplete() {
	return graphicsFamily.has_value() && presentFamily.has_value();
}