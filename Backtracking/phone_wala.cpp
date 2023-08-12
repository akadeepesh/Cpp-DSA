#include <iostream>
using namespace std;

string keys[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void PrintWords(char *in, char *out, int i, int j)
{
    // base case
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << endl;
    }

    // recursive case
    int idx = in[i] - '\0';
    for (int k = 0; keys[idx][k] != '\0'; k++)
    {
        out[j] = keys[idx][k];
        PrintWords(in, out, i + 1, j + 1);
    }
}

int main()
{
    char in[10] = "12";
    char out[100];
    PrintWords(in, out, 0, 0);
    return 0;
}