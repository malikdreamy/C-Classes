#include <iostream>
#include <string>
using namespace std;

class Dog{
    private:
    int age;
    int weight;
    string color;
    public:
    void bark( string noise ) {cout << noise << endl;}
    Dog();
    Dog(int, int); // constructor for creating a dog also overloading a method
    ~Dog(); // destructor for freeing up memory after Dog is created and used
    int getAge(){ return age;} // getter methods return data
    int getWeight(){return weight;}
    string getColor(){return color;}
};

Dog::Dog(){
    age = 1; // adding default values to the object
    weight = 2;
    color = "black";
};

Dog::Dog(int age, int weight){ // adding a function prototype for the overloaded method
    this -> age = age;
    this -> weight = weight;
    color = "white";
}

Dog::~Dog(){
    cout << "Dog destroyed >:)" << endl;
}

int main(){

Dog rex; // creates new dog, since it has default values no need to use ()
cout << "Rex is " << rex.getAge() << " years old " << " and is " << rex.getColor() << endl;
rex.bark("GRRRR"); // sets the bark dynamically
Dog sammy( 2, 6);
cout << "Sammy is " << sammy.getAge() << " years old " << " and is " << sammy.getColor() << endl;
sammy.bark("Bow Wow!");






    return 0;
}