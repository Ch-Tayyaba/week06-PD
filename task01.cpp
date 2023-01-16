#include<iostream>
using namespace std;

main()
{
    string temperature;
    string humidity;
    cout << "Enter Temperature : ";
    cin >> temperature;
    cout << "Enter Humidity : ";
    cin >> humidity;
    if(temperature == "warm" && humidity == "dry")
    {
        cout << "Play tennis."; 
    }
    else if(temperature == "warm" && humidity == "dry")
    {
        cout << "Swim."; 
    }
    else if(temperature == "warm" && humidity == "dry")
    {
        cout << "Play basketball."; 
    }
    else if(temperature == "warm" && humidity == "dry")
    {
        cout << "Watch TV"; 
    }
}