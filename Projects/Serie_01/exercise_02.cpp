#include <iostream>

using namespace std;

int minimum(int a, int b)
{
    return a < b ? a : b;
}

//if you change the type to float, the issue will be different though
double minimum(double a, double b)
{
    return a < b ? a : b;
}

int main()
{
    cout << "Minimum(7, 3) : " << minimum(7, 3)
         //<< "\nMinimum(7.0, 3) : " << minimum(7.0, 3)
         //<< "\nMinimum(7, 3.0) : " << minimum(7, 3.0)
         << "\nMinimum(7.0, 3.0) : " << minimum(7.0, 3.0)
         << endl;

    //To call Minimum(7.0, 3) : delete int minimum(int a, int b) -> type conflict

    return 0;
}