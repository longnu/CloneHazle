#pragma once

#include "Sengine/Layer.h"

namespace Sengine {

	class SENGINE_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();

		void OnAttach();
		void OnDetach();
		void OnUpdate();
		void OnEvent(Event& event);

	private:
		float m_Time = 0.0f;

	};


}

class ImGuiLayer
{
};

