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
    void setAge(int yrs){age = yrs;} // setter methods, be sure to always declare type in parameter arguments
    void setWeight(int lbs){weight = lbs;}
    void setColor(string hue){color = hue;}
    int getAge(){ return age;} // getter methods return data
    int getWeight(){return weight;}
    string getColor(){return color;}
};

main(){
Dog fido; // creates new dog named fido
fido.setAge(3);
fido.setWeight(15);
fido.setColor("brown");
cout << "Fido is a " << fido.getColor() << " colored dog " << endl;
cout << "Fido is " << fido.getAge() << "years old" << endl;
cout << "Fido weighs " << fido.getWeight() << endl;
fido.bark();
return 0;

}