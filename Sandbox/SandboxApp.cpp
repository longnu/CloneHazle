#include <Sengine.h>

class Sandbox : public Sengine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Sengine::Application* Sengine::CreateApplication()
{
	return new Sandbox();
}