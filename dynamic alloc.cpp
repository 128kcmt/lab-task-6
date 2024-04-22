#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    // Dynamically allocate a string
    char* dynamicString = nullptr;
    cout << "Enter a string: ";
    cin.ignore(); 
    char temp[100]; 
    cin.getline(temp, 100);
    dynamicString = new char[strlen(temp) + 1]; 
    strcpy(dynamicString, temp); 

    // Output the values
    cout << "Dynamically allocated integer: " << *dynamicInt << endl;
    cout << "Dynamically allocated string: " << *dynamicString << endl;
    return 0;
}
