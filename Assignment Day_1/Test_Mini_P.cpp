#include <iostream>
#include<string>
using namespace std;
#include<vector>
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

void show_Meny(){
	cout<<"MENY"<<endl;
	cout << "1. Entry of New Book"<<endl;
	cout << "2. Buy Book"<<endl;
	cout << "3. Search For Book"<<endl;
	cout << "4. Edit Details of Book"<<endl;
	cout << "5. Exit"<<endl;
}
int getInput(){
	cout<<"Enter your Choice:"<<endl;
    int input;
	cin>> input;
	return input;
	}

//Fill in vector function
void fillVector(vector<Book>&);
//  void printVector(vector<Book> &myBooks);
// {
// 	for(int i =0; i<myBooks.size(); i++)
// 	{
// 		cout<<myBooks[i].getAuthor()<<endl;
// 		cout<<myBooks[i].getTitle()<<endl;
// 		cout<<myBooks[i].getPublisher()<<endl;
// 		cout<<myBooks[i].getPrice()<<endl;
// 		cout<<myBooks[i].getNumb()<<endl;
// 		cout<<endl;
// 	}
// }
//-------------------------------------------------------------------------
int main()
{

vector<Book>myBooks;
Book book_1("new author","new title","new publisher", 10, 4);
myBooks.push_back(book_1);
Book book_2("Larry King","Gangs of NY","NYT", 12, 7);
myBooks.push_back(book_2);
Book book_3("Jules Verne","Captain Nemo","TT", 15, 6);
myBooks.push_back(book_3);
Book book_4("Jules Verne","Captain Grants children","PP", 22, 8);
myBooks.push_back(book_4);
show_Meny();
int option=getInput();


int booksinShop, price;
string title;
int numofbooks, add_book;
string author;
string publisher_name;

	switch (option) {
		case 1:cout<<"ADD NEW BOOK"<<endl;
            cout<<"How many books du you want to add?"<<endl;
            cin.ignore();
            cin>>add_book;	            
            void fillVector(vector<Book> &myBooks);
            {
                        
            for(int i=0; i<add_book; i++)
            {
            cout<<"Enter Author Name:";	
            cin.ignore();
            getline(cin,author);
            
            cout<<endl;

            cout<<"Enter Title Name: ";
            cin.ignore(0);
            getline(cin,title);
            
            cout<<endl;

            cout<<"Enter Publisher Name: ";
            cin.ignore(0);
            getline(cin,publisher_name);
           
            cout<<endl;

            cout<<"Enter Price:";
            cin>>price;

            cout<<endl;

            cout<<"Enter Number of Copies:";
            cin>>numofbooks;

            Book newBook(author, title, publisher_name, price, numofbooks);
            myBooks.push_back(newBook);
            cout<<endl;
            
            }
	cout<<endl;
    }
		  break;
	  case 2: 
    {cout<<"BUY BOOK"<<endl;
            cout<<"Enter Title Name: ";	
            booksinShop = myBooks.size();
            
            cin.ignore();
            getline(cin,title);
            
             for(int i=0; i<booksinShop; i++)
            {
                if(myBooks[i].getTitle() == title)
                {cout<<"Title  :" <<myBooks[i].getTitle() <<" is found"<<endl;
                cout<<"We have :"<<"  "<<myBooks[i].getNumb()<<" books "<<"in our shop"<<endl;
                cout<<"Enter how many books do you like to buy?"<<endl;
                cin>>numofbooks;
                cout<<"Your price is:"<<"  "<<(myBooks[i].getPrice()*numofbooks)<<"$"<<endl;
                  break;}
              else if ((myBooks[i].getTitle() != title)&&(i==booksinShop-1))
              {
              {cout<<"Title is not found"<<endl;}
              }     
            }
            
            break;
    }
	  case 3:   cout<<"SEARCH A BOOK"<<endl;

            cout<<"Enter Author Name: ";	
            booksinShop = myBooks.size();
            
            cin.ignore();
            getline(cin,author);
            
             for(int i=0; i<booksinShop; i++)
            {
                if(myBooks[i].getAuthor() == author)
                {cout<<"Book by " <<myBooks[i].getAuthor()<<" : "<<myBooks[i].getTitle() <<" is found"<<endl;
                               
                cout<<"Publisher Name is:"<<"  "<<myBooks[i].getPublisher()<<endl;
                cout<<"Price is:"<<"  "<<myBooks[i].getPrice()<<"$ "<<endl;
                cout<<"Number of Copies:"<<"  "<<myBooks[i].getNumb()<<endl;
                  break;}
              else if ((myBooks[i].getTitle() != title)&&(i==booksinShop-1))
              {
              {cout<<"Title is not found"<<endl;}
              }     
            }
            break;

    case 4: cout<<"EDIT DETAILS OF BOOK"<<endl; 

            cout<<"Enter Book Title You Want to Change: ";	
            booksinShop = myBooks.size();
            
            cin.ignore();
            getline(cin,title);
            
             for(int i=0; i<booksinShop; i++)
            {
              string new_title;
              string new_author;
              string new_publish;
              int new_price;
              int new_numb_of_copies;

                if(myBooks[i].getTitle() == title)
                {cout<<"Book  :" <<myBooks[i].getTitle() <<" Found Successfully"<<endl;

                cout<<"Enter New Title :"<<endl;
                cin.ignore(0);
                getline(cin,new_title);
                myBooks[i].setTitle(new_title);

                cout<<"Enter New Author Name :"<<endl;
                cin.ignore(0);
                getline(cin,new_author);
                myBooks[i].setAuthor(new_author);

                cout<<"Enter New Publisher Name :"<<endl;
                cin.ignore(0);
                getline(cin,new_publish);
                myBooks[i].setPublisher(new_publish);


                cout<<"Enter New Price :"<<endl;
                cin>>new_price;
                myBooks[i].setPrice(new_price);

                cout<<"Enter New Numbers Of Copies :"<<endl;
                cin>>new_numb_of_copies;
                
                myBooks[i].setNumbersofCopy(new_numb_of_copies);

              cout<<"Editing process....."<<endl;

                cout<<"New Title is:"<<"  "<<myBooks[i].getTitle()<<endl;
                cout<<"New Author is:"<<"  "<<myBooks[i].getAuthor()<<endl;
                cout<<"New Publisher is:"<<"  "<<myBooks[i].getPublisher()<<endl;
                cout<<"New Price is:"<<"  "<<myBooks[i].getPrice()<<endl;
                cout<<"New Numbers Of Copies :"<<"  "<<myBooks[i].getNumb()<<endl;
                
                
                  break;}
              else if ((myBooks[i].getTitle() != title)&&(i==booksinShop-1))
              {
              {cout<<"Title is not found"<<endl;}
              }     
            }
            break;
         	
      case 5: cout<<"THANK YOU!"<<endl;
              //cout<<"Size before clear:"<<" "<<myBooks.size()<<endl;
              myBooks.clear();
              //cout<<"Size after clear:"<<" "<<myBooks.size()<<endl;

	    break;
	}
 

//--------------------------------------------------------------------------------
return 0;
}