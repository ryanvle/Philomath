#include "Application.h"

#include "Philomath/Events/ApplicationEvent.h"
#include "Philomath/Log.h"

namespace Philomath {

	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		HZ_TRACE(e);

		while (true);
	}

}