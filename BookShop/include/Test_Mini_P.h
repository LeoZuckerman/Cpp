#include <iostream>
#include<string>
using namespace std;

#ifndef Test_Mini_P_H_
#define Test_Mini_P_H_


class Book
{
private:
	string author, title, publisher;
	int price, numb;
public:
	Book(string a, string t, string pub, int p, int n )
    {
    author = a;
    title =  t;
    publisher = pub;

    price =p; 
	  numb = n;
    }
	
    ~Book(){}

	//Getters
	 string getAuthor(){return author;}
	 string getTitle(){return title;}
	 string getPublisher(){return publisher;}
	 int getPrice(){return price;}
	 int getNumb(){return numb;}
	//Setters
	void setAuthor(string a){author = a;}
  void setTitle(string t) {title = t;}
	void setPublisher(string pub) {publisher = pub;}
  void setPrice(int p) {price = p;}
  void setNumbersofCopy(int n) {numb = n;}
  

};
#endif /* Test_Mini_P*/