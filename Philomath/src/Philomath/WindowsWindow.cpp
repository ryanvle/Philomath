#include "pmpch.h"
#include "WindowsWindow.h"

namespace Philomath {
	static bool s_GLFWInitialized = false;

	Window* Window::Create(const WindowProps* props)
	{
		return new WindowsWindow(props);
	}

	WindowsWindow::WindowsWindow(const WindowProps& props)
	{
		Init(props);
	}

	WindowsWindow::~WindowsWindow()
	{
	}
}