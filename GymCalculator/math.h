#pragma once

struct platesLBS
{
	int twoPointFives = 0;
	int fives = 0;
	int tens = 0;
	int twentyFives = 0;
	int fortyFives = 0;
};

struct platesKG
{
	int onePointTwoFives = 0;
	int twoPointFives = 0;
	int fives = 0;
	int tens = 0;
	int fifteens = 0;
	int twenties = 0;
	int twentyFives = 0;
};

std::string getUnits();
void getWeight(std::string plateUnits);
void calcPlatesLBS(float weight);
void calcPlatesKG(float weight);