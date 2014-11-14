#ifndef __RANGEFINDER_H__
#define __RANGEFINDER_H__
#define __RANGEFINDER_H__DEBUG 0
#define PING_TIMEOUT 10000


#include <Arduino.h>

class RangeFinder
{
  private:
		long calcDistance(long time, int flag);
		long ping();

  public:
		int transmitPin, echoPin;
		boolean debug;
    
		void init(int tp, int ep, boolean debug);
		long getDistance();
};

extern RangeFinder rangeFinder;

#endif
