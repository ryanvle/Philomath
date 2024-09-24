#pragma once

#include "pmpch.h"

#include "Philomath/Core.h"
#include "Philomath/Events/Event.h"

namespace Philomath {

	struct WindowProps
	{
		std::string Title;
		unsigned int Width;
		unsigned int Height;

		WindowProps(const std::string& title = "Philomath Engine",
			unsigned int width = 1280,
			unsigned int height = 720)
			: Title(title), Width(width), Height(height)
			{
			}
	};
}