// CSVWriter.cpp
#include "CSVWriter.h"
#include <fstream>
#include <iostream>

void CSVWriter::writePatientsToCSV(const std::vector<Patient>& patients, const std::string& filename) {
    std::ofstream csvFile(filename);
    if (!csvFile.is_open()) {
        std::cerr << "Error opening file for writing." << std::endl;
        return;
    }

    // ����� ������ ����� CSV
    csvFile << "Patient ID,Name,Condition,Age,Urgency,Wait Time\n";

    int waitTime = 0; // ��� ������ �������

    for (const Patient& patient : patients) {
        // ����� ����� ����� CSV
        csvFile << patient.getId() << ","
            << patient.getName() << ","
            << patient.getCondition() << ","
            << patient.getAge() << ","
            << static_cast<int>(patient.getUrgency()) << ","
            << waitTime << "\n";

        // ����� ��� ������
        waitTime += 10; // �� �� ������ ���� ������ ��� ������
    }

    // ����� �����
    csvFile.close();
}
