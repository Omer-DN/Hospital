#include "Patients.h"
#include <iostream>
#include <fstream>
#include <algorithm>

void Patients::addPatient(const Patient& patient) {
    patientList.push_back(patient);
}


void Patients::sortPatients() {
    sort(patientList.begin(), patientList.end(), [](const Patient& a, const Patient& b) {
        return a.getUrgency() != b.getUrgency() ? static_cast<int>(a.getUrgency()) < static_cast<int>(b.getUrgency()) : a.getName() < b.getName();
        });
}


void Patients::printPatients() const {
    for (const auto& patient : patientList) {
        cout << "Name: " << patient.getName()
            << ", Condition: " << patient.getCondition()
            << ", Urgency: " << static_cast<int>(patient.getUrgency()) << std::endl;
    }
}


vector<Patient> Patients::getPatientList() const {
    return patientList;
}
