/******************************************************************************
**  Copyright (c) 2006-2013, Calaos. All Rights Reserved.
**
**  This file is part of Calaos Home.
**
**  Calaos Home is free software; you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation; either version 3 of the License, or
**  (at your option) any later version.
**
**  Calaos Home is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with Calaos; if not, write to the Free Software
**  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
**
******************************************************************************/
#ifndef AVRYAMAHA_H
#define AVRYAMAHA_H

#include <Calaos.h>
#include <AVReceiver.h>

namespace Calaos
{

//Manage Denon AV devices
class AVRYamaha: public AVReceiver
{
        protected:

                int inputFromString(string source);
                string inputToString(int source);

                virtual void processMessage(string msg);
                virtual void connectionEstablished();

        public:
                AVRYamaha(Params &p);
                virtual ~AVRYamaha();

                virtual void Power(bool on, int zone = 1);
                virtual void setVolume(int volume, int zone = 1);
                virtual void selectInputSource(int source, int zone = 1);
                virtual bool hasDisplay() { return false; }
};

}

#endif // AVRYAMAHA_H