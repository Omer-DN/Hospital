#include "CSVWriter.h"
#include <fstream>
#include <iostream>

void CSVWriter::savePatientToCSV(const std::string& filename, const std::string& patientData) {
    std::ofstream file;
    file.open(filename, std::ios::app); // ���� �� ����� ���� �����
    if (file.is_open()) {
        file << patientData << std::endl; // ���� �� ����� �����
        file.close(); // ���� �� �����
    }
    else {
        std::cerr << "Error opening file for writing." << std::endl;
    }
}
