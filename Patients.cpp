#include "Patients.h"
#include <iostream>
#include <fstream>
#include <algorithm>

void Patients::addPatient(const Patient& patient) {
    patientList.push_back(patient);
}

void Patients::sortPatients() {
    std::sort(patientList.begin(), patientList.end(), [](const Patient& a, const Patient& b) {
        return static_cast<int>(a.getUrgency()) < static_cast<int>(b.getUrgency());
        });
}

void Patients::writeToCSV(const std::string& filename) const {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << "Name,Condition,Urgency\n";
        for (const auto& patient : patientList) {
            outFile << patient.getName() << ","
                << patient.getCondition() << ","
                << static_cast<int>(patient.getUrgency()) << "\n";
        }
        outFile.close();
    }
}

void Patients::printPatients() const {
    for (const auto& patient : patientList) {
        std::cout << "Name: " << patient.getName()
            << ", Condition: " << patient.getCondition()
            << ", Urgency: " << static_cast<int>(patient.getUrgency()) << std::endl;
    }
}

std::vector<Patient> Patients::getPatientList() const {
    return patientList;
}
