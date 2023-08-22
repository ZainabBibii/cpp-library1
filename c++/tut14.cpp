#include<iostream>
using namespace std;

typedef struct employee 
{
    int eId;
    char favchar;
    float salary;
} emp;



union money
{
    int rice;
    char car;
    float ruppee;  
};


int main(){
    emp zainab;
    // struct employee zainab;
    zainab.eId = 2;
    zainab.favchar = 'z';
    zainab.salary = 12000000;

    cout<<" the value is "<<zainab.eId<<endl;
    cout<<" the value is "<<zainab.favchar<<endl;
    cout<<" the value is "<<zainab.salary<<endl;



    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    // cout<<"the value is "<<m1.rice;
    cout<<"the value is "<<m1.car<<endl;
    

    enum meal { breakfast, lunch, dinner};
    
    meal w1 = breakfast;
    cout<<w1<<endl;

    // cout<<breakfast<<endl;
    // cout<<dinner<<endl;
    // cout<<lunch<<endl;

    return 0;
}