#ifndef PATIENTDATAHANDLER_H
#define PATIENTDATAHANDLER_H

#include "Patients.h"
#include "CSVWriter.h"

class PatientDataHandler {
private:
    CSVWriter* csvWriter;

public:
    PatientDataHandler(CSVWriter* writer) : csvWriter(writer) {}
    void printPatients(const Patients& patients) const;
};

#endif // PATIENTDATAHANDLER_H
