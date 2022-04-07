//Implement a function that can read the information shown in the figure

#include <iostream>
#include <string>
#include<bitset>
using namespace std;

uint16_t get_bitset(uint16_t numb, uint16_t m, int shift_bits=1 )
{
  uint16_t new_numb = (numb & m)>>shift_bits;
    return  new_numb;
}
int main()
{
uint16_t numb = 0b1011101001011011;
//for Seat//
uint16_t mask_seat = 0b1111100000000000;
int shift_bits_seat = 11;
uint16_t seat_belt = get_bitset(numb, mask_seat,shift_bits_seat);
cout<<bitset<5>(seat_belt)<<"     "<<seat_belt<<endl;
//for Window//
uint16_t mask_window = 0b0000011110000000;
int shift_bits_window = 7;
uint16_t window = get_bitset(numb, mask_window, shift_bits_window);
cout<<bitset<4>(window)<<"      "<<window<<endl;
//for Door//
uint16_t mask_door = 0b0000000001111000;
int shift_bits_door = 3;
uint16_t door = get_bitset(numb, mask_door, shift_bits_door);
cout<<bitset<4>(door)<<"      "<<door<<endl;
//for Lights//
uint16_t mask_light = 0b0000000000000111;
int shift_bits_light = 0;
uint16_t light = get_bitset(numb, mask_light, shift_bits_light);
cout<<bitset<3>(light)<<"       "<<light<<endl;



}