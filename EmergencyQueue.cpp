#include "EmergencyQueue.h"
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, int> EmergencyQueue::conditionWaitTimes;

void EmergencyQueue::initializeWaitTimes() {
    conditionWaitTimes["Chest pain"] = 10;
    conditionWaitTimes["Sudden difficulty breathing"] = 10;
    conditionWaitTimes["Severe injury"] = 10;
    conditionWaitTimes["Severe bleeding"] = 10;
    conditionWaitTimes["Signs of stroke"] = 10;
    conditionWaitTimes["Seizures"] = 10;
    conditionWaitTimes["Suspected fractures"] = 60;
    conditionWaitTimes["Very high fever"] = 120;
    conditionWaitTimes["Poisoning"] = 10;
    conditionWaitTimes["Severe allergic reactions"] = 10;
    conditionWaitTimes["Persistent vomiting"] = 240;
    conditionWaitTimes["Severe abdominal pain"] = 120;
    conditionWaitTimes["Eye injuries"] = 120;
    conditionWaitTimes["Severe mental health crisis"] = 10;
    conditionWaitTimes["Loss of consciousness"] = 10;
    conditionWaitTimes["Sudden swelling or pain in limbs"] = 120;
    conditionWaitTimes["Animal or snake bites"] = 10;
}

int EmergencyQueue::getWaitTime(const string& condition) {
    if (conditionWaitTimes.find(condition) != conditionWaitTimes.end()) {
        return conditionWaitTimes[condition];
    }
    return 0;
}

void EmergencyQueue::printWaitTimes() {
    cout << "Emergency Cases and Waiting Times (in minutes):\n";
    for (const auto& caseTime : conditionWaitTimes) {
        cout <<endl<< caseTime.first << ": " << caseTime.second << " minutes" << endl;
    }
}
