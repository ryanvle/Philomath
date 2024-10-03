#include "pmpch.h"
#include "Application.h"

#include "Philomath/Events/ApplicationEvent.h"
#include "Philomath/Log.h"

namespace Philomath {

	Application::Application() 
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() {

	}

	void Application::Run() 
	{
		while (m_Running) 
		{
			m_Window->OnUpdate();
		}
	}

}