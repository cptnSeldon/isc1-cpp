#include <iostream>
//https://www.cplusplus.com/reference/iomanip/setprecision/
#include <iomanip>

int main()
{

    bool isNumber = true;
    //https://en.cppreference.com/w/cpp/io/manip/boolalpha
    std::cout << std::boolalpha << isNumber << " " << !isNumber << std::endl;
    std::cout << std::noboolalpha << isNumber << " " << !isNumber << std::endl;

    int x=15;
    std::cout <<
        "hexadecimal " << std::hex << x << " " <<
        "decimal " << std::dec << x << " " <<
        "octal " << std::oct << x <<
    std::endl;

    std::cout << std::dec << x << " " << x << " " << x << std::endl;
    double dbl = -5345.123456789;
    std::cout << std::fixed << std::setprecision(2) << dbl << std::endl;
    std::cout << std::fixed  << std::setprecision(8) << dbl << std::endl;
    //https://www.cplusplus.com/reference/ios/scientific/
    std::cout << std::scientific << std::setprecision(4) << dbl << std::endl;
    std::cout << std::fixed << std::setprecision(2) << dbl << std::endl;

    return 0;
}