#pragma once

#include "AEWindow.hpp"
#include "AEPipeline.hpp"

namespace AE {

	class Application {

		public:
			static constexpr int WIDTH = 800;
			static constexpr int HEIGHT = 600;

			void run();

		private:
			AEWindow _AEWindow { WIDTH, HEIGHT, "Hello Vulkan!" };
			AEPipeline _AEPipeline{ "simple_shader.vert.spv", "simple_shader.frag.spv" };
	};
}