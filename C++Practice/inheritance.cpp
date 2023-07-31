#include <iostream>
#include <string>
using namespace std;

class Polygon{
protected: //protected members are accessible to members of the same class and members of the inherited class
int width, height;
public:
void setValues(int w, int h){width = w; height = h;}
~Polygon();
};

Polygon::~Polygon(){
    cout << "Polygon Destroyed" << endl;
}

class Rectangle : public Polygon{ // creates a new class from the public methods of the Polygon
    public: // when Rectangle is created it automatically has all of the public methods that the Polygon class had
    int area(){return(width * height);}
};

class Triangle : public Polygon{
    public:
    int area(){return ((width * height) / 2);}
};

int main(){
    Rectangle rect; Triangle trgl; //creates new instances of both a rectangle and triangle
    rect.setValues(4, 5);
    trgl.setValues(4,5);
    cout << "Rectangle area: " << rect.area() << endl;
    cout << "Triangle area: " << trgl.area() << endl;
    return 0;
}