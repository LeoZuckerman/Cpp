#include <iostream>
using namespace std;
#include<string>
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
	//Getters
	 string getAuthor(){return author;}
	 string getTitle(){return title;}
	 string getPublisher(){return publisher;}
	 int getPrice(){return price;}
	 int getNumb(){return numb;}
	//Setters
	//void setAuthor(string a){author = a;}

	
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


string askAuthor()
	{
	string input_author;
	cout<<"Enter Author Name:"<<endl;
	getline(cin, input_author);
	return input_author;
	}

//Fill in vector function
void fillVector(vector<Book>&);
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
Book book_4("Jules Verne","Captain Grants children ","PP", 22, 8);
myBooks.push_back(book_4);
show_Meny();
int option=getInput();

	switch (option) {
		case 1:cout<<"Add New Book"<<endl;	            
            void fillVector(vector<Book> &myBooks);
            {
            string author_name, title_name, publisher_name;
            int price,numb,booksinShop = 2;
            
            for(int i=0; i<booksinShop; i++)
            {
            cout<<"Enter Author Name:";	
            cin>>author_name;

            cout<<endl;

            cout<<"Enter Title Name: ";
            cin>>title_name;

            cout<<endl;

            cout<<"Enter Publisher Name: ";
            cin>>publisher_name;

            cout<<endl;

            cout<<"Enter Price:";
            cin>>price;

            cout<<endl;

            cout<<"Enter Number of Copies:";
            cin>>numb;

            Book newBook(author_name, title_name, publisher_name, price, numb);
            myBooks.push_back(newBook);
            cout<<endl;
            }
	cout<<endl;
    }
		break;
	case 2: cout<<"Buy Book"<<endl;	
              string author_search;
              author_search = askAuthor();
              cout<<author_search<<" "<<"is right now";
    				                                      //Buy Book
          //   void buyBook(vector<Book> &myBooks);
          // {
            
          //   int booksinShop =3;
            
           
          //   for(int i=0; i<booksinShop; i++)
          //   {
          //       if(myBooks[i].getAuthor()==author_search)
          //       {cout<<"Author  :"<<myBooks[i].getAuthor()<<"found"<<endl;}
          //   else
          //   cout<<"Author not found";
          //   }
          // } 
                                             //Enter Title Of Book: Gangs of NY
        //                                                 //Enter Author Of Book: Luthor KingEnter
                                                        //Number Of Books to buy: 6  
                                                        //Books Bought Sucessfully
                                                        //Amount: $. 180
                                                
		
	break;
	// case 3:   cout<<"Enter your Choice: 3";      //Search 
	// 				// For BookEnter Title Of Book: Gangs of NY
	// 				// Enter Author Of Book: Luthor KingBook
	// 				// Found Successfully 
	// 				// Author Name: Luthor King
	// 				// Title Name: Gangs of NY
	// 				// Publisher Name: NY Times
	// 				// Price: 30
	// 				// Number of Copies: 1
		
	// 	break;
  //   case 4: cout<<"Enter your Choice: 4";//Edit Details Of Book 
	// 							// Enter Title Of Book: Gangs of NY
	// 							// Enter Author Of Book: Luthor KingBook Found Successfully
	// 							// Enter Author Name: Richard Alpa
	// 							// Enter Title Name: Gangs of NY
	// 							// Enter Publisher Name: NY Times
	// 							// Enter Price: 90
	// 							// Enter Number of Copies: 6		
	// 	break;
	// case 5: cout<<"Enter your Choice:"; show_Meny();//Exit //Enter your Choice: 5
		
	// 	break;
	}

//--------------------------------------------------------------------------------
return 0;
}