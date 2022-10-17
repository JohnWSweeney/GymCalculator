#pragma once

struct plates
{
	int twoPointFives = 0;
	int fives = 0;
	int tens = 0;
	int twentyFives = 0;
	int fortyFives = 0;
};

float getWeight();
void calcPlates(float weight);