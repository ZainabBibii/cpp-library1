#include<iostream>
#include<iomanip>

using namespace std;



int main()
{

    // int a = 3;
    // cout<<"this was the value of a is: "<<a<<endl;

    // a = 45;
    // cout<<"this is the value  of a is: "<<a<<endl;


    // const int a = 45;
    // cout<<"this was the value of a is: "<<a<<endl;


    // a = 45; ***** you will get an error beacuse a is an constant
    // cout<<"this is the value  of a is: "<<a<<endl;



    // ****** Manupilators in C++ ******** 

    // int a = 45, b = 36, c = 1233;

    // cout<<"the value of a without setwe is : "<<a<<endl;
    // cout<<"the value of b without setwe is : "<<b<<endl;
    // cout<<"the value of c without setwe is : "<<c<<endl;



    // cout<<"the value of a with setw is : "<<setw(4)<<a<<endl;
    // cout<<"the value of b with setw is : "<<setw(4)<<b<<endl;
    // cout<<"the value of c with setw is : "<<setw(4)<<c<<endl;



      // ****** Operator Precedence ******** 

      int a = 4 , b = 2;

    //   int c = (a*b) + b;
    int  c = ((((a*b) + b) - 45) + 87); 
    cout<<c;
    

    return 0;
}
