#include <iostream>
using namespace std;

void subsequence(char *in, char *out, int i, int j)
{
    // base code
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << " ";
        return;
    }

    // recursive code
    subsequence(in, out, i + 1, j);
    out[j] = in[i];
    subsequence(in, out, i + 1, j + 1);
}

int main()
{
    char in[] = "abcd";
    char out[100];
    subsequence(in, out, 0, 0);
}