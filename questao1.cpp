#include <iostream>

int main(int argc, char *argv[]) 
{
    for(size_t i = 1; i <= 100; ++i) {
        if ((i % 3 == 0) && (i % 5 == 0)) std::cout << "FooBaa\n";
        else if (i % 3 == 0) std::cout << "Foo\n";
        else if (i % 5 == 0) std:: cout << "Baa\n";
        else std::cout << i << std::endl;
    }
    return 0;
}
