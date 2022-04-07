
//Using template to compare two shapes

#include <iostream>
using namespace std;
class Shape
{
 protected:
    float width, base, height;    
 public:
  virtual float area()=0;
  virtual float perimeter()=0;
    //bool operator == (Shape &s) {
    //return (this->area()==s.area()) && (this->perimeter() == s.perimeter());}

    template <class T1, class T2>
    
    void Comp_Shapes(T1 a1, T2 a2 )
{
    if (this->area()<a2)
    {
        cout<<"Area 1 is bigger than Area 2"<<endl;
    }  
    else if (this->area()>a2)
    {
     cout<<"Area 2 is bigger than Area 1"<<endl;   
    }
   else //(this->area() == a2)
    {
        cout<<"Area 1 is equal to Area 2"<<endl;
    }
   
    
}    
    
  
    void set_values (int a, int b, int c) { width=a; height=b; base=c;}
    int Width() {return this->width;}
    int Height() {return this->height;}
    int Base() {return this->base;}
public:
    //void print() { cout<<"Area is: " << this->area()<<"  " <<"Perimeter is: "<<this->perimeter() << endl;}
  
};

class Rectangle: public Shape
{
    public:
float area() { return Width() * Height(); } 
float perimeter() {return (Width() + Height())*2;}

Rectangle(int a, int b) { width=a; height=b;}
};

class Square: public Shape
{
    public:
float area() { return Width() * Width(); } 
float perimeter() {return Width()*4;}

Square(int a) { width=a;}
};



int main()
{

Rectangle rec(4,4);
float a1=rec.area();
Square sq(4);
float a2= sq.area();

//cout<< "The comparision result is: "<<rec.Comp_Shapes<float>(a1, a2)<<" Thank you"<< endl;
rec.Comp_Shapes(a1, a2);
cout<<endl;
cout<<endl;

}
