#include<iostream>
using namespace std;

float fruitPrice(string fruit, string day, float quantity);


main()
{
 
	string fruit, day;	
	float quantity;
    float output;
	cout << "ENTER FRUIT NAME: ";
	cin >> fruit;
	cout << "ENTER THE DAY OF THE WEEK: ";
	cin >> day;
	cout << "ENTER THE QUANTITY: ";
	cin >> quantity;
    output = fruitPrice(fruit, day, quantity);
    if (output == -1)
    {
        cout << "Invalid Input. " ;
    }
    else
    {
        cout << "PRICE IS: " << output;
    }
}

float fruitPrice(string fruit, string day, float quantity)
{
    float price;

	if(fruit == "banana" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
	{
	   price = 2.50 * quantity;	
	} 

	else if(fruit == "apple" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
	{
	   price = 1.20 * quantity;	
	} 

	else if(fruit == "orange" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
	{
	   price = 0.85 * quantity;	
	} 

	else if(fruit == "grapefruit" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
	{
	   price = 1.45 * quantity;	
	} 

	else if(fruit == "kiwi" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
	{
	   price = 2.70 * quantity;	
	} 

	else if(fruit == "pineapple" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
	{
	   price = 5.50 * quantity;	
	} 

	else if(fruit == "grapes" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
	{
	   price = 3.85 * quantity;	
	} 

	else if(fruit == "banana" && (day == "Saturday" || day == "Sunday"))
	{
	   price = 2.70 * quantity;	
	}

	else if(fruit == "apple" && (day == "Saturday" || day == "Sunday"))
	{
	   price = 1.25 * quantity;	
	} 

	else if(fruit == "orange" && (day == "Saturday" || day == "Sunday"))
	{
	   price = 0.90 * quantity;	
	}

	else if(fruit == "grapefruit" && (day == "Saturday" || day == "Sunday"))
	{
	   price = 1.60 * quantity;	
	}

	else if(fruit == "kiwi" && (day == "Saturday" || day == "Sunday"))
	{
	   price = 3.00 * quantity;	
	}

	else if(fruit == "pineapple" && (day == "Saturday" || day == "Sunday"))
	{
	   price = 5.60 * quantity;	
	}

	else if(fruit == "grapes" && (day == "Saturday" || day == "Sunday"))
	{
	   price = 4.20 * quantity;	
	}

	else
	{
		price = -1;
	}
    return price;
}