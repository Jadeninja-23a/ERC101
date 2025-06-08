# 🎓 ER 101 — Roadmap


---

## 📺 YouTube Playlist
**ERC Digital Electronics Playlist**  
📌 All video references are from this playlist unless mentioned otherwise.  
▶️ [Watch the Playlist](https://youtube.com/playlist?list=PLwjK_iyK4LLBC_so3odA64E2MLgIRKafl&si=oMMceoZ6F5fteiB8)

---

## 📚 Main Reading Resource
**GeeksforGeeks Digital Electronics Tutorials**  
🔗 [Read the Full Series](https://www.geeksforgeeks.org/digital-electronics-logic-design-tutorials/)

---

## 📘 Modules

### 1. Introduction
📼 *Video 1*

---

### 2. 🧮 Number Systems
- [Number systems and conversions](https://www.geeksforgeeks.org/number-system-and-base-conversions/)
- [Binary arithmetic](https://www.geeksforgeeks.org/binary-number-system/)
- [2's complement and signed representation](https://www.geeksforgeeks.org/binary-representations-in-digital-logic/)  
📼 *Videos 2–15*

#### Side Quest (Optional)
- IEEE 754, Gray code, XS3, BCD → *(Same link as above)*
- Hamming Code (Error Correction)  
📼 *Videos 17–29*

---

### 3. 🔲 Logic Gates & Boolean Algebra
- [Basic & Universal Gates](https://computerengineeringforbabies.com/blogs/engineering/logic-gate/)  
📼 *Videos 30–34, 49, 51*
- [CMOS Gates](https://www.geeksforgeeks.org/cmos-logic-gate/)  
📼 *Video 173*
- [MOSFET (NMOS vs PMOS)]  
  - [Intro](https://www.circuitbread.com/tutorials/how-a-mosfet-works-at-the-semiconductor-level)  
  - [Comparison](https://www.circuitbread.com/tutorials/nmos-vs-pmos-and-enhancement-vs-depletion-mode-mosfets)

Once you understand the behavior of individual logic gates, the next logical step is learning how to express and simplify complex logic systems. This section is critical for designing efficient digital systems.

#### Boolean Logic
- [Boolean Algebra & Laws](https://www.geeksforgeeks.org/boolean-algebra/)  
📼 *Videos 35, 37*
- [SOP / POS](https://www.geeksforgeeks.org/what-is-sum-of-product-sop-form/) | [POS](https://www.geeksforgeeks.org/what-is-product-of-sum-pos-form/)  
📼 *Video 53*
- [K-Maps & Minimization](https://www.geeksforgeeks.org/k-mapkarnaugh-map/)  
📼 *Videos 57–61*
- [Don't Care Conditions](https://www.geeksforgeeks.org/dont-care-x-conditions-in-k-maps/)  
📼 *Video 62*
- [Quine-McCluskey (Optional)](https://www.geeksforgeeks.org/quine-mccluskey-method/)

---


### 4. ⚙️ Combinational Circuits


#### ➕ Adders
- [Half Adder](https://www.geeksforgeeks.org/digital-electronics-half-adder/)
- [Full Adder](https://www.geeksforgeeks.org/full-adder-digital-electronics/)
- [Ripple Carry Adder](https://www.geeksforgeeks.org/parallel-adder-and-parallel-subtractor/)
- [Carry Look Ahead Adder](https://www.geeksforgeeks.org/digital-logic-carry-look-ahead-adder/)  
📼 *Videos 67–71*
- [BCD Adder (Optional)](https://www.geeksforgeeks.org/digital-electronics-bcd-adder/) | [Video](https://www.youtube.com/watch?v=ss9FpyRgIjw)

#### ✖️ Multipliers
📼 *Video 75 (Signed → 76)*

#### 🔁 Comparator
- [Magnitude Comparator](https://www.geeksforgeeks.org/magnitude-comparator-in-digital-logic/)  
📼 *Video 78*

#### 🎛️ MUX, DEMUX, Encoders & Decoders
- [Multiplexers & Demux](https://www.elprocus.com/what-is-multiplexer-and-demultiplexer-types-and-differences/)
- [Encoders & Decoders](https://www.geeksforgeeks.org/digital-logic-encoders-decoders/)  
📼 *Videos 79–90* (skip 85)

---

### 5. ⏱️ Sequential Circuits

#### Latches & Flip-Flops
- [Intro to Sequential Circuits](https://www.geeksforgeeks.org/introduction-of-sequential-circuits/)
- [Latches](https://www.geeksforgeeks.org/latches-in-digital-logic/)
- [Flip-Flops](https://www.geeksforgeeks.org/flip-flop-types-their-conversion-and-applications/)
- [Master-Slave FF](https://www.geeksforgeeks.org/master-slave-jk-flip-flop/)  
📼 *Videos 91–117*

#### Registers  
- [Shift Registers](https://www.geeksforgeeks.org/shift-registers-in-digital-logic/)  
📼 *Videos 119–124*

#### Synchronous & Asynchronous Logic
- [Synchronous Circuits](https://www.geeksforgeeks.org/synchronous-sequential-circuits-in-digital-logic/)
- [Asynchronous Circuits](https://www.geeksforgeeks.org/asynchronous-sequential-circuits/)

#### Counters
- [Overview](https://www.geeksforgeeks.org/counters-in-digital-logic/)
- [Ripple Counters](https://www.geeksforgeeks.org/ripple-counter-in-digital-logic/)
- [Ring & Johnson Counters](https://www.geeksforgeeks.org/n-bit-johnson-counter-in-digital-logic/)
- [Sequence Design](https://www.geeksforgeeks.org/design-counter-given-sequence/)  
📼 *Videos 126–134*

---

### 6. 🤖 Finite State Machines (FSMs)
- 📄 [Intro to FSM](./resources/Intro_to_FSM.pdf)  
- 📄 [FSM – Vending Machine](./resources/Vending_Machine_FSM.pdf)  
📼 *Videos 187–202* (skip 188)

#### Optional
- [Serial Binary Adder](https://www.geeksforgeeks.org/serial-binary-adder-in-digital-logic/)
- [Sequential Binary Multiplier](https://www.geeksforgeeks.org/sequential-binary-multiplier/)  
📼 *Videos 203–205*

---

### 7. ⚡ Analog Circuits

#### 🔍 Operational Amplifiers
- [Op-Amp Basics](https://www.tutorialspoint.com/linear_integrated_circuits_applications/linear_integrated_circuits_applications_basics_of_operational_amplifier.htm)
- ▶️ [Op-Amp Video Playlist](https://youtube.com/playlist?list=PLwjK_iyK4LLDBB1E9MFbxGCEnmMMOAXOH)

#### 🔁 DACs and ADCs
- [Lecture Slides](https://www.ee.iitb.ac.in/~sequel/ee101/ee101_dac_1.pdf)  
- ▶️ [DAC/ADC Playlist](https://youtube.com/playlist?list=PLwjK_iyK4LLCnW-df-_53d-6yYrGb9zZc&si=rnaJttZ3t-601D9t)

#### ⏲️ 555 Timer
▶️ [555 Timer Playlist](https://youtube.com/playlist?list=PLwjK_iyK4LLCVdgBR30pSFVj-17TI_8ou)  
📼 *Videos 10–13 in the above playlist*

#### 📶 PWM (DAC Alternative)
- [PWM Explained](https://www.geeksforgeeks.org/pulse-width-modulation-pwm/)
- ▶️ [PWM Intro](https://www.youtube.com/watch?v=ISzRh5eN_Pg)
- ▶️ [Simple PWM Explanation](https://www.youtube.com/watch?v=2XjqS1clY_E)
- ▶️ [PWM with 555 + Potentiometer](https://www.youtube.com/watch?v=x4RmIzUd2lk&t=716s)

---

Okay as you've understood the basics of digital electronics now lets understand microcontrollers
## 🧠 Microcontrollers and Embedded Systems

---

### 8. 🧩 Basics of a Microcontroller
- [Basics of MCU](https://www.renesas.com/en/support/engineer-school/mcu-01-basic-structure-operation)
- [More in-depth basics](https://embedded.fm/blog/2016/2/27/embedded-software-engineering-101-microcontroller-basics)
- ▶️ [Microcontroller Explanation](https://www.youtube.com/watch?v=JwCTkm43CxQ)

---

### 9. 🧷 Peripheral Interactions (GPIO, ADC, DAC)
- [GPIO Basics](https://www.renesas.com/en/support/engineer-school/mcu-programming-peripherals-01-gpio)
- [Essential Peripherals Explained](https://embeddedinventor.com/9-essential-microcontroller-peripherals-explained/)
- ▶️ [GPIO Inputs/Outputs Explained](https://www.youtube.com/watch?v=Naz_qLfcWpg) *(Second half covers `wire.h` / I2C communication)*

---

### 10. 🔄 Serial Communication (UART, I2C, SPI)
- ▶️ [Basics of Serial Communication](https://www.youtube.com/watch?v=IyGwvGzrqp8)
- 📄 [Serial Communication in Detail](./resources/Communication_Protocols.pdf)

#### 📨 UART (Asynchronous Communication)
- ▶️ [UART Protocol Explained](https://www.youtube.com/watch?v=JuvWbRhhpdI)
- [Basics of UART Communication](https://www.circuitbasics.com/basics-uart-communication/)

#### 🔁 SPI (Synchronous Communication)
- ▶️ [SPI Protocol Explained](https://www.youtube.com/watch?v=xogsRnnhK44)
- [Basics of SPI Communication](https://www.circuitbasics.com/basics-of-the-spi-communication-protocol/)

#### 🔗 I2C (Synchronous Communication)
- ▶️ [I2C Protocol Explained](https://www.youtube.com/watch?v=pbqk5yqbfuw)
- [Basics of I2C Communication](https://www.circuitbasics.com/basics-of-the-i2c-communication-protocol/)

---

### 11. 💾 Data Storage
- ▶️ [EEPROM Explained](https://youtu.be/Sus96TzvjT4?si=4noOQwfwPUWtsjCM)
- ▶️ [Flash Memory Explained](https://www.youtube.com/watch?v=b5BPcQUkHbI)
- ▶️ [NAND Flash In-depth](https://www.youtube.com/watch?v=YtBysgPOKx4)

---

### 12. 🧠 Processor Basics: Cores & Threads
- ▶️ [What are Cores?](https://www.youtube.com/watch?v=S3I5WNHbnJ0)
- ▶️ [Cores vs Threads](https://www.youtube.com/watch?v=hwTYDQ0zZOw)
- [Cores vs Threads (Article)](https://www.namehero.com/blog/cpu-cores-vs-threads-everything-you-need-to-know/)
- ▶️ [Threads Explained](https://www.youtube.com/watch?v=M9HHWFp84f0)
- [Multithreading](https://www.geeksforgeeks.org/multithreading-in-operating-system/)
- ▶️ [Threads on Multicore Systems](https://www.youtube.com/watch?v=5sw9XJokAqw)

---

### 13. ⏱️ RTOS (Real-Time Operating Systems)
- ▶️ [RTOS Playlist (FreeRTOS)](https://www.youtube.com/playlist?list=PLEBQazB0HUyQ4hAPU1cJED6t3DU0h34bz) - See first video for basics


---

## 🧪 Practical Stuff
The following section translates theoretical knowledge into hands-on experience. Applying concepts using real or simulated environments is a crucial step in reinforcing and internalizing what you've learned so far.
---

### 🖥️ Online Simulators
- [Wokwi](https://wokwi.com/)
- [TinkerCAD](https://www.tinkercad.com/)

---

### 🔌 Learning How to Use a Microcontroller (Arduino)
- ▶️ [Arduino Masterclass (Optional but Recommended)](https://www.youtube.com/watch?v=BLrHTHUjPuw)
- [Component Overview](https://docs.arduino.cc/tutorials/uno-rev3/intro-to-board/)
- 📄 [Arduino Full Pinout Diagram](./resources/A000066-full-pinout.pdf)

#### 📡 Protocols with Arduino
- 📄 [MPU with I2C](./resources/MpuWithI2C)
- 🧪 I2C Communication — *Refer to second half of [GPIO video](https://www.youtube.com/watch?v=Naz_qLfcWpg)*
- ▶️ [SPI Communication with Arduino](https://www.youtube.com/watch?v=fvOAbDMzoks)
- [EEPROM with Arduino](https://docs.arduino.cc/learn/programming/eeprom-guide/)
- [SD Card with Arduino](https://randomnerdtutorials.com/guide-to-sd-card-module-with-arduino/)

---

While this implementation is specific to the ESP32, the concepts of multitasking and time-sensitive execution are platform-agnostic. Learning RTOS fundamentals is important for working with advanced embedded applications.

### ⏱️ RTOS with Arduino (ESP32)
- ▶️ [FreeRTOS on ESP32 with Arduino IDE (Task Switching Demo)](https://www.youtube.com/watch?v=VvRLv6FNRl8)
- 📄 [FreeRTOS Multitasking Example Code (ESP32 with Arduino)](https://github.com/ExplainingComputers/FreeRTOS_ESP32) *(Repo with example tasks)*




