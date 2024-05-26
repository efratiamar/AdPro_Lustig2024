#include <iostream>
using namespace std; 
#include "MyString.h"

MyString f()
{
	MyString st("good day");

	return move(st);
}

string crypto(string str)
{
	string newStr;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str.at(i) <= 'z')
		{
			newStr[i] = 'z' - (str[i] - 'a');
		}
		else
			newStr[i] = str[i];
	}
	return newStr;

}

int main()
{

	MyString s1("hi im here!");

	MyString s2(s1);

	string s = crypto("a2b4c6d");//z2y4x6w





}
