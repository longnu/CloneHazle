#pragma once

#include "Sengine/Layer.h"

namespace Sengine {

	class ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();

		void OnAttach();
		void OnDetach();
		void OnUpdate();
		void OnEvent(Event& event);

	private:


	};


}

class ImGuiLayer
{
};

