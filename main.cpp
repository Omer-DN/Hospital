#include "Patients.h"
#include "InjuryManager.h"
#include <iostream>
#include "CSVWriter.h"

using namespace std;

// Function to display the main menu options
void displayMenu() {
    cout << "Choose an option:\n";
    cout << "1. Add new patient\n";
    cout << "2. Display all patients (sorted by urgency)\n";
    cout << "0. Exit\n";
}

// Function to display the list of injuries for user to choose from
void displayInjuries(const vector<string>& injuries) {
    cout << "Please choose an injury type from the following list:\n";
    for (size_t i = 0; i < injuries.size(); ++i) {
        cout << i + 1 << ". " << injuries[i] << endl; // Display each injury with an index
    }
}

int main() {
    CSVWriter csvFile;
    InjuryManager injuryManager; // Manager for injury types and urgencies
    Patients patients; // List of patients

    // Using the getInjuryList method to get the list of injuries
    vector<string> injuryList = injuryManager.getInjuryList();
    int choice;
    do {
        displayMenu();
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            int age;
            int injuryIndex;

            cin.ignore();
            cout << "\nEnter patient name: ";
            getline(cin, name);

            cout << "\nEnter patient age: ";
            cin >> age;
            cout << endl;
            displayInjuries(injuryList);
            cout << "\nEnter the number corresponding to the injury: ";
            cin >> injuryIndex;

            if (injuryIndex < 1 || injuryIndex > injuryList.size()) {
                cerr << "Invalid choice. Please try again.\n";
                continue;
            }
            cout << endl;
            string selectedInjury = injuryList[injuryIndex - 1];

            int urgency = injuryManager.getInjuryType(selectedInjury);
            Patient newPatient(name, age, selectedInjury, urgency);// Updated constructor

            patients.addPatient(newPatient); // Add the new patient to the list

            patients.sortPatients(); // Sort all patients by urgency

            csvFile.writeToFile(newPatient, "patients.csv"); // Save to CSV file

        }
        else if (choice == 2) {
            patients.printPatients(); // Display all patients
        }
        cout << endl;
    } while (choice != 0);

    return 0;
}
