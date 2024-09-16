#pragma once

#ifdef PM_PLATFORM_WINDOWS

extern Philomath::Application* Philomath::CreateApplication();

int main(int argc, char** argv) {

	Philomath::Log::Init();
	PM_CORE_WARN("Initialized Log!");
	int a = 5;
	PM_INFO("Hello! Var={0}", a);


	auto app = Philomath::CreateApplication();
	app->Run();
	delete app;

}

#endif