#include <string> // program works have no idea why vs code is throwing error
#include <iostream>
#include <fstream> //include fstream in preprocessor statement
using namespace std;


int main(){
string poem = "\n\tI Never saw a man who looked"; // \n\t is newline and tab
poem.append("\n\tWith such a wistful eye");
poem.append("\n\tUpon that little tent of blue");
poem.append("\n\tWhich prisoners call the sky");

ofstream writer("poem.txt"); // name ofstream object writer with poem.txt as file name
if (!writer){
    cout << "Error" << endl;
    return -1;
} else {
    writer << poem << endl; // writer then writes to the poem
    writer.close(); // be sure to close writer after using
}


    return 0;
}