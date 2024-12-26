#include <iostream>
#include <fstream> // Required for file handling
#include <string>  // Required for strings

using namespace std;

int main() {
    int rollNumber;
    int age;
    char grade;
    string name;

    cout << "Enter Roll number: ";
    cin >> rollNumber;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter grade: ";
    cin >> grade;

    cin.ignore(); 
    cout << "Enter name: ";
    getline(cin, name);

    ofstream file("student.txt", ios::app);

    if (!file.is_open()) {
        cout << "Failed to open file." << endl;
        return 1; 
    }

    
    file << rollNumber << " " << name << " " << age << " " << grade << endl;

    cout << "Record added successfully!" << endl;

    

    file.close();
}
