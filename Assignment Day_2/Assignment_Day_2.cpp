//Assignment Day 2

#include<iostream>
#include<string.h>
using namespace std;

int different_values(int a[], int size){
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] != a[i+1])
        {
            counter++;
        }  
    }
    return counter;
}

int main()
{
int arr_old[] = {1, 3, 3, 3, 3, 4, 4, 5, 5, 5};
int size = sizeof(arr_old)/sizeof(arr_old[0]);
cout<<("Old Array size is: ")<<size<<endl;
cout<< ("Old array is :");
    for(int i = 0; i< size; i++)
    {   
    cout<< arr_old[i] <<", ";
    }
int k = different_values(arr_old, size);    
int arr_new[k];
int j = 0;
    for( int i = 0; i< size; i++)
    {
        if(arr_old[i] != arr_old[i+1]){
        arr_new[j] = arr_old[i];
        j++;
        }

    }
cout<<endl;
cout<<("New Array size is: ")<<k<<endl;
cout<< ("New array is :");
    for(int j= 0; j< k; j++)
    {   
    cout<< arr_new[j] <<", ";
    }
    cout<<endl;
cout<<endl;    
}
