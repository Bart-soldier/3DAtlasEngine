#include "Application.hpp"

namespace AE {

	void Application::run() {
		while (!_AEWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}