#pragma once

#ifdef PM_PLATFORM_WINDOWS
	#ifdef PM_BUILD_DLL
		#define PM_API __declspec(dllexport)
	#else	
		#define PM_API __declspec(dllimport)
	#endif
#else
	#error Philomath only supports Windows!
#endif

#ifdef PM_ENABLE_ASSERTS
	#define PM_ASSERT(x, ...) { if(!(x)) {PM_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define PM_CORE_ASSERT (x, ...) { if(!(x)) { PM_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define PM_ASSERT(x, ...)
	#define PM_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)