#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include "UrgencyLevel.h"
using namespace std;

class Patient {
public:
    Patient(const std::string& name, int age, const string& condition, UrgencyLevel::Level urgency);
    
    int getId() const; 
    int getAge() const;
    std::string getName() const;
    std::string getCondition() const;
    UrgencyLevel::Level getUrgency() const;

private:
    int id, age;
    static int nextId;
    std::string name;
    std::string condition;
    UrgencyLevel::Level urgency;
};

#endif // PATIENT_H
