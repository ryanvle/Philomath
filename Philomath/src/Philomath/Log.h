#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "memory"

namespace Philomath {

	class PM_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;  }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
	
}

// Core log macros
#define PM_CORE_TRACE(...)			::Philomath::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PM_CORE_INFO(...)			::Philomath::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PM_CORE_WARN(...)			::Philomath::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PM_CORE_ERROR(...)			::Philomath::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PM_CORE_CRITICAL(...)		::Philomath::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define PM_TRACE(...)				::Philomath::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PM_INFO(...)				::Philomath::Log::GetClientLogger()->info(__VA_ARGS__)
#define PM_WARN(...)				::Philomath::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PM_ERROR(...)				::Philomath::Log::GetClientLogger()->error(__VA_ARGS__)
#define PM_CRITICAL(...)			::Philomath::Log::GetClientLogger()->critical(__VA_ARGS__)



