#ifndef __IRRLICHT_H_INCLUDED__
#define __IRRLICHT_H_INCLUDED__

#include"IrrlichtDevice.h"
#include "EDriverTypes.h"
#include "dimension2d.h"
#include "IEventReceiver.h"

namespace irr
{
	extern "C" IRRLICHT_API IrrlichtDevice* IRRCALLCONV createDevice(
		video::E_DRIVER_TYPE deviceType = video::EDT_SOFTWARE,
		const core::dimension2d<u32>& windowSize = (core::dimension2d<u32>(640, 480)),
		u32 bits = 16,
		bool fullscreen = false,
		bool stencilbuffer = false,
		bool vsync = false,
		IEventReceiver* receiver = 0);
}

#endif