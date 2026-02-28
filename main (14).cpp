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
Program: Sentinel implementation
Description: while loop program that allows for the user to produce and
            indefinite number of inputs whilst being able to end the 
            cycle. 
*/

int main()
{

using namespace std;

int total=0;
int counter=0;
int grade;

cout << "Enter grade or -1 to quit\n";
cin >> grade;

while (grade !=-1){
    total+=grade;
    counter++;
    
    cout << "Enter next grade or -1 to quit\n";
    cin >> grade;
}

if (grade !=0){
    double average = static_cast<double>(total)/ counter;
    cout << "Class average is "<< average;
} else {
    cout << "No grades were entered.";
}


    return 0;
}

/*
What I understood in this program:
I understood the conditions that needed to be met and how they
were constructed. That if the input wasn't -1, the loop
would still continue and collect other number which was,
adding to that total. In correspondence to each new input,
the counter too would be increased, and eventually be used
to divide the total, forming the average.

Difficulties I faced:
The program ran with no issues, no difficulties had to be faced

What I needed to search or review:
The program itself did help me review if and else statements, along
with conditions and their operators.

What I learned:
I learned how to create a sentinel implementation, from it's
inner workings to its execution as it runs. I helped me know
more about the formatting needed for each and how those same 
variable would go on to contribute to one another.