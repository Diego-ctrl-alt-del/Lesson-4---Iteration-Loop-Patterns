/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
/*
Name: Diego Libreros
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Patterns
Program: Input validation pattern
Description: A program that ensures the user provides a
            sensical value so that it can proceed to run

*/

int main()
{
using namespace std;    
    
    int age;
    cout << "Enter age (1-120):\n";
    cin >> age;
    
    while (age<1|| age>120){
        cout << "Invalid. Please enter a realistic age:\n";
        cin >> age;
    }

    
    return 0;
}    

/*
What I understood in this program:
I understood the either of the set conditions, as indicated by the
|| operator, would need to be met. Hence, the precautionary 
conditions would cause the program to loop until a "valid" Input
was recieved.

What difficulties I faced:
None were faced, the program ran smoothyl

What I searched and reviewed:
I reviewed conditions and the build of while loops.

What I learned:
I learned how to set precautionary code in my program to ensure
that the user will provide "valid" input.

*/
