#pragma once

#ifdef SE_PLATFORM_WINDOWS

extern Sengine::Application* Sengine::CreateApplication();

int main(int argc, char** argv)
{
	Sengine::Log::Init();
	SE_CORE_WARN("Initialized Log!");
	int a = 5;
	SE_INFO("Hello! Var={0}", a);

	auto app = Sengine::CreateApplication();
	app->Run();
	delete app;
}

#endif