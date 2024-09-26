#include "InjuryManager.h"

InjuryManager::InjuryManager() {

    injuryWaitTimes["Chest pain"] = 10;
    injuryWaitTimes["Sudden difficulty breathing"] = 10;
    injuryWaitTimes["Severe injury"] = 10;
    injuryWaitTimes["Severe bleeding"] = 10;
    injuryWaitTimes["Signs of stroke"] = 10;
    injuryWaitTimes["Seizures"] = 10;
    injuryWaitTimes["Suspected fractures"] = 60;
    injuryWaitTimes["Very high fever"] = 120;
    injuryWaitTimes["Poisoning"] = 10;
    injuryWaitTimes["Severe allergic reactions"] = 10;
    injuryWaitTimes["Persistent vomiting"] = 240;
    injuryWaitTimes["Severe abdominal pain"] = 120;
    injuryWaitTimes["Eye injuries"] = 120;
    injuryWaitTimes["Severe mental health crisis"] = 10;
    injuryWaitTimes["Loss of consciousness"] = 10;
    injuryWaitTimes["Sudden swelling or pain in limbs"] = 120;
    injuryWaitTimes["Animal or snake bites"] = 10;


    injuryTypes["Chest pain"] = 2;
    injuryTypes["Sudden difficulty breathing"] = 2;
    injuryTypes["Severe injury"] = 2;
    injuryTypes["Severe bleeding"] = 2;
    injuryTypes["Signs of stroke"] = 1;
    injuryTypes["Seizures"] = 3;
    injuryTypes["Suspected fractures"] = 3;
    injuryTypes["Very high fever"] = 2;
    injuryTypes["Poisoning"] = 1;
    injuryTypes["Severe allergic reactions"] = 1;
    injuryTypes["Persistent vomiting"] = 3;
    injuryTypes["Severe abdominal pain"] = 2;
    injuryTypes["Eye injuries"] = 2;
    injuryTypes["Severe mental health crisis"] = 3;
    injuryTypes["Loss of consciousness"] = 1;
    injuryTypes["Sudden swelling or pain in limbs"] = 3;
    injuryTypes["Animal or snake bites"] = 1;


    caseType1 = { "Signs of stroke", "Poisoning", "Severe allergic reactions", "Loss of consciousness", "Animal or snake bites" };


    caseType2 = { "Chest pain", "Sudden difficulty breathing", "Severe injury", "Severe bleeding", "Very high fever", "Severe abdominal pain", "Eye injuries" };


    caseType3 = { "Seizures", "Suspected fractures", "Persistent vomiting", "Severe mental health crisis", "Sudden swelling or pain in limbs" };
}

int InjuryManager::getInjuryType(const std::string& injury) const {
    auto it = injuryTypes.find(injury);
    if (it != injuryTypes.end()) {
        return it->second;
    }
    return -1; 
}
