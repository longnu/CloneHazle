#include <Sengine.h>

class ExampleLayer : public Sengine::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{

	}

	void OnUpdate() override
	{
		SE_INFO("ExampleLayer::Update");
	}

	void OnEvent(Sengine::Event& event) override
	{
		SE_TRACE("{0}", event);
	}
};

class Sandbox : public Sengine::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Sengine::ImGuiLayer());
	}

	~Sandbox()
	{

	}

};

Sengine::Application* Sengine::CreateApplication()
{
	return new Sandbox();
}