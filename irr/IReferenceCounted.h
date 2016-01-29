
#ifndef __I_IREFERENCE_COUNTED_H_INCLUDED__
#define __I_IREFERENCE_COUNTED_H_INCLUDED__

#include "irrTypes.h"

namespace irr
{ 
	class IReferenceCounted
	{
	public:
		IReferenceCounted() :DebugName(0), ReferenceCounter(1)
		{

		}
		virtual ~IReferenceCounted()
		{

		}
		
		void grab()const{ ++ReferenceCounter; }

		bool drop() const
		{
			_IRR_DEBUG_BREAK_IF(ReferenceCounter <= 0)

				--ReferenceCounter;
			if (!ReferenceCounter)
			{
				delete this;
				return true;
			}

			return false;
		}

		s32 getReferenceCount()const
		{
			return ReferenceCounter;
		}

	protected:
		void setDebugName(const c8* newName)
		{
			DebugName = newName;
		}

	private:

		const c8* DebugName;
		mutable s32 ReferenceCounter;
	};

}

#endif