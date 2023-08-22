#include<iostream>
using namespace std;

int main(){
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


    return 0;
}