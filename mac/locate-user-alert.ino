#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.delay(500);

  // Open Spotlight Search
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // Type Terminal
  DigiKeyboard.println("Terminal");
  DigiKeyboard.delay(500);

  // Execute command in Terminal for speech synthesis with geolocation
  DigiKeyboard.println("location=$(curl -s http://ip-api.com/json/); say \"Don't mind me, $(whoami), I'm just a talking computer in $(echo $location | jq -r '.city'), $(echo $location | jq -r '.regionName'), $(echo $location | jq -r '.country').\"; exit;");
  
  while(true) {
    DigiKeyboard.delay(10000); // Prevent re-execution
  }
}
