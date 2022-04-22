#include <stdio.h>
#include <iostream>
#include<string>
using namespace std;

template <typename T, typename U, typename S>
//template <typename T, typename U>

T myMax(T x, U y, S z) 
{
	if((x<y)&&(z=='A'))
	{
	return 100;
	}
	else 
	{
		return 50;

	}
	
}

int main()
{
	cout<<myMax<int,int, char>(1, 5, 'H')<<endl;
	
	
}