#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> p(n), s(n), ans(n);
        vector<bool> done(n, false);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        for (int i = 0; i < n; i++) {
            scanf("%1d", &s[i]);
        }

        for (int i = 0; i < n; i++) {
            if (done[i]) continue;  // Skip already processed elements

            int count = 0;
            int j = i;
            vector<int> loop;

            // Traverse the loop starting from index i
            while (!done[j]) {
                done[j] = true;
                loop.push_back(j);
                if (s[j] == 0) count++;
                j = p[j] - 1;  // Move to the next index in the loop
            }

            // Assign the count to all elements in the loop
            for (int idx : loop) {
                ans[idx] = count;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
