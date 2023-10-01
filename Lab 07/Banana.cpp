#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;


    int totalCost = (w * (w + 1) / 2) * k;


    int total = max(0, totalCost - n);

    cout << Total << endl;

    return 0;
}
