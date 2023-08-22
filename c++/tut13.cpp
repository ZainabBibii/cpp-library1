#include<iostream>
using namespace std;

int main(){

    // ***** Array Example *****

    int mathmarks[4];
    mathmarks[0] = 453886;
    mathmarks[1] = 4523433;
    mathmarks[2] = 453343;
    mathmarks[3] = 45653;
    
    cout<<"these are maths marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    cout<<"these are marks"<<endl;
    


    int marks[4] = {4, 35, 78, 99};
    // you can change the value of an array 
    marks[2] = 455;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    
    int engmarks[4] = {4, 35, 78, 99};
    for (int k = 0; k < 4; k++)
    {
        cout<<"The value of engmarks "<<k<<" is "<< engmarks[k]<<endl;
    }
    
    int i=0;
    int marks_1[4] = {2, 86, 58, 239};
    while (i<5)
    {
        cout<<"The value of  marks_1 "<<i<<" is "<< marks_1[i]<<endl;
        i++;
     
    }
   
    int j=0;
    int marks_2[4] = {2, 86, 58, 239};
    do{
        cout<<"The value of marks_2 "<<j<<" is "<< marks_2[j]<<endl;
        j++;
     
    }
    while (j<5);


    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

   
    return 0;
}