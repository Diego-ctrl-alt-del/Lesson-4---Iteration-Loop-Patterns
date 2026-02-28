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
Program: logic interupters
Description: Statements from within loops that can change the
            way it works from the inside.

*/

int main()
{
using namespace std;    
    
    for (int i=1; i<=10;i++){
        if (i==3){
            continue;
        }
        
        if (i==6){
            break;
        }
        
        cout << i << " ";
    }

    
    return 0;
}    

/*
What I understood in this program:
I understood that the for loop was set up to
count from 1 to 10. However due to the condtions
made through if statements, the loop has been
segmented and stopped entirely from being finished. 
It was 'interupted.' 

What difficulties I faced:
No issues occured as the program ran, all had gone
accordingly.

What I searched and reviewed:
I reviewed if statements as a result to see their 
determination and the logical operators accompanying
them.

What I learned:
I learned of the specific effects of the 
statements used, such as 'Break;' and 'Continue;'.
Within break, it would make a hard stop to the
loop and skipping the entirety of it to the code
beyond it. Continue is to skip past the set
condition, hence why '3' was passed over in the code.
Based upon the format of the break condition, 6 was
not included because it wasn't '<='

*/
