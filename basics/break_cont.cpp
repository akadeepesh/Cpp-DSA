#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // std::cout << i << "\t" << endl;
        // if (i == 2)
        // {
        //     break;
        // }
        if (i % 2 == 0)
        {
            continue;
        }

        std::cout << i * i << "\t";
    }
}