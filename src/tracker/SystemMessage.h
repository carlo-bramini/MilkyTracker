/*
 *  tracker/SystemMessage.h
 *
 *  Copyright 2009 Peter Barth
 *
 *  This file is part of Milkytracker.
 *
 *  Milkytracker is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Milkytracker is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Milkytracker.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/*
 *  SystemMessage.h
 *  MilkyTracker
 *
 *  Created by Peter Barth on 27.12.07.
 *
 */

#ifndef __SYSTEMMESSAGE_H__
#define __SYSTEMMESSAGE_H__

#include "BasicTypes.h"

class SystemMessage
{
private:
	class PPScreen& screen;
	pp_uint32 message;

public:
	enum Messages
	{
		MessageSoundDriverInitFailed,
		MessageFullScreenFailed,
		MessageChangeRestart,
		MessageLimitedInput
	};
	
	SystemMessage(PPScreen& screen, Messages message);
	
	void show();
};

#endif
