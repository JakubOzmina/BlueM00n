#pragma once

#include <memory>
#include "Core.h"
//Log submodule
#include "spdlog/spdlog.h"
// define new logger
#include "spdlog/sinks/stdout_color_sinks.h"

namespace BlueM00n {
	class BLUEM00N_API Log {
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetEngineLogger() { return s_EngineLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_EngineLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define BM_ENGINE_ERROR(...) ::BlueM00n::Log::GetEngineLogger()->error(__VA_ARGS__)
#define BM_ENGINE_WARN(...) ::BlueM00n::Log::GetEngineLogger()->warn(__VA_ARGS__)
#define BM_ENGINE_INFO(...) ::BlueM00n::Log::GetEngineLogger()->info(__VA_ARGS__)
#define BM_ENGINE_TRACE(...) ::BlueM00n::Log::GetEngineLogger()->trace(__VA_ARGS__)
#define BM_ENGINE_CRITICAL(...) ::BlueM00n::Log::GetEngineLogger()->critical(__VA_ARGS__)

#define BM_CLIENT_ERROR(...) ::BlueM00n::Log::GetClientLogger()->error(__VA_ARGS__)
#define BM_CLIENT_WARN(...) ::BlueM00n::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BM_CLIENT_INFO(...) ::BlueM00n::Log::GetClientLogger()->info(__VA_ARGS__)
#define BM_CLIENT_TRACE(...) ::BlueM00n::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BM_CLIENT_CRITICAL(...) ::BlueM00n::Log::GetClientLogger()->critical(__VA_ARGS__)
