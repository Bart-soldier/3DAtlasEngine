#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace AE {

	class AEWindow {

		public:
			AEWindow(int width, int height, std::string name);
			~AEWindow();

			AEWindow(const AEWindow&) = delete;
			AEWindow& operator=(const AEWindow&) = delete;

			bool shouldClose();

		private:
			GLFWwindow* _window;
			std::string _name;
			const int _width;
			const int _height;

			void InitializeWindow();
	};
}