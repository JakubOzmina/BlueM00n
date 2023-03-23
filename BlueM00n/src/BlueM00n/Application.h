#pragma once

#include "Core.h"

namespace BlueM00n {
	class BLUEM00N_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Defined in client App
	Application* CreateApplication();
}

