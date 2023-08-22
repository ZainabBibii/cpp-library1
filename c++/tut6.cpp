#include<iostream>

/*

There are two types of header files
1.system header  file: it comes with compiler
for expamplr we using #include<iostream>;

2.user defined header files: it is written by programmer
for example #include<this.h>

 this will produce an error if this.h is not present in the current directory;

*/


using namespace std;

int main()
{
    int a=10, b=5;

    cout<< "operators in c++:"<<endl;
    cout<< "Following are the types of operators in c++:"<<endl;
    // airthmatic operator

    cout<< "The value of a + b is: "<<a+b<<endl;
    cout<< "The value of a - b is: "<<a-b<<endl;
    cout<< "The value of a * b is: "<<a*b<<endl;
    cout<< "The value of a / b is: "<<a/b<<endl;
    cout<< "The value of a % b is: "<<a%b<<endl;
    cout<< "The value of a ++a is: "<<a++<<endl;
    cout<< "The value of a ++a is: "<<++a<<endl;
    cout<< "The value of a -- b is: "<<a--<<endl;
    cout<< "The value of  --a b is: "<<--a<<endl;


    //  Assigment operators --> use to assign values to varialbes

    // int a = 6, b=8;
    // char d = 'a' 


    // comaprison operators 

    cout<<endl;

    cout<< "Following are the types of comparison operators in c++:"<<endl;

    cout<< "the value of a == b is: "  <<(a==b)<<endl;
    cout<< "the value of a < b is: "  <<(a<b)<<endl;
    cout<< "the value of a > b is: "  <<(a>b)<<endl;
    cout<< "the value of a <= b is: "  <<(a<=b)<<endl;
    cout<< "the value of a => b is: "  <<(a>=b)<<endl;
    cout<< "the value of a != b is: "  <<(a!=b)<<endl;



    // logical operators 
    cout<<endl;

    cout<< "Following are the logical operators in c++:"<<endl;

    cout<< "the value of this logical and operator ((a==b) && (a<b)) is: "  <<((a==b) && (a<b))<<endl;
    cout<< "the value of this logical or operator ((a==b) || (a>b)) is: "  <<((a==b) || (a>b))<<endl;
    cout<< "the value of this logical not operator (!(a==b)) is: "  <<((a==b))<<endl;



    return 0;
}
