#include <iostream>

using namespace std;

class Rectangle {

private:
    double width;
    double length;


public:
    void setwidth(double w){
        width=w;
    }

    void setlength(double l){
        length=l;
    }

    double getwidth() const     {
        return width;
    }

    double getlength() const {
        return length;
    }

    double calculatearea() const {
        return width*length;
    }

    double calculateperimeter() const {
        return 2*(width+length);
    }
};
int main() {
    
    Rectangle rectangle1;
    rectangle1.setwidth(3.2);
    rectangle1.setlength(6.9);
    cout << "Rectangle 1: " << endl;
    cout << "Width: " << rectangle1.getwidth() << endl;
    cout << "Length: " << rectangle1.getlength() << endl;
    cout << "Area: " << rectangle1.calculatearea() << endl;
    cout << "Perimeter: " << rectangle1.calculateperimeter() << endl;

    Rectangle rectangle2;
    rectangle2.setwidth(3);
    rectangle2.setlength(7 );
    cout << "\nRectangle 2: " << endl;
    cout << "Width: " << rectangle2.getwidth() << endl;
    cout << "Length: " << rectangle2.getlength() << endl;
    cout << "Area: " << rectangle2.calculatearea() << endl;
    cout << "Perimeter: " << rectangle2.calculateperimeter() << endl;

    return 0;
}