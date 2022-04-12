//Generate random numbers between 0-33, ten thousand times, then print how many duplicates of each number
//you have generated -- print in ascending order.


#include <iostream>
#include <string>
using namespace std;
#include <ctime>
#include<vector>
#include <bits/stdc++.h>
#include <cstdlib>

int main()
{
srand(time(0));   
int size = 10000;
int counter;
int flag[size] = {0};
int temp =0;
vector<int>MyVector(size);
vector<int>NewVector;

cout<<"Vector Size :"<< "  "<<MyVector.size()<<endl;

for(int i=0; i<MyVector.size(); i++)
    {
    MyVector[i] = rand()%33+1;
    
    }
sort(MyVector.begin(),MyVector.end());
for(int i=0; i<MyVector.size(); i++)

{  
counter = 0;
    if(flag[i] !=1)
    {
        for(int j=0;j<MyVector.size();j++)
                {
                if(MyVector[i]==MyVector[j])
                    {
                   temp = ++counter;
                   flag[j] =1;
                    } 
                                    
                }    
    //if(counter > 1 || counter==1)
    if(counter > 1)   
         {
        cout<<"\n"<<MyVector[i]<<"  occurs "<<"  " <<temp<<"  "<<"times"<<endl;
            //counter = 1;
         }            
    } 
        
                  
}
}

