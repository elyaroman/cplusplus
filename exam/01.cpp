#include <iostream>

using namespace std;

int main()
{
    // квадрат
    double side_square = 5;
    double square_square = side_square * side_square;

    cout << "The area of the square equals " << square_square << endl;

    // прямоугольник
    double side_length = 3;
    double side_width = 5;

    double rectangle_square = side_length * side_width;

    cout << "The area of the rectangle equals " << rectangle_square << endl;

    // прямоугольный треугольник
  
    double leg_one = 3;
    double leg_two = 5;

    double regular_triangle_square = (leg_one * leg_two) / 2;

    cout << "The area of the regular triangle equals " << regular_triangle_square << endl;

    // круг

    double radius = 6;
    const double PI = 3.141592653589793;

    double circle_square = PI * radius * radius;

    cout << "The area of the circle equals " << circle_square << endl;
}

