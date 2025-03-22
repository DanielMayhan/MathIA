#include "Functions.h"


uint64_t Functions::getStartingTime()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}

std::string Functions::getTimeDifference(uint64_t startTime)
{
    uint64_t timeDiff = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - startTime;
    return std::to_string(timeDiff);
}
