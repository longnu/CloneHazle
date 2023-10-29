#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Sengine {

	class SENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define SE_CORE_TRACE(...)    ::Sengine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SE_CORE_INFO(...)     ::Sengine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SE_CORE_WARN(...)     ::Sengine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SE_CORE_ERROR(...)    ::Sengine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SE_CORE_FATAL(...)    ::Sengine::Log::GetCoreLogger()->fatal(__VA_ARGS__)
							
// Client log macros			
#define SE_TRACE(...)	      ::Sengine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SE_INFO(...)	      ::Sengine::Log::GetClientLogger()->info(__VA_ARGS__)
#define SE_WARN(...)	      ::Sengine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SE_ERROR(...)	      ::Sengine::Log::GetClientLogger()->error(__VA_ARGS__)
#define SE_FATAL(...)	      ::Sengine::Log::GetClientLogger()->fatal(__VA_ARGS__)