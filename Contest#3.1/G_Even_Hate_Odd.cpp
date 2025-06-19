#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int even = 0, odd = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        
        if (n % 2 != 0) {
            cout << -1 << endl;
            continue;
        }
        
        int target = n / 2;
        if (even == odd) {
            cout << 0 << endl;
            continue;
        }
        
        long long operations = 0;
        if (even > odd) {
            int needed = even - target;
            operations = needed * 1LL;
        } else {
            int needed = odd - target;
            operations = needed * 1LL;
        }
        
        cout << operations << endl;
    }
    return 0;
}