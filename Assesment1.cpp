#include <iostream>
#include <string>
using namespace std;

class car {
public:
    // Properties (data members)
    string brand;
    string model;
    int year;

    // Function to display car information
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create objects (instances) of the car class
    car c1;
    car c2;

    // Set properties for c1
    c1.brand = "VW";
    c1.model = "Polo Gt";
    c1.year = 2019;

    // Set properties for c2
    c2.brand = "Bmw";
    c2.model = "X7";
    c2.year = 2020;

    // Display information for each car
    cout << "c1 Information:" << endl;
    c1.displayInfo();
    cout << endl; 

    cout << "c2 Information:" << endl;
    c2.displayInfo();

    return 0;
}