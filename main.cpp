#include "Patient.h"
#include "EmergencyQueue.h"
#include "Hospital.h"
#include <iostream>

using namespace std;

int main() {
    EmergencyQueue::initializeWaitTimes();

    Hospital hospital; // ����� ���� �� ��� ������

    Patient patient1("John Doe", 30, "Chest pain");
    Patient patient2("Jane Smith", 45, "Sudden difficulty breathing");
    Patient patient3("Robert Brown", 60, "Suspected fractures");

    hospital.addPatient(patient1);
    hospital.addPatient(patient2);
    hospital.addPatient(patient3);

    patient1.saveToCSV(); // ����� ����� patients.csv
    patient2.saveToCSV();
    patient3.saveToCSV();

    hospital.displayAllPatients(); // ���� �� ��������

    EmergencyQueue::printWaitTimes(); // ����� ���� �����

    return 0;
}
