#include "PatientDataHandler.h"
#include <iostream>

void PatientDataHandler::printPatients(const Patients& patients) const {
    const vector<Patient>& patientList = patients.getPatientList();

    for (const Patient& patient : patientList) {
        cout << "Patient ID: " << patient.getId()
            << ", Name: " << patient.getName()
            << ", Condition: " << patient.getCondition()
            << ", Age: " << patient.getAge() <<endl;
    }
}
