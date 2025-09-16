#pragma once
#include <memory.h>
#include "Macros.h"
#include <spdlog.h>

namespace qsr {
	class QSR_API Logger
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return coreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return clientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> coreLogger;
		static std::shared_ptr<spdlog::logger> clientLogger;
	};
}
#define QSR_CORE_TRACE(...)		::qsr::Logger::GetCoreLogger()->trace(__VA_ARGS__)
#define QSR_CORE_INFO(...)		::qsr::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define QSR_CORE_WARN(...)		::qsr::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define QSR_CORE_ERROR(...)		::qsr::Logger::GetCoreLogger()->error(__VA_ARGS__)
#define QSR_CORE_FATAL(...)		::qsr::Logger::GetCoreLogger()->critical(__VA_ARGS__)

#define QSR_TRACE(...)			::qsr::Logger::GetClientLogger()->trace(__VA_ARGS__)
#define QSR_INFO(...)			::qsr::Logger::GetClientLogger()->info(__VA_ARGS__)
#define QSR_WARN(...)			::qsr::Logger::GetClientLogger()->warn(__VA_ARGS__)
#define QSR_ERROR(...)			::qsr::Logger::GetClientLogger()->error(__VA_ARGS__)
#define QSR_FATAL(...)			::qsr::Logger::GetClientLogger()->critical(__VA_ARGS__)


