#include "Randomizer.h"

double Randomizer::GetValue()
{
	std::random_device randomDevice;
	std::mt19937 randomEngine(randomDevice());
	std::uniform_real_distribution<double> random(LOWER_BOUND, UPPER_BOUND);

	return random(randomEngine);
}