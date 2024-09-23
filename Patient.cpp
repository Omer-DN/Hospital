#include "Patient.h"


int Patient::nextId = 1;
Patient::Patient(const std::string& name,int age, const std::string& condition, UrgencyLevel::Level urgency)
    : id(nextId++), name(name), age(age), condition(condition), urgency(urgency) {
} 

std::string Patient::getName() const { return name; }
std::string Patient::getCondition() const { return condition; }
UrgencyLevel::Level Patient::getUrgency() const { return urgency; }
int Patient::getId() const { return id; } // מימוש פונקציה זו
int Patient::getAge() const {
    return age;
}