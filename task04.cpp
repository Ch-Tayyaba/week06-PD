#include<iostream>
using namespace std;

int charge (char serviceCode , char time , int numberOfMinutes);

main()
{
    char serviceCode;
    char time;
    int numberOfMinutes;
    int amount;
    cout << "Enter R for Regular and P for Premium :  ";
    cin >> serviceCode;
    cout << "Enter N for Night and D for Day : ";
    cin >> time;
    cout << "Enter Minutes : ";
    cin >> numberOfMinutes;
    amount = charge (serviceCode , time , numberOfMinutes);
    if (amount > 0)
    {
        cout << "The charges are : " << amount << "$";
    }
    else
    {
        cout << "Invalid Input. ";
    }

}
int charge (char serviceCode , char time , int numberOfMinutes)
{
    int amount ;
    if ((serviceCode =='R' || serviceCode =='r') && numberOfMinutes <= 50)
    {
        amount = 10;
    }
    else if((serviceCode =='R' || serviceCode =='r') && numberOfMinutes > 50)
    {
        numberOfMinutes = 50 - numberOfMinutes;
        amount = 10 + (numberOfMinutes * 0.20);
    }
    else if((serviceCode =='P' || serviceCode =='p') && numberOfMinutes <= 100 && (time == 'N' || time == 'n'))
    {
        amount = 25.00 ;
    }
    else if((serviceCode =='P' || serviceCode =='p') && numberOfMinutes <= 75 && (time == 'D' || time == 'd'))
    {
        amount = 25.00;
    }
    else if((serviceCode =='P' || serviceCode =='p') && numberOfMinutes > 100 && (time == 'N' || time == 'n'))
    {
        numberOfMinutes = 100 - numberOfMinutes;
        amount = 25.00 + (numberOfMinutes * 0.05);
    }
    else if((serviceCode =='P' || serviceCode =='p') && numberOfMinutes > 75 && (time == 'D' || time == 'd'))
    {
        numberOfMinutes = 75 - numberOfMinutes;
        amount = 25.00 + (numberOfMinutes * 0.10);
    }
    else
    {
        amount = -1;
    }
    return amount;
}
