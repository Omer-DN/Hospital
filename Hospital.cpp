#include "Hospital.h"
#include <iostream>
using namespace std;

void Hospital::addPatient(const Patient& newPatient) {
    patients.push_back(newPatient);
}

bool Hospital::removePatient(int id) {
    for (auto it = patients.begin(); it != patients.end(); ++it) {
        if (it->getId() == id) {
            patients.erase(it);
            return true;
        }
    }
    return false;
}

Patient* Hospital::findPatientById(int id) {
    for (auto& patient : patients) {
        if (patient.getId() == id) {
            return &patient;
        }
    }
    return nullptr;
}

void Hospital::displayAllPatients() const {
    for (const auto& patient : patients) {
        cout << "ID: " << patient.getId()
            << ", Name: " << patient.getName()
            << ", Age: " << patient.getAge()
            << ", Condition: " << patient.getCondition() << endl;
    }
}
