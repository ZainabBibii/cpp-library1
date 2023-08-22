#include<iostream>

using namespace std;

int glo = 6;

void sum(){
    int a;
    cout<< glo;
}

int main(){

    int glo=9;
    glo= 78;


    int a = 2, b = 5;
    float pi = 3.14;
    char c = 'z';
    // bool is_true = true;
    bool is_true = false;

    sum();
    cout<< glo << is_true;

    // cout<<"This is the beginning of cpp course; \n here the value of a : " <<a<<  ". \n the value of b is : " <<b;
    // cout<< " \n the value of  pi is : " <<pi;
    // cout<< "\n the value of c is : " <<c;


    return 0;
}