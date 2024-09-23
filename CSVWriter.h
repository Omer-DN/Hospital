// CSVWriter.h
#ifndef CSVWRITER_H
#define CSVWRITER_H

#include <string>
#include <vector>
#include "Patient.h"

class CSVWriter {
public:
    void writePatientsToCSV(const std::vector<Patient>& patients, const std::string& filename);
};

#endif // CSVWRITER_H
