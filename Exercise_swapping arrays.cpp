#include<iostream>
int main(){
int arr1[5] ={1,2,3,4,5};
int arr2[3]={6,7,8};
int* temp1;
temp1= &arr1[0];

for (int i = 0; i < 3; i++){

    arr1[i] = *temp1[i];
}

for (int i = 0; i < 5; i++)
{
    arr1[i] = arr2[i];
    std::cout<<arr1[i];
   
}
for (int i = 0; i < 3; i++){

    arr2[i] = *temp1[i];
    std::cout<<arr2[i];
}


}