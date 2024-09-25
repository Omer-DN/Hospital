#include "EmergencyQueue.h"
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, int> EmergencyQueue::conditionWaitTimes;

void EmergencyQueue::initializeWaitTimes() {}

int EmergencyQueue::getWaitTime(const string& condition) {
    if (conditionWaitTimes.find(condition) != conditionWaitTimes.end()) {
        return conditionWaitTimes[condition];
    }
    return 0;
}

void EmergencyQueue::printWaitTimes() {
    cout << "Emergency Cases and Waiting Times (in minutes):\n";
    for (const auto& caseTime : conditionWaitTimes) {
        cout << endl << caseTime.first << ": " << caseTime.second << " minutes" << endl;
    }
}
