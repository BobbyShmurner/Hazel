#include "Application.h"

#include "Hazel/Log.h"

namespace Hazel {
	Application::Application() {}
	Application::~Application() {}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		EventCategory category;
		HZ_TRACE(e);

		category = EventCategory::EventCategoryMouse;
		TestCategoryLog(e, category);

		category = EventCategory::EventCategoryInput;
		TestCategoryLog(e, category);

		category = EventCategory::EventCategoryApplication;
		TestCategoryLog(e, category);

		category = EventCategory::EventCategoryKeyboard;
		TestCategoryLog(e, category);

		category = EventCategory::EventCategoryMouseButton;
		TestCategoryLog(e, category);

		while (true);
	}

	void Application::TestCategoryLog(WindowResizeEvent e, EventCategory category) {
		if (e.IsInCategory(category)) {
			HZ_INFO("{0} is in EventCategoryMouse!", e.GetName());
		}
		else {
			HZ_ERROR("{0} Is not in EventCategoryMouse", e.GetName());
		}
	}
}