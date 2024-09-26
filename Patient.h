#pragma once
#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include "UrgencyLevel.h"

using namespace std;

class Patient {
private:
    string name;
    int age;
    int id;
    static int idCounter;
    string condition;
    int urgency;

public:

    Patient(const string& name, int age, const string condition, const int urgency);
    string getName() const;
    int getAge() const;
    int getId() const;
    string getCondition() const;
    string toCSV() const;
    int getUrgency() const;
};

#endif 