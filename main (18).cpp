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
Program: Scope and lifetime
Description: The determination of the scope of a name'd variables
            life within a for loop
*/

int main()

{
using namespace std;

    for (int i=0; i<5;i++){

    }

    
/*
What I understood in this program:
I understood that due to the prevention of "variable namespace
population" any addition variables with the same name cannot
be produced outside of the range of the for loops brackets.

What difficulties I faced:
No difficulties were faced as the only produced inside of the
originally written down code was a blank. 

What I searched and reviewed:
Within further testing, anything inside of the curley brackets were
able to be seen. Whilst all else that was outside involving i, such
as "cout << i;" resulted in a complier error, just as descibed in
the slides.

What I learned:
I learned from this how to change the incriments to any 
value i would want and how to produce different types of
for loops.
*/

    return 0;
}