#pragma once
#include <iostream>
#include <unordered_map>
#include <string>

class EmergencyQueue {
public:
    static void initializeWaitTimes();
    static int getWaitTime(const std::string& condition);
    static void printWaitTimes();

private:
    static std::unordered_map<std::string, int> conditionWaitTimes;
};
