#pragma once

#include "Event.h"

#include <sstream>

namespace Engine
{
	class ENGINE_API KeyEvent : public Event
	{
	public:
		inline int32_t GetKeyCode() const { return m_KeyCode; }

		EVENT_CLASS_CATEGORY(EventCtegoryKeyboard | EventCategoryInput)

	protected:
		KeyEvent(int32_t keyCode)
			: m_KeyCode(keyCode) {}

		int32_t m_KeyCode;
	};

	class ENGINE_API KeyPressedEvent : public KeyEvent
	{
	public:
		KeyPressedEvent(int32_t keyCode, int32_t repeatCount)
			: KeyEvent(keyCode), m_RepeatCount(repeatCount) {}

		inline int32_t GetRepeatCount() const { return m_RepeatCount; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyPressedEvent: " << m_KeyCode << " (" << m_RepeatCount << " repeats)";
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyPressed)

	private:
		int32_t m_RepeatCount;
	};

	class ENGINE_API KeyReleasedEvent : public KeyEvent
	{
	public:
		KeyReleasedEvent(int32_t keyCode)
			: KeyEvent(keyCode) {}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyReleaseEvent: " << m_KeyCode;
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyReleased)
	};
}