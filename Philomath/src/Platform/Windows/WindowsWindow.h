#pragma once

#include "Philomath/Window.h"

#include <GLFW/glfw3.h>

namespace Philomath {
	class WindowsWindow : public Window 
	{
	public:
		WindowsWindow(const WindowProps& props);
		virtual ~WindowsWindow();
		
		void OnUpdate() override;
	};
}