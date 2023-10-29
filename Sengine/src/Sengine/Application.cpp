#include "sepch.h"

#include "Application.h"
#include "Sengine/Events/ApplicationEvent.h"
#include "Sengine/Log.h"

namespace Sengine {

	Application::Application()
	{
	}


	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			SE_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			SE_TRACE(e);
		}

		while (true);
	}

}