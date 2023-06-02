#include "start.h"
#include "dataStructs.h"
#include "math.h"
#include <string>

int getWeight(float &weight)
{
	std::string tempStr;
	int status;
	bool validWeight = false;
	do {
		try
		{
			std::getline(std::cin, tempStr, '\n');
			weight = std::stof(tempStr);
			return status = 0;
			validWeight = true;
		}
		catch (std::invalid_argument)
		{
			std::cout << "Input is not a number. Try again.\n";
		}
		catch (std::out_of_range)
		{
			std::cout << "Input is out of range. Try again.\n";
		}
	} while (validWeight == false);
	std::cout << weight << '\n';
}

int getUnits(std::string &units)
{
	std::string tempStr;
	do {
		std::getline(std::cin, tempStr, '\n');

		if (tempStr == "lbs" || tempStr == "kg")
		{
			units = tempStr;
			return 0;
		}
		else
		{
			std::cout << "Incorrect input. Try again.\n";
			tempStr.clear();
			return 1;
		}
	} while (units.empty());
}

void getInput(userData &data)
{
	int status;
	do {
		std::cout << "\nAre your plates in pounds or kilograms?\n";
		std::cout << "Enter \"lbs\" or \"kg\":\n";
		status = getUnits(data.plateUnits);
	} while (status != 0);
	
	do {
		std::cout << "\nWhat is your preferred unit of weight?\n";
		std::cout << "Enter \"lbs\" or \"kg\":\n";
		status = getUnits(data.preferredUnits);
	} while (status != 0);

	do {
		std::cout << "\nWhat is your desired weight in " << data.preferredUnits << " ?\n";
		status = getWeight(data.desiredWeight);
	} while (status != 0);
}

void selectFunctions(userData &data)
{
	// if your plates are in lbs, ...
	if (data.plateUnits == "lbs")
	{
		// ... and your desired weight is also in lbs:
		if (data.preferredUnits == "lbs")
		{
			calcPlatesLBS(data.desiredWeight);
		}
		// ... but your desired weight is in kg:
		else if (data.preferredUnits == "kg")
		{
			data.convertedWeight = KgtoLBS(data.desiredWeight);
			calcPlatesLBS(data.convertedWeight);
		}
	}
	else if (data.plateUnits == "kg")
	{
		// ... but your desired weight is in lbs:
		if (data.preferredUnits == "lbs")
		{
			data.convertedWeight = LBStoKg(data.desiredWeight);
			calcPlatesKg(data.convertedWeight);
		}
		// ... and your desired weight is also in kg:
		else if (data.preferredUnits == "kg")
		{
			calcPlatesKg(data.desiredWeight);
		}
	}
}