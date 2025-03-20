#pragma once
#include <chrono>
#include <cstdint>
#include <string>

class Functions
{
public:
    static uint64_t getStartingTime();
    static std::string getTimeDifference(uint64_t startTime);
};
