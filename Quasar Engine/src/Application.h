#pragma once
#include "Macros.h"


namespace qsr {
	class QSR_API Application 
	{
	public:
		Application();
		virtual ~Application();

		void Start();
		void Run();
		void Exit();
	};

	Application* CreateApplication();
}

