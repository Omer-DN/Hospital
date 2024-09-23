#ifndef PATIENTS_H
#define PATIENTS_H

#include <vector>
#include "Patient.h"

class Patients {
public:
    void addPatient(const Patient& patient);
    void sortPatients();
    void writeToCSV(const std::string& filename) const;
    void printPatients() const;
    std::vector<Patient> getPatientList() const;

private:
    std::vector<Patient> patientList;
};

#endif // PATIENTS_H
