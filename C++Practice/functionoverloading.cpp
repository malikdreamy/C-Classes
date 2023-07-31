# include <iostream>
using namespace std;

float computeArea(float);
float computeArea(float, float);
float computeArea(char, float, float);
// you can give functions the same name as long as the number of params
//are different, or data types are different

int main(){
    float num, area;
    cout << "Enter dimension in feet: ";
    cin >> num;
    area = computeArea(num);
    cout << "Circle Area: " << area << "sq.ft" << endl;
    area = computeArea(num, num);
    cout << "Square Area: " << area << "sq.ft" << endl;
    area = computeArea('T', num, num);
    cout << "Triangle Area: " << area << "sq.ft" << endl;

    return 0;
}

float computeArea(float diameter){
float radius = (diameter / 2);
return(3.141593 * (radius * radius));
}

float computeArea(float width, float height){
    return (height * width);
}
float computeArea(char, float width, float height){
    return ((width / 2) * height);
}
