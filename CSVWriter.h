#pragma once
#include <string>

class CSVWriter {
public:
    static void savePatientToCSV(const std::string& filename, const std::string& patientData);
};
