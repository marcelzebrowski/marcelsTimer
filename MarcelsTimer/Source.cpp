#include <iostream>
#include <thread>

#include "MarcelsTimer.h"

void waitALittleBit(int seconds) {
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

// Convertion from nano to milli for better reading
const double NANOSECONDS_TO_MILLISECONDS = 1.0 / 1000000.0;

int main() {

	MarcelsTimer timer;

	std::cout << "Lets go ...\n";
	timer.start();
	waitALittleBit(1); // 1 seconds
	auto delta = timer.stop();

	std::cout << "Elapsed Time in miliseconds: " << delta * NANOSECONDS_TO_MILLISECONDS << "\n";

	return 0;
}