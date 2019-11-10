#include <iostream>
#include <thread>

#include "MarcelsTimer.h"

void waitALittleBit(int seconds) {
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
}


int main() {

	MarcelsTimer timer;

	timer.start();
	waitALittleBit(1); // 10 seconds
	auto delta = timer.stop();

	std::cout << "Elapsed Time in miliseconds: " << delta << "\n";

	return 0;
}