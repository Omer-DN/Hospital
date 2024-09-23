#include "Patient.h"
#include "CSVWriter.h"
#include <iostream>
#include <fstream>
using namespace std;

int Patient::idCounter = 0;

Patient::Patient(const string& name, int age, string condition, UrgencyLevel::Level urgency) 
    : name(name), age(age), condition(condition) ,urgency(urgency){
    id = ++idCounter;
}

UrgencyLevel::Level Patient::getUrgency() const {
    return urgency;
}

string Patient::getCondition() const {
    return condition;
}

string Patient::getName() const {
    return name;
}

string Patient::toCSV() const {
    return name + "," + std::to_string(age) + "," + condition + "," + UrgencyLevel::toString(urgency);
}

int Patient::getAge() const {
    return age;
}

int Patient::getId() const {
    return id;
}

void Patient::display() const {
    cout << "Patient Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Condition: " << condition << "\n\n";
}
