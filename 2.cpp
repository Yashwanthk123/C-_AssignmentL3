#include <iostream>

using namespace std;

int main() {
    int r;
    cout << "Enter the radius : ";
    cin >> r;

    float area = 3.14*r*r;
    float circumference = 2*3.14*r;
    if (area > circumference) 
    {
        cout << "Area is greater than circumference." << endl;
    }
    else
    {
       cout << "Circumference is greater than area." << endl;
    }
    return 0;
}