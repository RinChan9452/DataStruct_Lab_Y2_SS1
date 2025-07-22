#include <iostream>
using namespace std;

void getInput(int &wide, int &length){
    cout << "Enter wide: ";
    scanf("%d", &wide);

    cout << "Enter length: ";
    scanf("%d", &length);
}

int findArea(int wide, int length){
    return wide * length;
}

void outArea(){
    int wide, length;

    getInput(wide, length);
    int area = findArea(wide, length);

    cout << "Area of this is: " << area << endl;
}

int main(){
    outArea();

    return 0;
}