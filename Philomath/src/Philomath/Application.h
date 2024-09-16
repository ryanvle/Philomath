#pragma once

#include "Core.h"

namespace Philomath {

	class PM_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	//To be defined in CLIENT
	Application* CreateApplication();

}
