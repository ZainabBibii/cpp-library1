#include<iostream>

using namespace std;


int main()
{

    // ***** Loops in C++ *****
    // 1. For loop.
    // 2. While loop.
    // 3. do-while loop


    // **** For Loop *****

    // int i = 1;
    // cout<<i;
    // i++;
    // cout<<i;
    // i++;
    // cout<<i;
    // i++;
    // cout<<i;
    // i++;   This type of code take time and lines that why for loop will be use



    // Syntax for For-loop 
    // for (initilaztion; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // condition ----> loop body -----> updation ----> then repeat; until condition get false; Intilizition only frist time used.

    // for (int i = 5; i <= 40 ; i++)

    // {                  
    //     cout<<i<<endl;
           
    // }


    // Example of Infinite loop 


    // for (int i = 1; 34 <= 40 ; i++)

    // {                  
    //     cout<<i<<endl;
           
    // }
    



    // ***** While loop in C++ *****
    // Syntax;
    // while (condition )
    // {
    //     C++ statements;
    // }
    
    // Printing 1 to 40 using while loop 

    // int  i = 1;

    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }


    // Example of infinite while-loop 
     
    // int  i = 1;

    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    


      // *****Do-While loop in C++ *****
    // Syntax;
    //  do 
    // {
    //     C++ statements;
    // }while (condition );


    // Printing 1 to 40 using while loop 

    int  i = 1;

    
    do{
        cout<<i<<endl;
        i++;
    }while (false);



    return 0;
}
