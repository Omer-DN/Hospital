#pragma once
#ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;

class Patient {
private:
    string name;
    int age;
    int id;
    static int idCounter;
    string condition;

public:
    Patient(const std::string& name, int age, string condition);
    string getName() const;
    int getAge() const;
    int getId() const;
    string getCondition() const;
    void display() const;
    string toCSV() const;
    void saveToCSV() const;
};

#endif // PATIENT_H
