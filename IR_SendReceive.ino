#include <M5StickCPlus2.h>  // Use M5StickCPlus.h if not on Plus2
#include <IRremote.h>

// Use GPIO9 for IR receiver (VS1838B) and GPIO10 for IR LED
#define IR_RECEIVE_PIN 9
#define IR_SEND_PIN 10

void setup() {
  M5.begin();
  M5.Lcd.setRotation(3);
  M5.Lcd.setTextSize(2);
  M5.Lcd.println("IR Send/Receive");

  Serial.begin(115200);
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
  IrSender.begin(IR_SEND_PIN, ENABLE_LED_FEEDBACK);

  Serial.println("IR Ready. Waiting for signal...");
}

void loop() {
  // Receive IR
  if (IrReceiver.decode()) {
    Serial.print("Received IR code: ");
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);

    // Display on screen
    M5.Lcd.setCursor(0, 30);
    M5.Lcd.fillRect(0, 30, 240, 20, BLACK);
    M5.Lcd.print("IR: 0x");
    M5.Lcd.println(IrReceiver.decodedIRData.decodedRawData, HEX);

    IrReceiver.resume();
  }

  // Send IR on button press
  M5.update();
  if (M5.BtnA.wasPressed()) {
    unsigned long exampleCode = 0x20DF10EF;  // Replace with real code
    IrSender.sendNEC(exampleCode, 32);
    Serial.println("Sent IR code: 0x20DF10EF");

    M5.Lcd.setCursor(0, 60);
    M5.Lcd.fillRect(0, 60, 240, 20, BLACK);
    M5.Lcd.print("Sent: 0x");
    M5.Lcd.println(exampleCode, HEX);
  }
}
