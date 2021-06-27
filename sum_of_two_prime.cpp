// Checking whether a Number can be expressed as a "Sum of Two Prime Numbers".

// Including header file "Input/Output Stream" using a Preprocessor Directive.
#include <iostream>

// Declaring a 'namespace' called 'std'.
using namespace std;

// Function Prototype
bool isprime(int); // To determine whether the number is prime or not.
void sum_of_two_prime(int); // To display all possible combinations of "Sum of Two Prime Numbers".

// main() function.
int main()
{
    // Declaring a variable of datatype 'integer' to store the number entered by the user
    //whose all possible combinations of "Sum of Two Prime Numbers" are to be determined.
    int num;
    
    // Prompting the user to enter the number.
    cout<<"Enter the Number and check all the possible combinations of \"Sum of Two Prime Numbers\": ";
    cin>>num;
    
    // Function Call
    sum_of_two_prime(num);
    
    // Returning 0 to signify that the program executed successfully.
    return 0;
}

// Function Definition
bool isprime(int a)
{
    // Checking if number is less than two as prime numbers greater than equal to two.
    if(a < 2)
        // If the condition is true, return false.
        return false;

    else
        // Checking all possible numbers from two to root of the number.
        for(int i = 2; i * i <= a; i++)
            // Returns false if divisible by 'i'.
            if(a % i == 0)
                return false;
    
    // Returns true as the number has to be a prime number in this situation.
    return true;
}

// Function Definition
void sum_of_two_prime(int a)
{
    // Boolean variable to check if a combination was generated or not.
    bool flag = false;
    
    // Displaying all the possible combinations.
    cout<<"\nThe Possible Combinations: ";
    
    // Checking from two to half of the number to avoid repetition.
    for(int i = 2; i <= a / 2; i++)
        // Checking if both 'i' and 'number - i' are prime or not.
        if(isprime(i) && isprime(a - i))
        {
            // Displays the combination.
            cout<<endl<<a<<" = "<<i<<" + "<<a - i;
            // Becomes true as a successful combination was generated.
            flag = true;
        }
    
    // Displays not possible if no combinations were successful.
    if(!flag)
        cout<<"Not Possible!";
}

/*
Sample OUTPUT 1:
Enter the Number and check all the possible combinations of "Sum of Two Prime Numbers": 34

The Possible Combinations: 
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17

Sample OUTPUT 2:
Enter the Number and check all the possible combinations of "Sum of Two Prime Numbers": 2

The Possible Combinations: Not Possible!

Sample OUTPUT 3:
Enter the Number and check all the possible combinations of "Sum of Two Prime Numbers": 11

The Possible Combinations: Not Possible!
*/