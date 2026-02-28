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
Program: Summing Even numbers
Description: A program adding up by an incriment of 2
*/

int main()

{
using namespace std;

    int sum =0;

    for (int i=2; i<=20;i+=2){
        sum += i;
    }
    
    cout << "Sum is "<< sum;
/*
What I understood in this program:
I understood that the increasing variable of the value
was rising, but not through the means of just 1.
Additionally, I saw how the conditions have been changed
from what had originally been seen in their respective
formatting. 


What difficulties I faced:
The program ran with no issues, producing the sum of 110.

What I searched and reviewed:
Based upon how it appeared before running the program, I had
went back and reviewed the additional operators that were
previously briefed in a prior lesson to see their application
to this code. Even other codes in lesson 4 were seen as comparison.

What I learned:
I learned from this how to change the incriments to any 
value i would want and how to produce different types of
for loops.
*/

    return 0;
}