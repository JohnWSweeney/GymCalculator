#pragma once
#include <iostream>

struct userData
{
	std::string plateUnits;
	std::string preferredUnits;
	float desiredWeight;
	float convertedWeight;
};

struct platesLBS
{
	int twoPointFives = 0;
	int fives = 0;
	int tens = 0;
	int twentyFives = 0;
	int fortyFives = 0;
};

struct platesKg
{
	int onePointTwoFives = 0;
	int twoPointFives = 0;
	int fives = 0;
	int tens = 0;
	int fifteens = 0;
	int twenties = 0;
	int twentyFives = 0;
};