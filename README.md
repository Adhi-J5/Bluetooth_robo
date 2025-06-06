# 🤖 Bluetooth Controlled Robot Using Arduino

This project demonstrates a simple Bluetooth-controlled robot movement system using an **Arduino Uno**, a **16x2 LCD**, and motor driver pins.  
Commands are sent via serial (Bluetooth module) to control the robot's direction, and the status is displayed on the LCD as well as the Serial Monitor.

---

## 📦 Hardware Components

- Arduino Uno  
- Bluetooth Module (e.g., HC-05 / HC-06)  
- Motor driver or transistors connected to motor pins (4 output pins)  
- 16x2 LCD Display  
- Jumper wires and power supply  

---

## ⚙️ How It Works

- Robot listens to commands sent over serial Bluetooth connection.  
- Commands are single digits representing directions:
  - `1` - Move Forward  
  - `2` - Move Backward  
  - `3` - Turn Right  
  - `4` - Turn Left  
  - `0` - Stop Movement  
- The Arduino controls motor driver pins accordingly.  
- LCD displays the current motion status in real-time.  
- Serial Monitor shows command feedback and movement status.

---

## 🔌 Arduino Pin Configuration

| Component        | Arduino Pin |
|------------------|-------------|
| Motor Forward 1  | 7           |
| Motor Forward 2  | 6           |
| Motor Backward 1 | 5           |
| Motor Backward 2 | 4           |
| LCD RS           | 13          |
| LCD EN           | 12          |
| LCD D4           | 11          |
| LCD D5           | 10          |
| LCD D6           | 9           |
| LCD D7           | 8           |

---

## 🚀 How to Use

1. Connect the hardware as per the pin configuration.  
2. Upload the Arduino code to your board.  
3. Connect your Bluetooth module to Arduino and pair it with your phone or PC.  
4. Use a serial Bluetooth terminal app to send commands (`1`, `2`, `3`, `4`, `0`).  
5. Observe the LCD and Serial Monitor to see the robot’s status.  

---

## 💡 Notes

- Make sure the Bluetooth baud rate matches the Serial baud rate (`9600`).  
- Motor drivers or H-bridge circuitry should be connected to the motor pins to safely drive motors.  
- Add debouncing or command validation for better reliability.  

---

## 🔮 Future Developments

- Integrate actual Bluetooth module code (e.g., HC-05) with software serial for wireless control.  
- Add motor driver module (L298N or similar) for safer and more efficient motor control.  
- Implement smoother motion controls such as PWM speed regulation.  
- Add obstacle detection sensors (ultrasonic or IR) for autonomous navigation and collision avoidance.  
- Improve command validation and implement debouncing to avoid erroneous commands.  
- Include feedback system using encoders to monitor motor position and speed.  
- Design a mobile app with a friendly UI to send commands easily.  
- Add battery level monitoring and power management features.  
- Implement additional movement commands (e.g., diagonal, stop gradually).  
- Add buzzer or LED indicators for better status feedback.

---

## 📜 License

This project is open-source and free to use for educational purposes.
