#include<iostream>
using namespace std;



// Selection control structure

int main()
{

    int age;
    cout<< "Tell me your age: "<<endl;
    cin>>age;


    //  ****** Selecion control structure: If-else-if else ladder ******** 

    // if ((age<18) && (age>0))
    // {
    //   cout<<"You can not come to my party"<<endl;
    // }
    
    // else if (age==18) {

    //     cout<< "You are a kid and you will get a kid pass to the party"<<endl;

    // }

    // else if (age<1)
    // {
    //     cout<< "You are not yet born"<<endl;
    // }

    // else {
    //     cout<<"You can come to my party"<<endl;
    // }
    

    //  ****** Selecion control structure: Switech case statements ******** 

    switch (age)
    {
    case 18:
       
        cout<<"You are 18"<<endl;
        break;

    case 20:
      
        cout<<"You are 20"<<endl;
        break;

    case 22:
       
        cout<<"You are 22"<<endl;
        break;

    case 24:
       
        cout<<"You are 24"<<endl;
        break;
    
    default:

    cout<<"No special case"<<endl;

        break;
    }

    cout<<"You are done with siwtch case"<<endl;

    return 0;
}
