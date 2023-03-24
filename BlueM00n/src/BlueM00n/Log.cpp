#include "Log.h"

namespace BlueM00n {

	std::shared_ptr<spdlog::logger> Log:: s_EngineLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init() {
		spdlog::set_pattern("%^%n: (%l) [%T]: %v%$");
		s_EngineLogger = spdlog::stdout_color_mt("BLUEM00N");
		s_EngineLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}