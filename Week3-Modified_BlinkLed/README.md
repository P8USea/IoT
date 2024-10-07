This is an update of the blinkLed repo.
I added:
- Button and LED, one more each. (Pin 23 and 21 in the .ini file)
- In the main function, a pointer LED* led being assigned to led1 or led2 depends on which condition it is, concretely whenever a Double Click event is triggered would swap between 2 LEDs.
- One more adjustment, I fix the btnHold function to fire a blink just one time by switching ON-OFF with an interval of 200ms.

And... That's it! 