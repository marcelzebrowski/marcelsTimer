#pragma once

#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include <stdexcept>

using namespace std::chrono;


class MarcelsTimer {

public:
	MarcelsTimer() = default;
	~MarcelsTimer() = default;

	void start() {
		startTimePoint = high_resolution_clock::now();
	}

	
	double stop() {
		stopTimePoint = high_resolution_clock::now();
		duration<double, std::milli> ms = stopTimePoint - startTimePoint;
		return ms.count();
	}

private:
	high_resolution_clock::time_point startTimePoint;
	high_resolution_clock::time_point stopTimePoint;
};