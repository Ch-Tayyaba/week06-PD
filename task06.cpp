#include<iostream>
using namespace std;

float apartmentPrice(string month , int stays);
float studioPrice(string month , int stays);

main()
{
	string month;
	int stays;
	float actualAmountOfApartment;	
	float actualAmountOfStudio;
	float apartmentDiscount;
	float apartmentFinal;
	float studioDiscount;
	float studioFinal;
	
	cout << "ENTER THE MONTH: ";
	cin >> month;
	cout << "ENTER NUMBER OF STAYS : ";
	cin >> stays;
		
	actualAmountOfApartment = apartmentPrice(month, stays);
	if(stays > 14)	
	{
		apartmentDiscount = actualAmountOfApartment * 0.10;
		apartmentFinal = actualAmountOfApartment - apartmentDiscount;
		cout << "APARTMENT: " << apartmentFinal << "$" << endl;
		
	}
	else
	{
		cout << "APARTMENT: " << actualAmountOfApartment << "$" << endl;
	}
	
	
	actualAmountOfStudio= studioPrice(month, stays);
	if((month == "may") || (month == "october"))
	{
		if(stays > 7  &&  stays < 14)
		{
			studioDiscount = actualAmountOfStudio * 0.05;
			studioFinal = actualAmountOfStudio - studioDiscount;	
			cout << "STUDIO: " << "$" << studioFinal;
		}
		else if(stays > 14)
		{
			studioDiscount = actualAmountOfStudio * 0.30;	
			studioFinal = actualAmountOfStudio - studioDiscount;
			cout << "STUDIO: " << "$" << studioFinal;
		}

	}

	else if((month == "july") || (month == "august"))
	{
		cout << "STUDIO: " << "$" << actualAmountOfStudio;	
	}

	else if((month == "june") || (month == "september"))
	{
		if(stays > 14)
		{
			studioDiscount = actualAmountOfStudio * 0.20;	
			studioFinal = actualAmountOfStudio - studioDiscount;
			cout << "STUDIO: " << "$" << studioFinal;
		}
		
		else
		{
			cout << "STUDIO: " << "$" << actualAmountOfStudio;
		}
	}
	


}

float apartmentPrice(string month, int stays)
{
	float price;

	if((month == "may") || (month == "october"))
	{
		price = 65 * stays;
	}

	else if((month == "june") || (month == "september"))
	{
		price = 68.70 * stays;
	}

	else if((month == "july") || (month == "august"))
	{
		price = 77 * stays;
	}

	return price;
}

float studioPrice(string month, int stays)
{	
	float price;

	if((month == "may") || (month == "october"))
	{
		price = 50 * stays;
		
	}

	else if((month == "june") || (month == "september"))
	{
		price = 75.20 * stays;

	}

	else if((month == "july") || (month == "august"))
	{
		price = 76 * stays;
	}

	return price;
}