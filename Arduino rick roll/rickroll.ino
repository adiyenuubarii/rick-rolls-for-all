// Dependencies
#include <HID-Project.h>
#include <HID-Settings.h>

// Main
void main()
{
  Keyboard.begin(); // Start Keyboard
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI); // "Windows" Key
  Keyboard.press(114); // Pressing the "r" Key
  Keyboard.press(KEY_RETURN); // "Enter" Key
  Keyboard.releaseAll(); // Let Go of All Keys
  delay(1000); // Waits 1000 Milliseconds
  Keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ"); // Link to Video
  Keyboard.press(KEY_RETURN); // "Enter" Key
  Keyboard.end(); // Stop Keyboard
}

void loop() {} // Unused
