#pragma once

#include "Device.h"

namespace Framework
{
	namespace DirectInput
	{
		class CKeyboard : public CDevice
		{
		public:
									CKeyboard(LPDIRECTINPUTDEVICE8, HWND);
			virtual					~CKeyboard();

			void					ProcessEvents(const InputEventHandler&) override;
		};
	}
}
