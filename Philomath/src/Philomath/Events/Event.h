#pragma once

#include "Philomath/Core.h"

#include <string>
#include <functional>

namespace Philomath {

	// Events in Philomath are currently blocking,
	// When an event occurs it immediately gets sent and must be dealt with right away.
	// For the future, a better strategy  might be to buffer events in an event
	// bus and process them during the "event" part of the update stage.

	enum class EventType
	{

		None = 0,
		WindowClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
		AppTick, AppUpdate, AppRender,
		KeyPressed, KeyReleased,
		MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
	};

	enum EventCategory
	{
		None = 0,
		EventCategoryApplication		= BIT(0),
		EventCategoryInput				= BIT(1),
		EventCategoryKeyboard			= BIT(2),
		EventCategoryMouse				= BIT(3),
		EventCategoryMouseButton		= BIT(4)
	};

}