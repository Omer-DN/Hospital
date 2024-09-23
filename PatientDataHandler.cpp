// PatientDataHandler.cpp
#include "PatientDataHandler.h"
#include <iostream>

void PatientDataHandler::printPatients(const Patients& patients) const {
    const std::vector<Patient>& patientList = patients.getPatientList();

    int waitTime = 0; // ��� ������ �������

    // �� ����� �������� ����
    if (patientList.empty()) {
        std::cout << "No patients to display." << std::endl;
        return;
    }

    for (const Patient& patient : patientList) {
        std::cout << "Patient ID: " << patient.getId()
            << ", Name: " << patient.getName()
            << ", Condition: " << patient.getCondition()
            << ", Age: " << patient.getAge()
            << ", Urgency: " << static_cast<int>(patient.getUrgency())
            << ", Wait Time: " << waitTime << " minutes" << std::endl;

        // ����� ��� ������
        waitTime += 10; // �� ������ ����
    }

    // ����� �-CSVWriter ������ �������� �����
    if (csvWriter) {
        csvWriter->writePatientsToCSV(patientList, "patients.csv");
    }
    else {
        std::cerr << "CSVWriter is not initialized." << std::endl;
    }
}
