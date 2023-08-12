#include <iostream>
using namespace std;

void permutations(char *in, int i)
{
    if (in[i] == '\0')
    {
        cout << in << "\t";
        return;
    }

    for (int j = i; in[j] != '\0'; j++)
    {
        swap(in[i], in[j]);
        permutations(in, i + 1);
        swap(in[i], in[j]);
    }
}

int main()
{
    char in[] = "abcd";
    permutations(in, 0);
}