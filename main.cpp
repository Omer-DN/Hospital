#include <iostream>
#include "Patients.h"
#include "PatientDataHandler.h"
#include "CSVWriter.h"


int main() {
    Patients patients;
    //PatientDataHandler handler;
    CSVWriter csvWriter;
    PatientDataHandler patientDataHandler(&csvWriter);

    patients.addPatient(Patient("James Smith",35, "Flu", UrgencyLevel::Critical));
    patients.addPatient(Patient("Olivia Johnson",28, "Broken Leg", UrgencyLevel::Critical));
    patients.addPatient(Patient("Liam Brown",41, "Cold", UrgencyLevel::Normal));
    patients.addPatient(Patient("Emma Davis", 35, "Seizures", UrgencyLevel::Urgent));
    patients.addPatient(Patient("Jane Doe", 28, "Loss of consciousness", UrgencyLevel::Critical));
    patients.addPatient(Patient("Noah Wilson", 41, "Animal or snake bites", UrgencyLevel::Normal));

    patients.sortPatients();
    patients.writeToCSV("patients.csv");

    patientDataHandler.printPatients(patients);

    return 0;
}
