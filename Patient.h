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
    UrgencyLevel::Level urgency;

public:

    Patient(const std::string& name, int age, string condition, UrgencyLevel::Level urgency);
   
    string getName() const;
    int getAge() const;
    int getId() const;
    string getCondition() const;
    void display() const;
    string toCSV() const;
    void saveToCSV() const;
    UrgencyLevel::Level getUrgency() const; 
};

#endif 