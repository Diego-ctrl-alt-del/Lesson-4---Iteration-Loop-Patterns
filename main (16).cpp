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
Program: Counting from 1 to 10
Description: for loop program that prints the numbers 1 through 10

Original program:

int main()
{

using namespace std;

int total= 0;
int counter = 1;

while (counter <=10 ){
    int grade;
    cin >> grade;
    total +=grade;
    counter++;
}

double average = static_cast<double>(total)/10;
cout << average;

    return 0;
}
*/

int main()

{
using namespace std;

    for (unsigned int i=1; i<=10;++i){
        cout << i << " ";
    }
/*
What I understood in this program:
I understod that the for loop essentially is essentially
a shorted version of the while loop with all of its inner
components together in one place.

What difficulties I faced:
None were faced and the program ran with no issues.

What I searched and reviewed:
I looked back at the slides once again, wanting to know
why this type of code was simpler, like the prior while
loops, I wanted to get more concrete definition than simply
just seeing and recognizing it as easier.

What I learned:
Upon further review and its success in running, I learned that
its best usage would be for definite iterations considering how
its ends can be known and the smaller likelihood of the program
becoming stuck in an infinite loop like how the while loop does.
*/

    return 0;
}