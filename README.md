## IR Transmitter/Receiver with M5StickC Plus 2
1. 🔑__Overview__

* What is IR?
* Use cases (e.g. controlling TVs, decoding remote signals)

2. 🔧__Components Needed__

* M5StickC Plus 2

* IR LED + IR receiver (e.g., TSOP38238)

* Jumper wires

* Breadboard (optional)

3. ⚙️__Wiring Diagram__

![m5ir](https://github.com/user-attachments/assets/978385f1-f045-42e0-9e59-116d62d6b29b)

4. 🔓__Wiring Table__

## IR Receiver

| IR Receiver Pin | Connect To (M5StickC)  |
|-----------------|------------------------|
| VCC             | 3.3V                   |
| GND             | GND                    |
| OUT             | GPIO 36                |

## IR LED

| IR LED Pin | Connect To (M5StickC)     |
|------------|---------------------------|
| + (Anode)  | GPIO 9 (or GPIO 26)       |
| - (Cathode)| GND                       |

### 🧪 Testing

1. Open Arduino IDE.
2. Select your board (M5StickC Plus or Plus2).
3. Install the `IRremote` library by shirriff via Library Manager.
4. Upload the `IR_SendReceive.ino` sketch from the `examples/IR_SendReceive` folder.
5. Open Serial Monitor at 115200 baud.
6. Press a button on your IR remote — received codes should display.
7. Try sending codes with an IR LED to control a device (e.g., a TV).

### 📝 Notes

- This example uses the [IRremote](https://github.com/Arduino-IRremote/Arduino-IRremote) library.
- Works with many IR receivers (e.g., VS1838B) and 940nm IR LEDs.
- IR LED pins may vary per board; ensure GPIO supports PWM for sending.
- If using M5StickC Plus2, note that some GPIOs are reserved (check M5 docs).
