//Assignment Day 1, part 3
#include<iostream>
#include<string.h>
using namespace std;

void determ_values(unsigned short int a, unsigned short int b, unsigned short int arr[])
{
    int n=5;
    // unsigned short int arr[n];
    if (a < b)
    {
        unsigned short int temp;
        temp = a;
        a = b;
        b = temp;
    }
    
    for(int i= a-1; i>b; --i)
    {
        arr[a-1-i]=i;
    }
}
int main()
{

unsigned short int LowerValue;
unsigned short int UpperValue;
unsigned short int values[5];
int n;

cout<<" Tape number 1:";
cin>>LowerValue;
cout<<" Tape number 2:";
cin>>UpperValue;
cout<<" Tape amount numbers you want to see:";
cin>>n;
determ_values(LowerValue, UpperValue, values);
int size = sizeof(values)/sizeof(unsigned short int);   
for(int i= 0; i<n; i++)
{    
cout<<values[i];
} 
cout<<endl;
cout<<"Array is: "<<size;

}