#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "Menu:\n";
        cout << "1. Calculate the area of a circle \n";
        cout << "2. Calculate the area of a rectangle \n";
        cout << "3. Calculate the area of a triangle \n";
        cout << "4. Quit \n";
        cout << "Enter your choice: (1-4) ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double radius, area;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                area = 3.142 * radius * radius;
                cout << "Area of the circle: " << area << endl;
                break;
            }
            case 2: {
                double length, width, area;
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                area = length * width;
                cout << "Area of the rectangle: " << area << endl;
                break;
            }
            case 3: {
                double base, height, area;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                area = 0.5 * base * height;
                cout << "Area of the triangle: " << area << endl;
                break;
            
            }
            case 4: {
                cout << "Goodbye!\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please enter a valid option (1-4).\n";
                break;
            }
        }
    } while (choice != 4);

    return 0;

}
