#include <bits/stdc++.h>
using namespace std;

void factors(int n) {
    vector<int> v;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            v.push_back(i);
            if ((n / i) != i) { // Avoid duplicate for square roots
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end()); // Sort the factors after the loop

    for (auto it : v) { // Print the sorted factors
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    factors(n);
    return 0;
}
