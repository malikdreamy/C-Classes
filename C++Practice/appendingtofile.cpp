#include <string> // program works have no idea why vs code is throwing error
#include <iostream>
#include <fstream> //include fstream in preprocessor statement
using namespace std;

int main(){

string info = "\n\tThe Ballad of Reading Gaol";
info.append("\n\t\t\tOscar Wilde 1898");
ofstream writer("poem.txt", ios::app); // this will append output at the end of existing content
if(!writer){

cout << "error opening file" << endl;
return -1;

} else {
    writer << info << endl;
    writer.close();
}


    return 0;
}