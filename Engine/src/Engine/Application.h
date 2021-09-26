#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Engine
{
	class ENGINE_API Application
	{
	public:

	// Constructors and Destructor:

		Application();
		virtual ~Application();

	// Functions:

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}

