#include "CSVWriter.h"
#include <fstream>
#include <iostream>

void CSVWriter::savePatientToCSV(const std::string& filename, const std::string& patientData) {
    std::ofstream file;
    file.open(filename, std::ios::app); // פותח את הקובץ במצב הוספה
    if (file.is_open()) {
        file << patientData << std::endl; // כותב את המידע לקובץ
        file.close(); // סוגר את הקובץ
    }
    else {
        std::cerr << "Error opening file for writing." << std::endl;
    }
}
