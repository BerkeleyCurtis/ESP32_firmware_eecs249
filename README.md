# Structure of a PlatformIO project (like this repo)

* `.vscode/` contains settings read by your VSCode to be compatible with the PlatformIO project
* `include/` contains the header files
* `lib/`contains private libraries (not used for this project)
* `src/` contains `main.cpp`
* `test/` contains PlatformIO project tests (not used for this project)
* `platformio.ini` is a setting file for PlatformIO building


# Getting started with the codebase

* Start working with the codebase once the glove is wired up, but before you attach the finger exoskeleton parts. 
* The motors need to spin during testing and the force sensors need to be calibrated with the finger exoskeleton pieces off. 
* Read all the comments in `src/main.cpp`
* Use `#define CALIBRATION 1` on line 20ish to set the compiler variable to access calibration functions to get the glove all set up.
* Calibration is multi-step. Complete each step successfully before moving on.
* Once calibration is complete, set the `#define CALIBRATION` to `0` to access the `interactOverUART()` function in the main loop. 
* This function will send finger states over usb. See the `sender.h` for details.

## To use the glove with a simple Unity simulation

* Clone this repo and get it running in Unity: `https://github.com/BerkeleyCurtis/handsim/tree/main`
* If that Unity project doesn't load properly, look in the scenes folder. A lot of times when you open a Unity project it will just load a blank scene.
* The glove should talk to this Unity project if everything is set up correctly and you should see fingers move in simulation as you move your fingers in real life. Forces should be applied to your fingers when the simulated hand hits the simulated object.
* Reach out to me on my website with any questions: `https://atombcurtis.wixsite.com/website`