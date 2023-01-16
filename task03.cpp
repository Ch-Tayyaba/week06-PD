#include<iostream>
using namespace std;
string zodiacSign(int date , string month);
main()
{
    int date;
    string month;
    string sign;
    while(true)
    {
        cout << "ENTER DATE OF YOUR BIRTH : " << endl;
        cout << "DATE : ";
        cin >> date;
        cout << "MONTH : ";
        cin >> month;
        sign = zodiacSign(date , month);
        cout << "YOUR ZODIAC IS : " << sign;
        cout << endl << endl;
    }    

}
string zodiacSign(int date , string month)
{
    if(((date >= 21 && date <= 31) && month == "march") || ((date >= 1 && date <= 19) && month == "april"))
    {
        return "Aries";
    }
    else if(((date >= 20 && date <= 30) && month == "april") || ((date >= 1 && date <= 20) && month == "may"))
    {
        return "Taurus";
    }
    else if(((date >= 21 && date <= 31) && month == "may") || ((date >= 1 && date <= 20) && month == "june"))
    {
        return "Gemini";
    }
    else if(((date >= 21 && date <= 30) && month == "june") || ((date >= 1 && date <= 22) && month == "july"))
    {
        return "Cancer";
    }
    else if(((date >= 23 && date <= 31) && month == "july") || ((date >= 1 && date <= 22) && month == "august"))
    {
        return "Leo";
    }
    else if(((date >= 23 && date <= 31) && month == "august") || ((date >= 1 && date <= 22) && month == "september"))
    {
        return "Virgo";
    }
    else if(((date >= 23 && date <= 30) && month == "september") || ((date >= 1 && date <= 22) && month == "october"))
    {
        return "Libra";
    }
    else if(((date >= 23 && date <= 31) && month == "october") || ((date >= 1 && date <= 21) && month == "november"))
    {
        return "Scorpio";
    }
    else if(((date >= 22 && date <= 30) && month == "november") || ((date >= 1 && date <= 21) && month == "december"))
    {
        return "Sagittarius";
    }
    else if(((date >= 22 && date <= 31) && month == "december") || ((date >= 1 && date <= 19) && month == "january"))
    {
        return "Capricorn";
    }
    else if(((date >= 20 && date <= 31) && month == "january") || ((date >= 1 && date <= 18) && month == "february"))
    {
        return "Aquarius";
    }
    else if(((date >= 19 && date <= 29) && month == "february") || ((date >= 1 && date <= 20) && month == "march"))
    {
        return "Pisces";
    }
    else 
    {
        return "Invalid_Input";
    }
}