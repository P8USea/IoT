#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

LED led1(LED1_PIN, LED1_ACT);
LED led2(LED2_PIN, LED2_ACT);
LED* led = &led2;


void btnPush();
void btnDoubleClick();
void btnHold();

OneButton button(BTN_PIN, !BTN_ACT);

void setup()
{
    button.attachClick(btnPush);
    button.attachDoubleClick(btnDoubleClick);
    button.attachLongPressStart(btnHold);

}

void loop()
{
    (*led).loop();

    button.tick();
}

void btnPush()
{
    (*led).flip();
}

bool ledState = true;
void btnDoubleClick()
{
    ledState = !ledState;
    led = ledState?&led1:&led2;
}
void btnHold()
{
    (*led).on();
    delay(200);
    (*led).off();
}