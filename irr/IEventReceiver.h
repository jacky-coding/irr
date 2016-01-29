
#ifndef __I_EVENT_RECEIVER_H_INCLUDED__
#define __I_EVENT_RECEIVER_H_INCLUDED__

#include "Keycodes.h"

namespace irr
{

	struct SEvent
	{

		struct SKeyInput
		{
			wchar_t Char;

			EKEY_CODE Key;

			bool PressedDown : 1;

			bool Shift : 1;

			bool Control : 1;
		};
	};


	class IEventReceiver
	{
	public:
		virtual ~IEventReceiver(){}

		virtual bool OnEvent(const SEvent& event) = 0;
	};
}


#endif