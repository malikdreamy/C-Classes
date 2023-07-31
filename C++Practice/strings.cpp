#include <iostream>
#include <string> // must include string in preprosessor statement to use it
using namespace std;


int main(){
    string text = "9"; // must use double quotes, single quotes only used for char type
    string term = ("9"); // also a way to create a string
    string info = "Toys";
    string name;
    char hue[4] = {'R', 'e', 'd', '\0' }; // how to declare strings in C with array, will spell out red
 
    cout << hue << endl;
    cout << "Enter Your name" << endl;
    getline(cin, name); // must use getline function with cin as first variable to use cin for strings, name is variable its taking in
    cout << name;
    return 0;
}