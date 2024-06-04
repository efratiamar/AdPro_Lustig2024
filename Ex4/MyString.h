#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyString
{
	char* str;

	void setString(const char* s);

public:
	MyString(const char* _str);

	MyString(const MyString& ms2);

	MyString(MyString&& ms2);

	~MyString();

	//s1 = s2 = s3;
	MyString& operator=(const MyString& ms2);

	//s1 = f();
	MyString& operator=(MyString&& ms); // move assignment operator

	//s1 == s2
	bool operator==(const MyString& ms2) const;

	//s1 != s2
	bool operator!=(const MyString& ms2) const;

	//s1 < s2
	bool operator<(const MyString& ms2) const;

	bool operator>(const MyString& ms2) const;

	//s1 <= s2
	bool operator<=(const MyString& ms2) const;
	
	//s1 >= s2
	bool operator>=(const MyString& ms2) const;

	//s1 = s2 +s3;
	MyString operator+(const MyString& ms2) const;

	//s3 = s2 * 3;
	MyString operator*(const int m) const;

	int length() const;
	void print() const;
	char* getString() const;

};
