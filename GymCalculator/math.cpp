#include "math.h"
#include "dataStructs.h"

float LBStoKg(float weightLBS)
{
	float weightKg = weightLBS / 2.205;
	return weightKg;
}

float KgtoLBS(float weightKg)
{
	float weightLBS = weightKg * 2.205;
	return weightLBS;
}

void calcPlatesLBS(float weightLBS)
{
	platesLBS myPlatesLBS;
	float plateWeight = weightLBS - 45; //
	std::cout << "Weight in plates: " << plateWeight << " lbs\n";
	float sideWeight = plateWeight / 2;
	std::cout << "Weight on each side of the bar: " << sideWeight << " lbs\n";

	while (sideWeight >= 45)
	{
		++myPlatesLBS.fortyFives;
		sideWeight = sideWeight - 45;
	};
	while (sideWeight >= 25)
	{
		++myPlatesLBS.twentyFives;
		sideWeight = sideWeight - 25;
	};
	while (sideWeight >= 10)
	{
		++myPlatesLBS.tens;
		sideWeight = sideWeight - 10;
	};
	while (sideWeight >= 5)
	{
		++myPlatesLBS.fives;
		sideWeight = sideWeight - 5;
	};
	while (sideWeight >= 2.5)
	{
		++myPlatesLBS.twoPointFives;
		sideWeight = sideWeight - 2.5;
	};

	std::cout << "-------------------------\n";
	std::cout << "2.5s: " << myPlatesLBS.twoPointFives << '\n';
	std::cout << "5s:   " << myPlatesLBS.fives << '\n';
	std::cout << "10s:  " << myPlatesLBS.tens << '\n';
	std::cout << "25s:  " << myPlatesLBS.twentyFives << '\n';
	std::cout << "45s:  " << myPlatesLBS.fortyFives << '\n';
	std::cout << "-------------------------\n";
	std::cout << "Remainder: " << sideWeight << " lbs\n";
};

void calcPlatesKg(float weightKg)
{
	platesKg myPlatesKg;
	float plateWeight = weightKg - 20; //
	std::cout << "Weight in plates: " << plateWeight << " kg\n";
	float sideWeight = plateWeight / 2;
	std::cout << "Weight on each side of the ba: " << sideWeight << " kg\n";

	while (sideWeight >= 25)
	{
		++myPlatesKg.twentyFives;
		sideWeight = sideWeight - 25;
	};
	while (sideWeight >= 20)
	{
		++myPlatesKg.twenties;
		sideWeight = sideWeight - 20;
	};
	while (sideWeight >= 15)
	{
		++myPlatesKg.fifteens;
		sideWeight = sideWeight - 15;
	};
	while (sideWeight >= 10)
	{
		++myPlatesKg.tens;
		sideWeight = sideWeight - 10;
	};
	while (sideWeight >= 5)
	{
		++myPlatesKg.fives;
		sideWeight = sideWeight - 5;
	};
	while (sideWeight >= 2.5)
	{
		++myPlatesKg.twoPointFives;
		sideWeight = sideWeight - 2.5;
	};
	while (sideWeight >= 1.25)
	{
		++myPlatesKg.onePointTwoFives;
		sideWeight = sideWeight - 1.25;
	};

	std::cout << "-------------------------\n";
	std::cout << "1.25s: " << myPlatesKg.onePointTwoFives << '\n';
	std::cout << "2.5s: " << myPlatesKg.twoPointFives << '\n';
	std::cout << "5s:   " << myPlatesKg.fives << '\n';
	std::cout << "10s:  " << myPlatesKg.tens << '\n';
	std::cout << "15s:  " << myPlatesKg.fifteens << '\n';
	std::cout << "20s:  " << myPlatesKg.twenties << '\n';
	std::cout << "25s:  " << myPlatesKg.twentyFives << '\n';
	std::cout << "-------------------------\n";
	std::cout << "Remainder: " << sideWeight << " lbs\n";
};