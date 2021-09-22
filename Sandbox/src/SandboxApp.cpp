#include <Engine.h>

class Sandbox : public Engine::Application
{
public:

// Constructors and Destructor:

	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Engine::Application* Engine::CreateApplication()
{
	return new Sandbox();
}