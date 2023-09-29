//Read five numbers and print their average
#include <iostream>
using namespace std;

int main(){
    int sum = 0, num;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number ";
        cin >> num;
        sum = num + sum;
    }
    cout << sum/5;
}