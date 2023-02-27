# ArduIllusion
Control Flight Illusion gauges with an Arduino.

I started this project in 2014 as part of a project to make "analog" instruments available for UAV/RPAS ground control stations. I recently (02/2023) stumbled about my old code and noticed that there are still some things to do, so I'm refreshing this repo and shall finish my work on this library.

## Currently supported

|Product|Description|Supported|
|-----|-----|-----|
|[GSA-034](https://www.flightillusion.com/military-vintage/other-gauges-mil/gsa-034-attitude-indicator-blue-black/)|Attitude Indicator|Write|
|[GSA-016](https://www.flightillusion.com/military-vintage/other-gauges-mil/gsa-016-digital-altimeter-3/)|Digital Altimeter|Write|
|[GSA-040](https://www.flightillusion.com/military-vintage/other-gauges-mil/gsa-040-dir-gyro-compass-with-heading-bug/)|Gyrocompass|Write|
|[GSA-072](https://www.flightillusion.com/military-vintage/chrono-gauges-mil/gsa-072-chronometerclock-davtron-style/)|General Aviation Clock|Write|
|[GSA-020](https://www.flightillusion.com/helicopter/other-gauges-helicopter/gsa-020-indicated-air-speed-120-knts-r22/)|Airspeed Indicator|Write (incomplete)|
|[GSA-023](https://www.flightillusion.com/military-vintage/vertical-speed-indicators-mil/gsa-023-vertical-speed-indicator-3000-ftmin/)|Vertical Speed Indicator|Currently under work|

## Gauges pinout
```
Pin-1: 	+5V		
Pin-2: 	+12V		
Pin-3: 	+5V		
Pin-4: 	+5V		
Pin-5: 	GND		
Pin-6: 	GND		
Pin-7: 	GND
Pin-8: 	TxD	(TTL level!)	
Pin-9:	GND
Pin10:	RxD	(TTL level!)	
```