RangeFinder
===========

Ultrasonic rangefinder library for Arduino.

Based on code found:
http://arduino.cc/en/Tutorial/Ping?from=Tutorial.UltrasoundSensor

I have packaged up the rangefinder code from the Arduino site into a handy library. I've added a ping timeout option so that when the sensor does not hear it's echo it will timeout gracefully and in a time just longer than what it takes sound to move across the detectable distance.
