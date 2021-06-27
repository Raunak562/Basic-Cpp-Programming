// To read the Time in 'HH:MM:SS' format and convert it into total seconds using "Class".

// Including header file "Input/Output Stream" and "Input/Output Manipulation" using a Preprocessor Directive.
#include <iostream>
#include <iomanip>

// Declaring a 'namespace' called 'std'.
using namespace std;

// Declaring a class called 'Time'.
class Time
{
    // Private Data Members.
    private:
        int hours; // To store Number of Hours.
        int minutes; // To store Number of Minutes.
        int seconds; // To store Number of Seconds.
    
    // Public Mumber Functions.
    public:
        // Parameterised Constructor.
        Time(int hh = 0, int mm = 0, int ss = 0)
        {
            hours = hh;
            minutes = mm;
            seconds = ss;
        }
        
        // Function to take the Time as an imput from the user.
        void getTime()
        {
            cout<<"Enter the Time: "<<endl;
            cout<<"Hours: ";
            cin>>hours;
            cout<<"Minutes: ";
            cin>>minutes;
            cout<<"Seconds: ";
            cin>>seconds;
        }
        
        // Function to Display the Time entered by the user.
        void displayTime()
        {
            cout<<"\nThe Time is: ";
            cout<<setw(2)<<setfill('0')<<hours<<":";
            cout<<setw(2)<<setfill('0')<<minutes<<":";
            cout<<setw(2)<<setfill('0')<<seconds<<endl;
        }
        
        // Function to calculate the total Time in seconds..
        int calSeconds()
        {
            return (seconds) + (60 * minutes) + (60 * 60 * hours);
        }
};

// main() function.
int main()
{
    // Creating an object of class Time.
    Time obj;
    
    // Function call: getTime()
    obj.getTime();
    
    // Function call: displayTime()
    obj.displayTime();
    
    // Displaying the total Time in seconds.
    cout<<"The total Time in seconds is: "<<obj.calSeconds()<<" seconds";
    
    // Returning 0 to signify that the program executed successfully.
    return 0;
}

/*
Sample OUTPUT:
Enter the Time:
Hours: 1
Minutes: 1
Seconds: 6

The Time is: 01:01:06
The total Time in seconds is: 3666 seconds
*/