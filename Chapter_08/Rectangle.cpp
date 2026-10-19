#include <iostream>

using namespace std;

class Rectangle
{
    private:
        double length;
        double width;
        double area()
        {
            return length * width;
        }

    public:
    void set_dimensions(double l, double w)
    {
        length = l;
        width = w;
    }
    double perimeter()
    {
        return 2 * (length + width);
    }
    void print_area()
    {
        cout << "Area: " << area() << endl;
    }
    void print_perimeter()
    {
        cout << "Perimeter: " << perimeter() << endl << endl;
    }
};

int main()
{
    // Create an instance of the Rectangle class
    Rectangle rectangle1;
    // determining the dimensions of the rectangle
    rectangle1.set_dimensions(5.0, 3.0);
    // Print area and perimeter of the rectangle
       rectangle1.print_area();
       rectangle1.print_perimeter();
       // Create another instance of the Rectangle class
       Rectangle rectangle2;
    // determining the dimensions of the rectangle
    rectangle2.set_dimensions(10.0, 4.0);
    // Print area and perimeter of the rectangle
       rectangle2.print_area();
       rectangle2.print_perimeter();
       // Create another instance of the Rectangle class
       Rectangle rectangle3;
    // determining the dimensions of the rectangle
    rectangle3.set_dimensions(35.5, 36.0);
    // Print area and perimeter of the rectangle
       rectangle3.print_area();
       rectangle3.print_perimeter();
       
    return 0;
}
