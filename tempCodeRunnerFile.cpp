#include <iostream>
using namespace std;

void lexicographicalOrder(int n, int i) {
    if (i > n) {
        return;
    }
    cout << i << ' ';
    for (int j = 0; j <= 9; j++) {
        lexicographicalOrder(n, i * 10 + j);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= 9; i++) {
        lexicographicalOrder(n, i);
    }
	return 0;
}
