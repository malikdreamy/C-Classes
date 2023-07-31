#include <iostream>
#include <string>
using namespace std;

class Dog{
    private:
    int age;
    int weight;
    string color;
    public:
    void bark() {cout << "WOOF!" << endl;}
    void setValues(int, int, string);
    int getAge(){ return age;} // getter methods return data
    int getWeight(){return weight;}
    string getColor(){return color;}
};

void Dog::setValues(int age, int weight, string color){ // creates a method on the dog class using the :: resolution operator
    this -> age = age; // sets age of the this object
    this -> weight = weight;
    this -> color = color;
}

int main(){
Dog fido; //creates new dog named fido
fido.setValues(3, 15, "brown"); // can set the age, weight and color in one line using the prototype method setValues
Dog pooch; //creates new dog named pooch
pooch.setValues(4, 18, "gray");
cout << "Pooch is a " << pooch.getAge();
cout << " year old " << pooch.getColor();
cout << " dog who weighs " << pooch.getWeight() << " pounds" << endl;
pooch.bark();



    return 0;
}