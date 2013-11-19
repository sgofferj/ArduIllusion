//
// Library for controlling FLight Illusion sim gauges
//
// Copyright (c) 2013 Stefan Gofferje. All rights reserved.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later
// version.
//
// This library is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
// PURPOSE. See the GNU Lesser General Public License for more
// details.
//
// You should have received a copy of the GNU Lesser General
// Public License along with this library; if not, write to the
// Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
// Boston, MA 02110-1301 USA
//

#include <ArduIllusion.h>

// ----- Constructor ---------------------------------------------------------
FIGaugeSet:FIGaugeSet {
  
}
// ----- Private -------------------------------------------------------------
void sendCommand(char id, char cmd, long value) {
  char buffer[]={0x00,0x00,0x00,0x00,0x00,0x00};
  char bytethree, int2, cnt;
  long long1;
  buffer[1]=id;      // Gauge ID
  buffer[5]=0xff;    // Terminator
  
  long1 = abs(value);
  int2 = long1 >> 8;
  
  buffer[3]=(long1 & 0xff) | 0x01;
  buffer[4]=(int2 & 0xff) | 0x02;

  bytethree = cmd << 4;
  bytethree |= (long1 & 0x01);
  bytethree |= (int2 & 0x02);
  if (value < 0) bytethree |= 0x0C;
  else bytethree |= 0x08; 

  buffer[2]=bytethree & 0xff;
  
  for (cnt=0;cnt<=5;cnt++) {
    gaugeSet.write(buffer[cnt]);
  }
}

// ----- Public --------------------------------------------------------------