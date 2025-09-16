// Angel Mora Gutierrez
// 2025-09-15
// A simple geometric calculator that computes the area and perimeter of circles and rectangles.
#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

const double PI = 3.14159265358979323846;

double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

double calculateCirclePerimeter(double radius) {
    return 2 * PI * radius;
}

double calculateRectangleArea(double width, double height) {
    return width * height;
}

double calculateRectanglePerimeter(double width, double height) {
    return 2 * (width + height);
}

int main() {
    int choice;
    do {
        cout << "Geometric Calculator Menu:\n";
        cout << "1. Circle Area\n";
        cout << "2. Circle Perimeter\n";
        cout << "3. Rectangle Area\n";
        cout << "4. Rectangle Perimeter\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear(); // clear the fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a number between 1 and 5.\n";
            cin >> choice;
        }
        switch (choice) {
            case 1: {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                if (radius < 0) {
                    cout << "Radius cannot be negative.\n";
                } else {
                    cout << "Circle Area: " << calculateCircleArea(radius) << "\n";
                }
                break;
            }
            case 2: {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                if (radius < 0) {
                    cout << "Radius cannot be negative.\n";
                } else {
                    cout << "Circle Perimeter: " << calculateCirclePerimeter(radius) << "\n";
                }
                break;
            }
            case 3: {
                double width, height;
                cout << "Enter the width and height of the rectangle: ";
                cin >> width >> height;
                if (width < 0 || height < 0) {
                    cout << "Width and height cannot be negative.\n";
                } else {
                    cout << "Rectangle Area: " << calculateRectangleArea(width, height) << "\n";
                }
                break;
            }
            case 4: {
                double width, height;
                cout << "Enter the width and height of the rectangle: ";
                cin >> width >> height;
                if (width < 0 || height < 0) {
                    cout << "Width and height cannot be negative.\n";
                } else {
                    cout << "Rectangle Perimeter: " << calculateRectanglePerimeter(width, height) << "\n";
                }
                break;
            }
            case 5:
				cout << "Exiting the program. Goodbye!\n";
				break;
		}
	} while (choice != 5);
	return 0;
}