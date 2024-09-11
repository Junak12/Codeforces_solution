#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main() {
    opt();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<char>> grid(2, vector<char>(n)); // last attempt
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }
        int result = 0;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '.') {
                    if (i == 0) {
                        if (j > 0 && j < n - 1) {
                            if (grid[i + 1][j] == '.' &&
                                grid[i + 1][j - 1] == 'x' &&
                                grid[i][j - 1] == '.' &&
                                grid[i + 1][j + 1] == 'x' &&
                                grid[i][j + 1] == '.') {
                                result++;
                            }
                        }
                    } 
                    else {
                        
                        if (j > 0 && j < n - 1) {
                            if (grid[i - 1][j] == '.' &&
                                grid[i - 1][j - 1] == 'x' &&
                                grid[i][j - 1] == '.' &&
                                grid[i - 1][j + 1] == 'x' &&
                                grid[i][j + 1] == '.') {
                                result++;
                            }
                        }
                    }
                }
            }
        }
        cout << result << "\n";
    }
    return 0;
}
