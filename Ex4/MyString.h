#pragma once
#define _CRT_SECURE_NO_WARNINGS

class MyString
{
	char* str;

	void setString(const char* s)
	{
		if (s)
		{
			int len = strlen(s) + 1;
			str = new char[len];
			strcpy(str, s);
		}
		else
			str = nullptr;
	}


public:
	MyString(const char* _str)
	{
		setString(_str);
	}

	//MyString(const MyString& ms2)
	//{
	//	setString(ms2.str);
	//}

	MyString(const MyString& ms2) 
		: MyString(ms2.str)
	{
	}
	MyString(MyString&& ms2)
	{
		str = ms2.str;
		ms2.str = nullptr;
	}

	~MyString()
	{
		if (str)
			delete[] str;
		str = nullptr;
	}

	//s1 = s2 = s3;
	MyString& operator=(const MyString& ms2)
	{
		if (str)
			delete str;

		setString(ms2.str);

		return *this;
	}

	//s1 = f();
	MyString& operator=(MyString&& ms)// move assignment operator
	{ 
		if (str)
			delete[] str;

		str = ms.str; // steal (dont copy) rvalue's data
		ms.str = nullptr; //very important!!!

		return *this;
	}



	//s1 == s2
	bool operator==(const MyString& ms2) const
	{
		return (strcmp(str, ms2.str) == 0);
	}
	//s1 != s2
	bool operator!=(const MyString& ms2) const
	{
		return !(*this == ms2);
	}
	//s1 < s2
	bool operator<(const MyString& ms2) const
	{
		return true;
	}
	bool operator>(const MyString& ms2) const
	{
		return true;
	}

	//s1 <= s2
	bool operator<=(const MyString& ms2) const
	{
		return (*this < ms2 || *this == ms2);
	}

	//s1 >= s2
	bool operator>=(const MyString& ms2) const
	{
		return (*this > ms2 || *this == ms2);
	}

	//s1 = s2 +s3;
	MyString operator+(const MyString& ms2) const
	{
		char* tmp = new char[strlen(str) + strlen(ms2.str) + 1];
		strcpy(tmp, str);
		strcat(tmp, ms2.str);

		MyString ms3(tmp);

		return ms3;
	}
	//s3 = s2 * 3;
	MyString operator*(const int m) const
	{
		MyString ms(str);
		for (int i = 0; i < m-1; i++)
		{
			ms = ms + *this;
		}
		return ms;
	}



	int length() const
	{
		return strlen(str);
	}
	void print() const
	{
		if (str) cout << str << endl;

	}
	char* getString() const
	{
		return str;
	}






};
