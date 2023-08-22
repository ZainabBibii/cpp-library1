#include<iostream>
using namespace std;


int c = 45;

int main()
{
    

    // **********built-in data types********** 

    int a, b , c;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;


    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    c = a + b ;

    cout<<"The sum is: "<<c<<endl;
    cout<<"the globlal c is: "<<::c<<endl;


      // ********** Float, double and long double Literals ********** 

    float d = 34.4f;
    long double e = 34.4l;
    cout<<"the value of d is: "<<d<<endl<<"the value of e is: "<<endl;

    cout<<"the size of 34.4 is: "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is: "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is: "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is: "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is: "<<sizeof(34.4L)<<endl;



    // ********** Reference Variables ********** 

    //   calling one person with different names is called reference variable 


    float x = 455;
    float & y = x;

    cout<<x<<endl;
    cout<<y<<endl;



      // ********** Typing casting ********** 

    int h = 45;
    float i = 45.76;

    cout<<"The value of h is: "<<(float)h<<endl;
    cout<<"The value of h is: "<<float(h)<<endl;


    cout<<"The value of i is: "<<(int)i<<endl;
    cout<<"The value of i is: "<<int(i)<<endl;
    int j = int(i);


    cout<<"The Expression is: "<< a + i<<endl;
    cout<<"The Expression is: "<< a + (int)i<<endl;
    cout<<"The Expression is: "<< a + int(i)<<endl;



    return 0;
}
