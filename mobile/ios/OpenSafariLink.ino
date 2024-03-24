#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0); // Clear any previous input
  DigiKeyboard.delay(200);

  // Show the home screen (iOS)
  DigiKeyboard.sendKeyStroke(KEY_H, MOD_GUI_LEFT);
  DigiKeyboard.delay(250);

  // Lock button (iOS)
  DigiKeyboard.sendKeyStroke(KEY_L, MOD_GUI_LEFT);
  DigiKeyboard.delay(150);

  // Open Spotlight Search (macOS)
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(350);

  // Type Safari
  DigiKeyboard.println("Safari");
  DigiKeyboard.delay(250);

  // Open Safari
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(400);

  // Open a new tab in Safari
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);

  // Move to the address bar in Safari
  DigiKeyboard.sendKeyStroke(KEY_L, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);

  // Go to apple.com
  DigiKeyboard.println("apple.com");
  DigiKeyboard.delay(600);

  // Navigate to the website
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  while (true) {
    DigiKeyboard.delay(10000); // Prevent re-execution
  }
}
