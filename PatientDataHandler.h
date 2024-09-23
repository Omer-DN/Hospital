// PatientDataHandler.h
#ifndef PATIENTDATAHANDLER_H
#define PATIENTDATAHANDLER_H

#include "Patients.h"
#include "CSVWriter.h"

class PatientDataHandler {
public:
    PatientDataHandler(CSVWriter* csvWriter) : csvWriter(csvWriter) {}
    void printPatients(const Patients& patients) const;

private:
    CSVWriter* csvWriter;  // ודא שהשורה הזו קיימת
};

#endif // PATIENTDATAHANDLER_H
