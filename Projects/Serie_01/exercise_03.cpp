#include <iostream>
#include <cstdlib>
//https://en.cppreference.com/w/cpp/container/array/front
#include <array>

using namespace std;

//Using reference
int divideR(int dividend, int divisor, int & remainder)
{
    if(divisor == 0)
    {
        cout << "Undefined" << endl;
        exit(0);
    }

    remainder = dividend % divisor;

    return dividend / divisor;
}

//Using pointer
int divideP(int dividend, int divisor, int * remainder)
{
    if(divisor == 0)
    {
        cout << "Undefined" << endl;
        exit(0);
    }

    * remainder = dividend % divisor;   //pointer dereferencing

    return dividend / divisor;
}

//Using array
array<int, 2> divideT(int dividend, int divisor)
{
    if(divisor == 0)
    {
        cout << "Undefined" << endl;
        exit(0);
    }

    array<int, 2> tab;

    tab[0] = dividend / divisor;
    tab[1] = dividend % divisor;

    return tab;
}

//Using another sort of array
int * divideT2(int dividend, int divisor)
{
    if(divisor == 0)
    {
        cout << "Undefined" << endl;
        exit(0);
    }

    int tab[2];

    tab[0] = dividend / divisor;
    tab[1] = dividend % divisor;

    return tab;
}

//Using another alternative
void divideT3(int dividend, int divisor, int * tab)
{
    if(divisor == 0)
    {
        cout << "Undefined" << endl;
        exit(0);
    }

    tab[0] = dividend / divisor;
    tab[1] = dividend % divisor;
}

//Main
int main()
{
    //VARIABLES
    int dividend = 37;
    int divisor = 2;

    //Pass a reference as a parameter
    int remainderA;
    int qA = divideR(dividend, divisor, remainderA);

    cout << "Reference as a parameter : " << endl
         << dividend << " / " << divisor
         << " = " << qA << ", remains : " << remainderA << endl;

    //Pass a pointer as a parameter
    int remainderB;
    int qB = divideP(dividend, divisor, &remainderB); //do not forget to pass the address

    cout << "Pointer as a parameter : " << endl
         << dividend << " / " << divisor
         << " = " << qB << ", remains : " << remainderB << endl;

    //Using Array as return type
    array<int, 2> tab = divideT(dividend, divisor);
    cout << "Array as a return type : " << endl
         << dividend << " / " << divisor
         << " = " << tab[0] << ", remains : " << tab[1] << endl;

    //Using Pointer as return type
    int * tab2 = divideT2(dividend, divisor);
    cout << "Pointer - as a return type" << endl
         << dividend << " / " << divisor
         << " = " << tab2[0] << ", remains : " << tab2[1] << endl;

    //Using a Pointer as a parameter
    int * tab3 = new int[2];
    divideT3(dividend, divisor, tab3);

    cout << "Pointer as a parameter" << endl
         << dividend << " / " << divisor
         << " = " << tab3[0] << ", remains : " << tab3[1] << endl;

    //https://stackoverflow.com/questions/11304174/c-c-delete-vs-delete
    //do not forget to delete the pointer
    delete[] tab2;
    delete[] tab3;

    return 0;
}
