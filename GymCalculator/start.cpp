#include "header.h"
#include <string>
#include <Windows.h>

float getWeight(std::string desiredUnits)
{
	float weight;
	std::cout << "What is your desired weight in " << desiredUnits << " ?" << std::endl;
	std::cin >> weight;
	return weight;
}

void start()
{
	bool running = true;
	while (running)
	{
		std::cout << std::endl;
		std::string plateUnits, desiredUnits;
		std::cout << "Are your plates in pounds or kilograms?" << std::endl;
		std::cout << "Enter \"lbs\" or \"kg\"." << std::endl;
		std::cin >> plateUnits;
		std::cout << "What is your preferred unit of weight?" << std::endl;
		std::cout << "Enter \"lbs\" or \"kg\"." << std::endl;
		std::cin >> desiredUnits;
		
		if (plateUnits == "lbs")
		{
			if (desiredUnits == "lbs")
			{
				// plates are lbs, desired weight in lbs.
				float weightLBS = getWeight(desiredUnits);
				calcPlatesLBS(weightLBS);
			}
			else if (desiredUnits == "kg")
			{
				// plates are lbs, desired weight in kg.
				float weightKg = getWeight(desiredUnits);
				float weightLBS = KgtoLBS(weightKg);
				calcPlatesLBS(weightLBS);
			}
		}
		else if (plateUnits == "kg")
		{
			if (desiredUnits == "lbs")
			{
				// plates are kg, desired weight in lbs.
				float weightLBS = getWeight(desiredUnits);
				float weightKg = LBStoKg(weightLBS);
				calcPlatesKg(weightKg);
			}
			else if (desiredUnits == "kg")
			{
				// plates are kg, desired weight in kg.
				float weightKg = getWeight(desiredUnits);
				calcPlatesKg(weightKg);
			}
		}
	}
}