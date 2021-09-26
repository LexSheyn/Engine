#include "Application.h"

#include "Engine/Events/ApplicationEvent.h"
#include "Engine/Log.h"

namespace Engine
{
	// Constructors and Destructor:

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		// TEST
		WindowResizeEvent e(1280, 720);
		EG_TRACE(e);

		while (true)
		{

		}
	}
}