![m5ir](https://github.com/user-attachments/assets/6bedbaf1-faf4-4ff7-a94f-44a41d0717fa)# IR Transmitter/Receiver with M5StickC Plus 2
1. __Overview__

* What is IR?
* Use cases (e.g. controlling TVs, decoding remote signals)

2. __Components Needed__

* M5StickC Plus 2

* IR LED + IR receiver (e.g., TSOP38238)

* Jumper wires

* Breadboard (optional)

3. __Wiring Diagram__

![m5ir](https://github.com/user-attachments/assets/978385f1-f045-42e0-9e59-116d62d6b29b)

4. __Wiring Table__

   IR Receiver

| IR Receiver Pin | Connect To (M5StickC)  |
|-----------------|------------------------|
| VCC             | 3.3V                   |
| GND             | GND                    |
| OUT             | GPIO 36                |

   IR LED

| IR LED Pin | Connect To (M5StickC)     |
|------------|---------------------------|
| + (Anode)  | GPIO 9 (or GPIO 26)       |
| - (Cathode)| GND                       |

