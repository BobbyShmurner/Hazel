#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Hazel/Events/ApplicationEvent.h"

namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void TestCategoryLog(WindowResizeEvent e, EventCategory category);
	};

	//Defined in The Client
	Application* CreateApplication();
}