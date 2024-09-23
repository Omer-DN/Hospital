#pragma once
#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <vector>
#include "Patient.h"
using namespace std;

class Hospital {
private:
    vector<Patient> patients;

public:
    void addPatient(const Patient& newPatient);
    bool removePatient(int id);
    Patient* findPatientById(int id);
    void displayAllPatients() const;
};

#endif
