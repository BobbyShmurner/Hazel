#include "Application.h"

#include <stdio.h>

namespace Hazel {
	Application::Application() {}
	Application::~Application() {}

	void Application::Run() {
		printf("Welcome To Hazel!");
		while (true);
	}
}