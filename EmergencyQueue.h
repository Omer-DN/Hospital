#pragma once
#include <iostream>
#include <unordered_map>
#include <string>

class EmergencyQueue {
public:
    static void initializeWaitTimes();
    static int getWaitTime(const string& condition);
    static void printWaitTimes();

private:
    static unordered_map<string, int> conditionWaitTimes;
};
