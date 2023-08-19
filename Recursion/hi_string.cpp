// Take as input str, a string. a.Write a recursive function which counts the number of times ‘hi’ appears in the string. Print the value returned. b.Write a recursive function which removes all ‘hi’ in the string. Print the value returned. c.Write a recursive function which replaces all ‘hi’ in the string with ‘bye’. Print the value returned.
#include <iostream>
using namespace std;

int countHi(string str, int idx)
{
    if (idx >= str.length() - 1)
        return 0;

    if (str.substr(idx, 2) == "hi")
        return 1 + countHi(str, idx + 2);
    else
        return countHi(str, idx + 1);
}

string removeHi(string str, int idx)
{
    if (idx >= str.length() - 1)
        return str.substr(idx);

    if (str.substr(idx, 2) == "hi")
        return removeHi(str.substr(0, idx) + str.substr(idx + 2), idx);
    else
        return removeHi(str, idx + 1);
}

string replaceHi(string str, int idx)
{
    if (idx >= str.length() - 1)
        return str.substr(idx);

    if (str.substr(idx, 2) == "hi")
        return "bye" + replaceHi(str.substr(idx + 2), 0); // Reset idx to 0 after replacement
    else
        return str.substr(idx, 1) + replaceHi(str, idx + 1);
}

int main()
{
    string input;
    cin >> input;

    int hiCount = countHi(input, 0);
    string withoutHi = removeHi(input, 0);
    string replacedHi = replaceHi(input, 0);

    cout << hiCount << endl;
    cout << withoutHi << endl;
    cout << replacedHi << endl;

    return 0;
}
