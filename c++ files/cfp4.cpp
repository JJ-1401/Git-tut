#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        int x = 0, x_pos = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != 1 && a[i] != -1) {
                x = a[i]; // Store the special element
                x_pos = i; // Store its position
            }
        }

        // Step 1: Compute all possible sums ignoring x
        set<long long> subarray_sums;
        subarray_sums.insert(0); // Include the empty subarray sum

        long long prefix_sum = 0;
        for (int i = 0; i < n; i++) {
            if (i == x_pos) continue; // Skip x for now
            prefix_sum += a[i];
            subarray_sums.insert(prefix_sum);
        }

        // Step 2: Incorporate the effect of x
        if (x_pos != -1) {
            set<long long> new_sums;

            for (auto sum : subarray_sums) {
                new_sums.insert(sum);          // Add sums without x
                new_sums.insert(sum + x);     // Add sums including x
            }

            subarray_sums = new_sums; // Update the set with new sums
        }

        // Output results
        cout << subarray_sums.size() << endl;
        for (auto sum : subarray_sums) {
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
