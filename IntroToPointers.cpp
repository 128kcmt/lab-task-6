#include <iostream>
using namespace std;

int main(){
    // declare pointer and initialize it
    //so that it doesn't store  random address
    int* pPointer = nullptr;

    int integerVar = 5;

    //assign poineter to address of object
    pPointer = &integerVar;

    //output the value of integerVar
    cout << "integerVar: " << integerVar << endl;

    //output the address of integerVAr
    cout << "Address of integerVAr: " << &integerVar << endl;

    //output the address of Pointer
    cout << " of pPointer: " << *++pPointer<< endl;
    cout << "Address of pPointer: " << &pPointer << endl;
    return 0;
    
}