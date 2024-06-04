#include <iostream>
using namespace std;

int sum(int n)
{
	//1+2+3+4 .. (n-2) + (n-1) + n
	if (n == 0)
		return 0;
	return sum(n - 1) + n;
}

int main()
{

}