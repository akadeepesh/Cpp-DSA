#include <iostream>
using namespace std;

void update_ref(int &k)
{
    k++;
}

int main()
{
    int k = 13;
    update_ref(k);
    /*if argument is int like, 1,2,3..10... {error message :-

    ref_var_parameter.cpp:10:18: error: invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'
     update_ref(10);
                  ^
    ref_var_parameter.cpp:4:6: note:   initializing argument 1 of 'void update_ref(int&)'
    void update_ref(int & k){
      ^~~~~~~~~~
    */
    cout << k; // updated out of the scope
}