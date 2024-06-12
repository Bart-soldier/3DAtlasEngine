#include "AEWindow.hpp"

namespace AE {

	AEWindow::AEWindow(int width, int height, std::string name) : _width{ width }, _height{ height }, _name{ name } {
		InitializeWindow();
	}

	AEWindow::~AEWindow() {
		glfwDestroyWindow(_window);
		glfwTerminate();
	}

	bool AEWindow::shouldClose() {
		return glfwWindowShouldClose(_window);
	}

	void AEWindow::InitializeWindow() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		_window = glfwCreateWindow(_width, _height, _name.c_str(), nullptr, nullptr);
	}

}