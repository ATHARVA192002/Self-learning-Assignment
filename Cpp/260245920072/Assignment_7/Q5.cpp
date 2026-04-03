#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <limits> // Added for numeric_limits

using namespace std;

class StudentRecordSystem {
private:
        int rollNo;
        string name;
    map<int, string> records;

public:
    // 1. Add Record
    void addRecord() {
        
        cout << "Enter Roll Number: ";
        if (!(cin >> rollNo)) {
            cout << "Invalid input. Please enter a numeric Roll Number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Robust clear
        cout << "Enter Name: ";
        getline(cin, name);

        records[rollNo] = name;
        cout << "Record added successfully!\n";
    }

    // 2. Display Records
    void displayRecords() {
        if (records.empty()) {
            cout << "No records found.\n";
            return;
        }
        cout << "\n--- Student List ---\n";
        cout << "Roll No\tName\n";
        // Structured bindings (C++17)
        for (auto const& [rollNo, name] : records) {
            cout << roll << "\t" << name << endl;
        }
    }

    // 3. Save to File
    void saveToFile() {
        ofstream outFile("records.txt");
        if (outFile.is_open()) {
            for (auto const& [roll, name] : records) {
                outFile << roll << "," << name << "\n";
            }
            outFile.close();
            cout << "Records saved to 'records.txt' successfully!\n";
        } else {
            cout << "Error: Could not open file for writing.\n";
        }
    }
};

int main() {
    StudentRecordSystem sys;
    int choice;

    do {
        cout << "\n--- Student Record Menu ---\n";
        cout << "1. Add Record\n";
        cout << "2. Display Records\n";
        cout << "3. Save to File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        
        if (!(cin >> choice)) {
            cout << "Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1: sys.addRecord(); break;
            case 2: sys.displayRecords(); break;
            case 3: sys.saveToFile(); break;
            case 4: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}