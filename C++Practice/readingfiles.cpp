#include <string> // program works have no idea why vs code is throwing error
#include <iostream>
#include <fstream> //include fstream in preprocessor statement
using namespace std;

int main(){
char letter; // dont forget to declare char and int before using in loop below
int i;
ifstream reader("poem.txt"); //ifstream is input stream, or the function that reads the file, it will read poem.txt
if(!reader){
    cout << "Error" << endl;
    return -1;
} else{
for(i = 0; !reader.eof(); i++){  // eof is the end of file, so if not at end of file get each character
    reader.get(letter);
    cout << letter;
}

reader.close(); // close the reader
cout << "Iterations " << i << endl;

}


    return 0;
}