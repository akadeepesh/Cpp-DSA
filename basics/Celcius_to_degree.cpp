#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    float res = 5.0/9.0, res1;
    std::cout << "Enter Start-Stop-Step Value Respectively :";
    cin >> a >> b >> c;

    while(a<=b)
    {
        res1 = res * ( a - 32);
        std::cout<<a<<"\t"<<"|";
        std::cout<<"\t"<<res1<<endl;
        a = a+c;
    }
}