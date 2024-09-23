// CSVWriter.cpp
#include "CSVWriter.h"
#include <fstream>
#include <iostream>

void CSVWriter::writePatientsToCSV(const std::vector<Patient>& patients, const std::string& filename) {
    std::ofstream csvFile(filename);
    if (!csvFile.is_open()) {
        std::cerr << "Error opening file for writing." << std::endl;
        return;
    }

    // כתיבת כותרות לקובץ CSV
    csvFile << "Patient ID,Name,Condition,Age,Urgency,Wait Time\n";

    int waitTime = 0; // זמן ההמתנה ההתחלתי

    for (const Patient& patient : patients) {
        // כתיבת המידע לקובץ CSV
        csvFile << patient.getId() << ","
            << patient.getName() << ","
            << patient.getCondition() << ","
            << patient.getAge() << ","
            << static_cast<int>(patient.getUrgency()) << ","
            << waitTime << "\n";

        // עדכון זמן ההמתנה
        waitTime += 10; // או כל לוגיקה אחרת לקביעת זמן ההמתנה
    }

    // סגירת הקובץ
    csvFile.close();
}
