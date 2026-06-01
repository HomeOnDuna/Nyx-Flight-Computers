# Nyx-Flight-Computer
Contains all details of the Nyx family of flight computers developed by Timothy Paige for UNSW rocketry

How to use:
 - Make a local clone of the entire repositry
 - Open the project you want from the file it is in
 - Enjoy!

To add parts to the library:
 - All parts go in the UNSW Rocketry parts folder (single parrts library)
 - Open a project and add the symbol into the UNSW Rocketry Library (symbol library, via import)
 - Put the footprint in the footprints.pretty folder of the parts folder
 - Put the 3D model in the 3D models folder
 - In the project, edit the symbol you have imported and assign the default footprint to the footprints.pretty folder footprint (.kicad_mod)
 - Edit the footprint you just added to add in the 3D model

How to refernce filepaths:
**Do not use the default filepaths KiCAD generates. These will only work on your device!**
 - Remove the filepath up to Nyx-Flight-Computers (leave the \ after this)
 - Insert .. before this, which then re-references to a relative filepath (permitting multi-device use).

Current capabilites:
 - Literally nothing

Future capabilities targets:
 - Flight data recording from multiple sources to memory (SD cards)
 - Detection of phase of flight (not vehicle direction, speed etc., only are we 1) accelerating, and 2) going up or going down) and subsequent actions or data recording changes
 - Flight data high-speed capability to RAM during boost phase
 - Telemetry of currently relevant data
 - Pyro / chute deploy devices (linear actuator or other form)
 - Basic marking out of failed / erroring sensors in data recording
