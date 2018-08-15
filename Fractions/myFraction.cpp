#include "stdafx.h"
#include "myFraction.h"
#include <iostream>
using namespace std;

fractionType::fractionType(const int& nu, const int& de)
{
	numerator = nu;
	if (de == 0)
	{
		std::cout << "\m\tInvalid denominator."
				  << "Default value used for denominator.";
		denominator = 0;
	}
	else
		denominator = de;
}

fractionType::fractionType(const fractionType& rightFraction)
{
	numerator = rightFraction.numerator;
	denominator = rightFraction.denominator;
}

fractionType::fractionType()
{
	numerator = 0;
	denominator = 0;
}

fractionType::~fractionType()
{
}

bool fractionType::operator==(const fractionType& rightFraction) const
{
	return ((numerator == rightFraction.numerator) && (denominator == rightFraction.denominator));
}

bool fractionType::operator!=(const fractionType& rightFraction) const
{
	return ((numerator != rightFraction.numerator) || (denominator != rightFraction.denominator));
}

bool fractionType::operator<(const fractionType& rightFraction) const
{
	return (numerator * rightFraction.numerator < denominator * rightFraction.denominator);
}

bool fractionType::operator>(const fractionType& rightFraction) const
{
	return (numerator * rightFraction.numerator > denominator * rightFraction.denominator);
}

bool fractionType::operator<=(const fractionType& rightFraction) const
{
	return (numerator * rightFraction.numerator <= denominator * rightFraction.denominator);
}

bool fractionType::operator>=(const fractionType& rightFraction) const
{
	return (numerator * rightFraction.numerator >= denominator * rightFraction.denominator);
}

fractionType fractionType::operator+(const fractionType& rightFraction)
{
	fractionType temp;

	temp.numerator = (numerator * rightFraction.denominator) + (denominator * rightFraction.numerator);
	temp.denominator = denominator * rightFraction.denominator;

	return temp;
}

fractionType fractionType::operator-(const fractionType& rightFraction)
{
	fractionType temp;

	temp.numerator = (numerator * rightFraction.denominator) - (denominator * rightFraction.numerator);
	temp.denominator = denominator * rightFraction.denominator;

	return temp;
}

fractionType fractionType::operator*(const fractionType& rightFraction)
{
	fractionType temp;

	temp.numerator = numerator * rightFraction.numerator;
	temp.denominator = denominator * rightFraction.denominator;

	return temp;
}

fractionType fractionType::operator/(const fractionType& rightFraction)
{
	fractionType temp;

	if ((rightFraction.numerator == 0) || (rightFraction.denominator == 0))
	{
		temp.numerator = 0;
		temp.denominator = 1;
		std::cout << "\n\tInvalid to perform division";
	}
	else
	{
		temp.numerator = numerator * rightFraction.denominator;
		temp.denominator = denominator * rightFraction.numerator;
	}

	return temp;
}

ostream& operator << (ostream& osObject, const fractionType& myFraction)
{
	osObject << myFraction.numerator << "/" << myFraction.denominator;
	return osObject;
}

istream& operator >> (istream& isObject, fractionType& myFraction)
{
	char ch;
	isObject >> myFraction.numerator >> ch >> myFraction.denominator;
	return isObject;
}