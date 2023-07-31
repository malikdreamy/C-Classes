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
    Dog(int, int, string); // constructor for creating a dog
    ~Dog(); // destructor for freeing up memory after Dog is created and used
    int getAge(){ return age;} // getter methods return data
    int getWeight(){return weight;}
    string getColor(){return color;}
};

Dog::Dog(int age, int weight, string color){ // creates a prototype method for creating a dog
    this -> age = age;
    this -> weight = weight;
    this -> color = color;
}

Dog::~Dog(){ // creates destructor so the object is freed from memory after use. it is called automatically 
    cout << "Object Destroyed" << endl; 
}

int main(){
Dog fido(3, 15, "brown");
Dog pooch(4, 18, "gray");
cout << "Fido's age and color is " << fido.getAge() << " and " << fido.getColor() << endl;
cout << "Pooches's age and color is " << pooch.getAge() << " and " << pooch.getColor() << endl;

//objects are destroyed after last cout statement freeing up memory 




    return 0;
}