#include <stdio.h>
#include <iostream>
// using namespace std;

class abc
{
public:
    void add(int a, int b)
    {
        std::cout << a + b << std::endl;
    }
};

int main()
{
    abc d;
    d.add(5, 7);

    return 0;
}