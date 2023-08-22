#include<iostream>
using namespace std;

int main(){
    
    // what is pointer?  ----> data typ which holds the address of other data types


    int a = 3;
    int* b = &a;


    // & ----> Address of a operator
    cout<<"the addresss of a is "<<&a<<endl;
    cout<<"the addresss of b is "<<b<<endl;

    // * ----> (Value at) Derefernce of a operator 
    cout<<"the value at address b is "<<*b<<endl;

    // pointer to pointer 

    int** c = &b;
    cout<<"the addresss of c is "<<&c<<endl;
    cout<<"the addresss of c is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}