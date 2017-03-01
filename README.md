# KT0803L
KT0803L driver for ESP8266 (esp-open-rtos)


## Description
KT0803L is a low cost FM transmitter with I2C interface. Users can use it to build a small FM radio transmitter. The software provides interfaces to access registers in KT0803L and gives meaningful result to user.


## How to use the software
First at all, build your own KT0803L circuit. If you don't know how, the reference design of [datasheet](http://radio-z.ucoz.lv/kt_0803/KT0803L_V1.3.pdf) would be helpful for you.


Make sure you are using esp-open-rtos. The current version of this software is for esp-open-rtos only. Put this software in the extra folder of esp-open-rtos and add "extras/kt0803l" and "extras/i2c" to "EXTRA_COMPONENTS" variable of the makefile of your project. You may want to disable debug output by setting 'KT0803L_NDEBUG' variable.


## Initialization
At the start of your project, you should to initialize KT0803L. Here is an example:

	KT0803L_SETTING txSetting={
		.useExtInductor=KT0803L_FALSE,
		.clkSetting={
			.isUpToSW=KT0803L_TRUE,
			.isXTAL=KT0803L_TRUE,
			.freq=KT0803L_CLK_FREQ_32_768KHZ
		},
		.isPLTAmpHigh=KT0803L_FALSE,
		.isPHTCNST50us=KT0803L_FALSE,
		.isFDEV112_5KHZ=KT0803L_FALSE,
		.isCHSELPAOff=KT0803L_FALSE
	};
	.
	.
	.
	KT0803L_init(&txSetting);
	KT0803L_setFreq(960);
	KT0803L_setPGAGain(KT0803L_PGA_GAIN_M5DB, KT0803L_FALSE);
	KT0803L_PADown(KT0803L_FALSE);

Above statements configure KT0803L as:
* No external pull up inductor on antenna side used.
* Clock setting is up to SW1/SW2 pins.
* Clock source is crystal oscillator.
* Crystal oscillator is rated at 32.768KHz.
* Pilot tone amplitude is low.
* Use 75us de-emphasize time.
* Frequency deviration delection is 75KHz.
* Mute when changing channel.
* Initial frequency is 96MHz.
* Enable audio power amplifier.
* PGA control is -5dB.
* Enable RF output.

After initializing KT0803L, you can invoke the rest APIs in this software.

## Debugging
You can invoke KT0803L_dump() to print register values in your project.
