#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int g= s[k - 1];

    int p= 0;

    for (int i = 0; i < n; i++) {
        if (s[i] >= g  && s[i]>0) {
            p++;
        }
    }
    cout << p << endl;

    return 0;
}
