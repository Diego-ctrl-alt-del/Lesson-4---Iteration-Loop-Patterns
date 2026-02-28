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
Program: Countdown
Description: The reversal and changed placement of the conditions
            making up the for loop to cause a different way it 
            can be printed, specifically, backwards.
*/

int main()

{
using namespace std;

    for (int i=10; i>=1;i--){
        cout << i << " ";
    }

    
/*
What I understood in this program:
From the other for loops programs I've seen and the
operator symbols attatched to the variables, alongside
how they've been repositioned, it was evident that what
would be printed would be a countdown to 1 rather than 
countup to 10.

What difficulties I faced:
No difficulties were faced in running the code.

What I searched and reviewed:
Reviewing the slides had already confirmed my original
observation as being true.

What I learned:
I learned that from changing the initialization, the
condition, and the increment, you can cause the loop
to count backwards. Hence, providing another kind of
loop to work with.

*/

    return 0;
}