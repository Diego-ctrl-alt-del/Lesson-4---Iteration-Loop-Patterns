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
Program: Counter vs Accumulator
Description: The reversal and changed placement of the conditions
            making up the for loop to cause a different way it 
            can be printed, specifically, backwards.
            
Original Programs:

int main()
{
    
using namespace std;

    int count =0;
    
    for (int i = 0; i < 10;
    i++) count++;
    
    return 0;
*/

/*
Debug version(s):

//Counter
int main()
{
    
using namespace std;

    int count =0;
    
    for (int i = 0; i < 10;
    i++){
        count++; 
        cout << "Count: "<< count << endl;
    } 
    
    return 0;
}

*****************************************************************
// Accumulator
int main()
{
    
using namespace std;

int sum= 0;

for(int i=1; i <=5;
i++){
    sum+=i;
    cout << "Sum: "<< sum << endl;
}

return 0;
}
*/

/*
What I understood in this program:
While it followed the same typical formatting of a for loop
the variables attatched with their respective operators
would completely alter the outcome.


What difficulties I faced:
At first, each program would produce nothing. As a result,
I would go on to produce differing cout statements to fully
demonstrate the varying patterns. Furthermore, went on to
reorganize what had been given.

What I searched and reviewed:
In my search I found the importance of each of the operators
that came after the loop with their variables, how precise
it had to be. Specifically '++;' or "+=(variable);"

What I learned:
The counter is the equivalent of a simple addition, by one,
while the accumulator is somewhat similar to an ever inscreasing
exponent. In the likes of a single dollar growing to the span of
more than 10 million at the end of the month from it squaring
itself.

*/