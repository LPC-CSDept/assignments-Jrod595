#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
    int rectangle_area, radious, area, width, length, height;
    float circle_area, triangle_area;
    const double PI = 3.14;
    cout << "enter 1 for the radious circle" << endl;
    cout << "Enter 2 for the width of the rectangle" <<  endl;
    cout << "Enter 3 for the lenght of the triangle" << endl;
    cout << "Enter 4 for the program to quit" <<endl;


    while (1==1)
    {
        cout << "Choose Your option : ";
        cin >> area;
        cout << endl;

        switch (area)
		{
            case 1:
                cout << "enter the radious of a circle\n";
                cin >> radious;
                cout << " enter the area of a circle. \n";
                circle_area= PI * radious * radious;
                cout << "area of the circle is " << circle_area << endl;
            break;

            case 2:
                cout << "enter the width of a rectangle"<< endl;
                cin >> width;
                cout << "enter the length of the rectangle" << endl;
                cin >> length;
                cout << "enter the area of the rectangl"  << endl;
                rectangle_area = width*length;
                cout << "Rectangular Area =" << triangle_area << endl;
            break;

            case 3:
                cout << "enter the length of a triangle" << endl;
                cin >> length;
                cout << "enter the height of a triangle" << endl;
                cin >> height;

                triangle_area = length * height /2;

                cout << "Triangle Area=" << triangle_area << endl;

            break;

            case 4:
                cout << "program quit" << endl;
                return 0;
		}
    }

}
