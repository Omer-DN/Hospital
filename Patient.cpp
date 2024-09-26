#include "Patient.h"
#include <iostream>
#include <fstream>
using namespace std;

int Patient::idCounter = 0;

Patient::Patient(const string& name, int age, const string condition, const int urgency)
: name(name), age(age), condition(condition) ,urgency (urgency){
    id = ++idCounter;
    }

/*UrgencyLevel::Level Patient::getUrgency() const {
    return urgency;
}*/

string Patient::getCondition() const {
    return condition;
}

string Patient::getName() const {
    return name;
}

string Patient::toCSV() const {
        return name + "," + to_string(age) + "," + condition + "," + to_string(urgency);
}

int Patient::getAge() const {
    return age;
}

int Patient::getId() const {
    return id;
}

int Patient::getUrgency()const {
    return urgency;
}