// Example to open a terminal window on a Raspbian system and then close it after running a command.

#include "DigiKeyboard.h"
#define KEY_ESC     41
void setup() {}
void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_F2, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("lxterminal");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("A GHOST WROTE THIS");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

for(;;){ /*empty*/ }}
