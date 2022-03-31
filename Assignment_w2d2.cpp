//Car Service Shop
#include <iostream>
using namespace std;

class Serviceshop
{

int service, pay,rep;
public:

void set_shop()
{
   
    
    cout<<"Service, Pay Method and Reporation is choosen"<< endl;

}
void service_ongoing(){cout<<"SERVICE ONGOING "<<endl;}
void display_shop(int s, int p, int r)
{
    if(s==1)
    {service = s;
    cout<< "Service: "<<service<<". "<<"The big service is done"<<endl;
    }
    if(s==2)
    {service=s;
    cout<< "Service: "<<service<<". "<<"The original service is done"<<endl;
    }
   
    if(p==1)
    {pay = p;
    cout<< "Pay Method: "<<pay<<". "<<"Card"<<endl;
    }
    if(p==2)
    {pay=p;
    cout<< "Pay Method: "<<pay<<". "<<"Cash"<<endl;
    }
    rep =r;
    if(r==1)
    {rep = r;
    cout<< "Reporation: "<<rep<<". "<<"is done"<<endl;
    }
    if(r==2)
    {rep=r;
    cout<< "No reporation is needed"<<endl;
    }
   
}

};
int main()
{
Serviceshop car1;

int s, p, r;
s=0;
cout<<"Please choose your service, press 1 for the Big Service or press 2 for the Original service: "<< endl;
std::cin>>s;

cout<<"Please choose your pay method, press 1 for the card payment or press 2 for the cash: "<< endl;
cin>> p;
cout<<"Please press 1 if you need any reporation or press 2 if dont need any reporation: "<< endl;
cin>> r;

car1.set_shop();
cout<<endl;
car1.service_ongoing();
cout<<endl;
car1.display_shop(s,p,r);

}







