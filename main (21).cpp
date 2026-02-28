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
Program: do...while statement
Description: a different king of loop from 'for' and only while,
            as to where the ones prior checks the condition before
            the code is ran, a do...while checks afterwards.
           
           
build of a do...while loop:    
            
int main()
{
using namespace std;

    do{
        //body  
    }while(condition);

    return 0;
}
*/

int main()
{
using namespace std;    
    
    int x= 10;
    
    do{
        cout << x;
        x++;
    } while (x<=5);
    
    return 0;
}    
/*
What I understood in this program:
I understood that with the body concluding that 10 
will be added by one, it goes against the conditions in
the while loop 11<= 5 and is the reason behind it is
printed as its assaigned value.

What difficulties I faced:
No challenges were faced, the program ran without fault.

What I searched and reviewed:
In my review, the process behind what would be the result
became clearer than it originally was because of how the
do while works, how it checks after it is ran. 

What I learned:
I Learned more about the functionality of this kind of
loop and its potential usage in varying types of statements.

