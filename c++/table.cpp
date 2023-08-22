#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"which table you wan to print upto 10 multiple"<<endl;
    cin>>a;

    cout<<"table of "<<a<<" is below "<<endl;
    for (int i = 1; i <= 10; i++)
    {
        cout<<(i*a)<<endl;
    }
    

    return 0;
}
