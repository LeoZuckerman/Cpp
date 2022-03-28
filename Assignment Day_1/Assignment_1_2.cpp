// The selection sort
#include<iostream>
#include<string.h>
using namespace std;

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
};

void Select_Sort(int arr[], int n) 
{
int min;
for(int i=0; i < n-1; i++)
    {
    min =i;
    for(int j=i+1; j < n; j++) 
        {   
        if (arr[j-1] < arr[j]) 
            {
            min=j;

           // swap(&arr[min], &arr[i]);
             swap(&arr[j-1], &arr[j]);
            }
        }
    }
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}
int main()
{
int Numb[]={64, 0, 12, 22, 11}; 
int n = sizeof(Numb)/sizeof(Numb[0]);

Select_Sort(Numb, n);
cout << "Sorted array: \n"; 
printArray(Numb, n); 
}

