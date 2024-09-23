Hospital Management System
Project Overview
The Hospital Management System is designed to streamline the process of managing patient queues in a medical facility. This system allows for tracking patients, managing their urgency levels, and exporting patient data to a CSV file. The goal is to provide healthcare professionals with an efficient way to determine who needs immediate attention and who can wait.

Key Features
Patient Management: The system allows for the addition of new patients, each with a unique ID, name, age, medical condition, and urgency level.
Urgency Ranking: Each patient is assigned an urgency level (Critical, Urgent, Routine), which determines their position in the queue.
Data Output: The system prints the patient list to the console and exports the data to a CSV file.
Principles Followed
SRP (Single Responsibility Principle): Each class has a single responsibility.

Patient: Handles patient data.
Patients: Manages the list of patients.
PatientDataHandler: Manages printing to console and CSV.
CSVWriter: Handles writing data to a CSV file.
ISP (Interface Segregation Principle): Interfaces are designed to include only the necessary functions.

IPatientDataHandler: Provides patient data management without overloading classes that do not require all functionalities.
ICSVWriter: Contains only essential functions for writing to a CSV file.
OCP (Open/Closed Principle): The system is designed to be open for extension but closed for modification.

UrgencyLevel: Can be extended with additional urgency levels without altering existing code.
Patient: Can be expanded with additional features without changing the current methodology.
Dependency Injection:

PatientDataHandler uses CSVWriter through constructor dependency injection, making it easier to test and replace dependencies during testing.
Conclusion
By adhering to these principles, we have created a modular, flexible, and maintainable system that can evolve over time. This Hospital Management System not only enhances queue management but also ensures accurate and organized patient data for healthcare providers.

Getting Started
To run this project, clone the repository and follow the instructions in the INSTALL.md file.

Feel free to contribute by submitting issues or pull requests!
