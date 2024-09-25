#include "CSVWriter.h"
#include <fstream>
#include <iostream>

void CSVWriter::writeToFile(const Patient& patient, const string& filename) {
    ofstream outputFile(filename, ios::app);
    if (outputFile.is_open()) {
        outputFile << patient.toCSV() << endl;
        outputFile.close();
    }
    else {
        cerr << "Error saving file.\n";
    }
}
