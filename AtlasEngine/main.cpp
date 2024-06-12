#include "Application.hpp"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main() {
	AE::Application _application{};

	try {
		_application.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}