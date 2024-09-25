#ifndef PATIENTS_H
#define PATIENTS_H

#include <vector>
#include "Patient.h"

class Patients {
public:
    void addPatient(const Patient& patient);
    void sortPatients();
    void printPatients() const;
    vector<Patient> getPatientList() const;


private:
   vector<Patient> patientList;
};

#endif // PATIENTS_H
