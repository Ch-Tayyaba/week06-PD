#include<iostream>
using namespace std;


void time (int startingHour,int arrivalHour,int startingMinutes,int arrivalMinutes);



main()
{
    int startingHour;
    int startingMinutes;
    int arrivalHour;
    int arrivalMinutes;
    
    
    cout << "Enter the exam starting time (hour) = ";
    cin >> startingHour;
    cout<< "Enter the exam starting time (min) = ";
    cin >> startingMinutes;
    cout << "Enter your exam arrival time (hour) = ";
    cin >> arrivalHour;
    cout << "Enter your exam arrival time (min) = ";
    cin >> arrivalMinutes;
    time ( startingHour, arrivalHour, startingMinutes, arrivalMinutes);


    
    
}

void time(int startingHour,int arrivalHour,int startingMinutes,int arrivalMinutes)
{
    int remainingtime , startingTime , arrivalTime ;
    startingTime = (startingHour * 60) + startingMinutes;
    arrivalTime = (arrivalHour * 60) + arrivalMinutes;
    remainingtime = arrivalTime - startingTime;



    if(remainingtime < 0)
    {
        remainingtime = remainingtime * -1;
        int newHours;
        int newMinutes;
        newHours = remainingtime / 60;
        newMinutes = remainingtime % 60;

        if(newHours == 0 && newMinutes <= 30)
        {
           cout << "ON TIME" << endl << newMinutes << " minutes before the class .";
          
        }

         else if((newHours == 0 && newMinutes > 30)|| (newHours > 0 && newMinutes > 0))
        {
           cout << "EARLY" << endl << newHours << ":" << newMinutes << " minutes before the class .";
          
        }

    }

    else if (remainingtime > 0)
    {
        int newHours;
        int newMinutes;
        newHours = remainingtime / 60;
        newMinutes = remainingtime % 60;

        if(newHours == 0 && newMinutes<=59)
        {
            cout << "LATE" << endl << newMinutes << " minutes after the class .";

        }

        else
        {
            cout << "LATE" << endl;
            cout << newHours << ":" << newMinutes << " minutes after the class .";


        }

    }

}
