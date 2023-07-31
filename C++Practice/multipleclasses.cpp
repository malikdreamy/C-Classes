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
    void setValues(int, int, string); // you can set multiple values in one method, be sure to put the types
    int getAge(){ return age;} // getter methods return data
    int getWeight(){return weight;}
    string getColor(){return color;}
};

void Dog::setValues(int age, int weight, string color){ // then create a prototype using the :: scope resolution operator
    this -> age = age; // the -> points to what "this" is setting
    this -> weight = weight;
    this -> color = color;
}

main(){

    Dog fido, pooch; // create multiple objects by declaring dog and then the objects seperated by a comma
    fido.setValues(3, 15, "brown"); // this sets the age, weight and color
    pooch.setValues(4, 18, "black");

    cout << "Fido is " << fido.getAge() << " years old" << endl;
    cout << "Fido's friend pooch is " << pooch.getColor() << endl;
    pooch.bark();
    fido.bark();

    return 0;
}