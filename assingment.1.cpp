#include <iostream>
#include <string>
using namespace std;
class car
{
public:
// Properties (data members)
string brand;
string model;
int year;
// Function to display student information
void displayInfo() {
cout << "brand: " << brand << endl;
cout << "model: " << model << endl;
cout << "year: " << year<< endl;
}
};
int main() {
// Create objects (instances) of the Student class
car c1;
car c2;
// Set properties for student1
c1.brand = "thar";
c1.model ="x4";
c1.year = 1999;
// Set properties for student2
c2.brand = "oooo";
c2.model = "a5";
c2.year= 2016;
// Display information for each student
cout << "c1 Information:" << endl;
c1.displayInfo();
cout << endl; // For better readability
cout << "c2 Information:" << endl;
c2.displayInfo();
return 0;