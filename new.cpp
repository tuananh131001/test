#include <iostream>  

using namespace std;
int main()
{
    float side1 = 0;
    float side2 = 0;
    float area = 0;

    cout << "Enter the length of horizontal side:";
    cin >> side1;
    cout << "Enter the length of vertical side: ";
    cin >> side2;

    if (side1 == 0 || side2 == 0)
    {
        cout << "Error in entering input data: ";
        return 1;
    }
    else 
    {
        area = side1 * side2 /2.0;
        cout << "THe area is " << area << " m^2" << endl;
    }
    return 0;
}