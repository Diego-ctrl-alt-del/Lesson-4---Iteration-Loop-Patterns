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
Program: while Example- Counter Controlled Class Average
Description: while loop program that allows the user to input class grades
            and cumilate an average based on said input.

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

int total= 0;
int counter = 1;
int grade;

cout << "Enter grade:\n";
cin >> grade;
total+=grade;

while (counter<10){
    cout << "Enter next grade:\n";
    cin >> grade;
    total +=grade;
    counter++;
}
    double average = static_cast<double>(total)/ counter;
    cout << "Average: "<< average << endl;

    return 0;
}

/*
What I understood in this program:
I understood the intergers presented and their contributions to
each other and the looping process. Such as the case with the 'total'
since it would go on to add itself with the grade input by the user
and eventually be divided by the set number of times it will be
added (10). In its division I understood it was the quotient would
become a double.

Difficulties I faced:
Originally to further use the code that was given, I had to produce
the output statements and set the end of the loop. For a brief period
of time after I did this, nothing was producing once I managed to get
the loop working until stopping at 10, however I forgot the final output
of the average. I put it down, and it is registered, but with nothing to
display it.

What I needed to search or review:
For insporation on the debug version of the program, I looked at the
definite iteration in how its limitations were set and how the code 
was used.


What I learned:
I learned how to properly use the while loop code and the other
codes given based on the set direction of producing 10 grades and 
their average. Creating an indefinite iteration.
