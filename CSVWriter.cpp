#include "CSVWriter.h"
#include <fstream>
#include <iostream>
#include"Patient.h"
#include"Patients.h"

void CSVWriter::writePatientsToCSV(const std::vector<Patient>& patients, const std::string& filename) {
    std::ofstream csvFile(filename);
    if (!csvFile.is_open()) {
        std::cerr << "Error opening file for writing." << std::endl;
        return;
    }

    // ����� ������ ����� CSV
    csvFile << "Patient ID,Name,Condition,Age,Urgency\n";

    for (const Patient& patient : patients) {
        // ����� ����� ����� CSV
        csvFile << patient.getId() << ","
            << patient.getName() << ","
            << patient.getCondition() << ","
            << patient.getAge() << ",";

        // ���� �� ��� ������� �������
        switch (patient.getUrgency()) {
        case UrgencyLevel::Critical:
            csvFile << "Critical";
            break;
        case UrgencyLevel::Urgent:
            csvFile << "Urgent";
            break;
        case UrgencyLevel::Normal:
            csvFile << "Normal";
            break;
        default:
            csvFile << "Unknown";
            break;
        }

        csvFile << "\n";
    }

    // ����� �����
    csvFile.close();
}
