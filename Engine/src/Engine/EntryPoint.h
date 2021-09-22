#pragma once

#ifdef EG_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int32_t main(int argc, char** argv)
{
	// TEST
	Engine::Log::Init();
	EG_CORE_WARN("Log initialized successfully.");
	int32_t a = 5;
	EG_INFO("Welcome to Engine Var={0}", a);

	// Creating application
	auto application = Engine::CreateApplication();

	// Running application
	application->Run();

	// Deleting sandbox object
	delete application;

	return 0;
}

#endif