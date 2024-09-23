#include "Patient.h"
#include "EmergencyQueue.h"
#include "Hospital.h"
#include <iostream>

using namespace std;

int main() {
    EmergencyQueue::initializeWaitTimes();

    Hospital hospital; // יצירת מופע של בית החולים

    Patient patient1("John Doe", 30, "Chest pain");
    Patient patient2("Jane Smith", 45, "Sudden difficulty breathing");
    Patient patient3("Robert Brown", 60, "Suspected fractures");

    hospital.addPatient(patient1);
    hospital.addPatient(patient2);
    hospital.addPatient(patient3);

    patient1.saveToCSV(); // שמירה לקובץ patients.csv
    patient2.saveToCSV();
    patient3.saveToCSV();

    hospital.displayAllPatients(); // הצגת כל המטופלים

    EmergencyQueue::printWaitTimes(); // הדפסת זמני המתנה

    return 0;
}
