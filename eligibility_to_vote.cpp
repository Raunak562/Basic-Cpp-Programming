// Checking the Age of the User to determine whether "Is he/she Eligible to Vote or Not".

// Including header file "Input/Output Stream" using a Preprocessor Directive.
#include <iostream>

// Declaring a 'namespace' called 'std'.
using namespace std;

// main() function.
int main()
{
    // Declaring a variable of datatype 'integer' to store the age entered by the user.
    int age;
    
    // Prompting the user to enter his/her age.
    cout<<"Enter your Age: ";
    cin>>age;
    
    // Displaying whether the user is eligible to vote or not.
    if(age >= 18)
        cout<<"Congratulations! You are eligible to vote!";
    else
        cout<<"Sorry Dear Citizen!.\nWait for "<<18 - age<<" years for your eligibility to vote.";
    
    // Returning 0 to signify that the program executed successfully.
    return 0;
}

/*
Sample OUTPUT 1:
Enter your Age: 21
Congratulations! You are eligible to vote!

Sample OUTPUT 2:
Enter your Age: 18
Congratulations! You are eligible to vote!

Sample OUTPUT 3:
Enter your Age: 15
Sorry Dear Citizen!.
Wait for 3 years for your eligibility to vote.
*/