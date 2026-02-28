/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
Name: Diego Libreros
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Patterns
Program: Infinite loop example
Description: while loop program that demonstates what can occur
            without its fundemental statement
            
Original program:

#include <iostream>

int main()
{
using namespace std;

int x =1;
while (x<=5){
    cout << x;
}

    return 0;
}
*/

#include <iostream>

int main()
{
using namespace std;

int x =1;
while (x<=5){
    cout << x << " ";
    x++;
}

    return 0;
}

/*
What I understood in this program:
Immediately what I had noticed was the lack of an update
statement, a statement needed to ensure that the program
can continue past the number assaigned to the set variable.
Since it didn't, the program will forever be stuck at 1
as a result.

What difficulties I faced:
No difficulties were faced as the solution provided by the
slides fully worked.

What I needed to search or review:
The program aided in reviewing why the loop got stuck in 
the infinite cycle that it did, causing me to look back at
the slides once again to understand it even deeper than
I already have.

What I learned:
Due to the lack of the update statement 'x++;', the program
was unable to go past the assaigned number and thus, got
stuck in an infinite and repetitive loop.

*/