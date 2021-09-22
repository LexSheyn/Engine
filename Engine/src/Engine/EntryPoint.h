#pragma once

#ifdef EG_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	// Creating application
	auto application = Engine::CreateApplication();

	// Running application
	application->Run();

	// Deleting sandbox object
	delete application;

	return 0;
}

#endif