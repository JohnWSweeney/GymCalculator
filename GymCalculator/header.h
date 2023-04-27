#pragma once
#include <iostream>

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

// start.cpp
float getWeight(std::string desiredUnits);
void start();

// math.cpp
float LBStoKg(float weightLBS);
float KgtoLBS(float weightKg);
void calcPlatesLBS(float weightLBS);
void calcPlatesKg(float weightKg);