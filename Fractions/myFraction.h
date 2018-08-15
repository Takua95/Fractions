#pragma once
#ifndef H_myFraction
#define H_myFraction

#include <iostream>
using namespace std;

class fractionType
{
	friend ostream& operator << (ostream&, const fractionType&);
	friend istream& operator >> (istream&, fractionType&);
public:
	const fractionType& operator = (const fractionType&);

	fractionType();
	fractionType(const fractionType&);
	fractionType(const int&, const int&);

	~fractionType();

	bool operator==(const fractionType&) const;
	bool operator!=(const fractionType&) const;
	bool operator<=(const fractionType&) const;
	bool operator>=(const fractionType&) const;
	bool operator<(const fractionType&) const;
	bool operator>(const fractionType&) const;

	fractionType operator+(const fractionType&);
	fractionType operator-(const fractionType&);
	fractionType operator*(const fractionType&);
	fractionType operator/(const fractionType&);

//private:
	int numerator;
	int denominator;
};
#endif