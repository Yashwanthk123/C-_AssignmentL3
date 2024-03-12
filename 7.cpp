#include<iostream>

using namespace std;

int main() {
    float x, y;
    printf("Enter the x y coordinates : ");
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "The point is on origin.";
    if (x == 0 && y != 0)
        cout << "The point lie on y-axis.";
    if (x != 0 && y == 0)
        cout << "The points lie on x-axis.";
    if (x != 0 && y != 0)
        cout << "The points lie on plane.";
    return 0;
}