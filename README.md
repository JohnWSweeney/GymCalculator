# gymCalculator

A Windows console app that calculates the number of barbell plates needed for a desired weight. The app works for kg and lbs plates and converts between units if your desired weight units are not the same as your plates.

### Motivation
My gym has a mix of kg and lbs barbell plates, so I'm frequently converting between those units to get the desired amount of weight on the bar.
I'd rather automate the conversion and focus on the workout. Enter gymCalculator.

In addition to being personally useful, this project is an opportunity to practice coding fundamentals. Function design and a program structure that calls the appropriate function in the proper order were key concepts. Plus, this project serves as a prototype for an iOS app backend I'm planning, which would be really convienient in the gym.

### Design Overview
The basic order of operations is as follows:
- Ask the user what units their plates are in (kg/lbs).
- Ask the user what units their desired weight is in (kg/lbs).
- Convert the desired weight to the plates' units, if they are not the same.
- Calculate the type and number of plates needed for the desired weight, accounting for the weight of the bar (45 lbs, 20 kg).
- Display results.

### Future Updates
- iOS version.

### Known Issues
- Unit conversion between kg/lbs needs a rounding function.
- Error/exception handling.
- User input is case-sensitive.