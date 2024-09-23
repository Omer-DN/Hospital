#include "PatientDataHandler.h"
#include <iostream>

void PatientDataHandler::printPatients(const Patients& patients) const {
    const std::vector<Patient>& patientList = patients.getPatientList();

    for (const Patient& patient : patientList) {
        std::cout << "Patient ID: " << patient.getId()
            << ", Name: " << patient.getName()
            << ", Condition: " << patient.getCondition()
            << ", Age: " << patient.getAge() << std::endl;
    }

}
