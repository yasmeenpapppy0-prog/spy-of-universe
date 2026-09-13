# spy-of-universe

An custom ESP32-based hardware controller engineered for real-time tracking of space systems and satellite constellations.

## 🚀 How It Works
* **Microcontroller:** Powered by an ESP32-WROOM-32 module utilizing integrated Wi-Fi connectivity.
* **Space Data Feed:** Syncs live with orbital coordinates via internet tracking tracking network APIs (like OpenNotify).
* **Visual indicator:** Signals flyovers by driving an addressable **SK6812 RGB Smart LED** to dynamically change colors when a satellite passes overhead.

## 🛠️ Hardware & Pin Configuration
The circuit routing was designed inside KiCad with strict compliance for RF antenna clearance guidelines (Antenna Keep-Out Zone cleared):
* **Pin 1 (GND):** Main system ground connection for the SK6812 LED.
* **Pin 11 (GPIO23):** Dedicated digital signal trace carrying data instructions to the LED's **DIN** (Data Input) pin.
* **Pin 2 (VDD/VCC):** Main system power rail routing 3.3V power safely to the LED housing.

## 📂 Repository Contents
* `stationspy.kicad_sch` - Core circuit diagram schematics.
* `stationspy.kicad_pcb` - Complete, error-free physical circuit board layout file (Passed 0-error DRC check).
* `*.gbr` & `*.drl` - Full factory Gerber fabrication and drill outputs ready for physical manufacturing.
*
