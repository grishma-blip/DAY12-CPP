//C++ program to illustrate pointers

#include <iostream>
using namespace std;

void demonstration_pointer(){
    int var = 20;

    //declare pointer value
    int* ptr;

    ptr = &var;

    //assign the address f a variable to a pointer
    cout<<"Value at ptr = " << ptr << "\n";
    cout<<"Value at var = " << var << "\n";
    cout<<"Value at *ptr = " << *ptr << "\n";
}
//Driver Program
int main(){
    demonstration_pointer();
    return 0;
}