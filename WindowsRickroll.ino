#include "DigiKeyboard.h"
void setup() {}
void loop() {  
  DigiKeyboard.delay(4000); 
  DigiKeyboard.sendKeyStroke(0); 
  DigiKeyboard.delay(4000); 
  DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT); 
  DigiKeyboard.delay(500); 
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(200); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(5000);  
  DigiKeyboard.print("start \"https://www.youtube.com/watch?v=oHg5SJYRHA0\""); 
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_CONTROL_LEFT);  
for(;;){ /*empty*/ }} 
