//Compare shapes area and perimeter
#include <iostream>
using namespace std;
class Shape
{
 protected:
    float width, base, height;    
 public:
  virtual float area()=0;
  virtual float perimeter()=0;
  bool operator == (Shape &s) {
    return (this->area()==s.area()) && (this->perimeter() == s.perimeter());}
  
    void set_values (int a, int b, int c) { width=a; height=b; base=c;}
    int Width() {return this->width;}
    int Height() {return this->height;}
    int Base() {return this->base;}
public:
    void print() { cout<<"Area is: " << this->area()<<"  " <<"Perimeter is: "<<this->perimeter() << endl;}
  
};
class Triangle: public Shape
{
float area() { return Width() * Height()/2; } 
float perimeter() {return Width() + Height() + Base();}
public:
Triangle(int a, int b, int c) { width=a; height=b; base=c;}
};
class Rectangle: public Shape
{
float area() { return Width() * Height(); } 
float perimeter() {return (Width() + Height())*2;}
public:
Rectangle(int a, int b) { width=a; height=b;}
};
class Square: public Shape
{
float area() { return Width() * Width(); } 
float perimeter() {return Width()*4;}
public:
Square(int a) { width=a;}
};
class Circle: public Shape
{
float area() { return Width() * Width()*3.14;} 
float perimeter() {return Width()*2*3.14;}
public:
Circle(float a) { width=a;}
};

int main()
{
Triangle tr1(3,4,6);
tr1.print();
Triangle tr2(4,3,6);
tr2.print();
Rectangle rec(3,4);
rec.print();
Square sq(4);
sq.print();
Circle cr(4);
cr.print();
cout<<endl;
cout<<"Rectangle compare triangle1 "<<(rec==tr1);
cout<<endl;
cout<<"Triangle1 compare triangle2 "<<(tr1==tr2);

}