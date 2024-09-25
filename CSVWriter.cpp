#ifndef CSVWRITER_H
#define CSVWRITER_H

#include <string>
#include "Patient.h"

class CSVWriter {
public:
    void writeToFile(const Patient& patient, const string& filename);
};

#endif // CSVWRITER_H
