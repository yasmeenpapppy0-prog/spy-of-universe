# Spy of Universe 
sorry for AI type discription
Hey! This is my project for the Hack Club Stardance challenge. It's a custom PCB that tracks space satellites (like the International Space Station) and flashes a smart LED whenever it flies overhead.

### How it works:
* An *ESP32 chip* connects to my phone's mobile hotspot.
* It pings a space station API over the internet to grab live tracking math.
* It shoots data out to a *SK6812 RGB LED* to light up when a satellite is passing right over my house.

### The Files:
* stationspy.kicad_pcb / sch - My KiCad project files and schematic layout.
* Stardance_Tracker.ino - My Arduino firmware test code.
* *.gbr / *.drl - All the factory Gerbers and drill data ready to send over to manufacturing.
* bom.csv - The component listing spreadsheet.
*
