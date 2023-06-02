# gymCalculator

A Windows console app that calculates what barbell plates are needed for a desired weight. The app works for kilogram (kg) and pound (lbs) plates and converts between units if your preferred weight units are not the same as your plates.

## Motivation
I prefer to think about weightlifting in pounds but my gym has a mix of kilogram and pound barbell plates. Converting between units to get the desired amount of weight on the bar can be distracting and confusing. If the conversion were automated, I could focus on the workout instead. Enter gymCalculator.

In addition to being personally useful, this project was an opportunity to refresh my C-style coding skills after many years away. Function design, program structure, and error handling were key concepts.

## Design
The basic order of operations is:
- Ask the user (1) what units their plates are in and (2) what are their preferred units (kg/lbs).
	- For example, if your plates are in kg but prefer to think of your lifts in pounds:
<br/>Enter "kg" for question 1 and "lbs" for question 2.
	- Note: Inputs are case-sensitive and must be lower-case.

- Ask the user for their desired weight on the bar in their prefered units.
	- Enter the number without units.
<br/> For example, "225" or "61.5", not "89 lbs" or "111.5 kg".
- Convert the desired weight to the plates' units, if they are not the same.
- Calculate the type and number of plates needed for the desired weight, accounting for the weight of the bar. Bar weight is assumed to be 45 lbs (20 kg).
- Display results.

## Future Updates
- Add rounding to unit conversion functions.
- iOS version.

## Download
[gymCalculator v1.0.1](https://github.com/JohnWSweeney/echoTool/releases/download/v1.0.1/gymCalculator_v1_0_1.exe) [23 kB]

## ChangeLog <br/>
v1.0.1
- Added more robust error handling.
- Updated README.