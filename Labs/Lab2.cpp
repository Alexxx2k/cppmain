#include <iostream>

int main()
{
    try
    {
       int a; int b; int c;
       if (!(std::cin >> a >> b >> c)) {
           throw std::invalid_argument("Wrong input");
       }
       if (a == b && a == c)
           std::cout << 3 << "\n";
       else if (a == b || a == c || b == c)
           std::cout << 2 << "\n";
       else
           std::cout << 0 << "\n";
    }
    catch (std::exception const & error)
    {
        std::cout << error.what() << "\n";
        return 1;


    }
    return 0;
}