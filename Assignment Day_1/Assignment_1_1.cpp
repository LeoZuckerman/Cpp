// The bubble sort
#include<iostream>
#include<string.h>

int main(){

int N[5];

for(int i=0; i <5; i++){
    std::cout<< ("Tape Number:");
    std::cin>> N[i];
   
    }
for(int i=0; i <5; i++){   
std::cout<<N[i];
 }
std:: cout<<std::endl;
for(int i=0; i<5; i++){
    for(int j=0; j<4; j++){
        if(N[j] > N[j+1]){
            int t=N[j];
          
            N[j]=N[j+1];
            N[j+1]=t;

            }
        } 
    }
for(int i=0; i <5; i++){   
std::cout<<N[i];
    }
}