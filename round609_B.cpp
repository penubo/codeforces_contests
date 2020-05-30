#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

static long long m, n;

bool comVector(vector<long long> a, vector<long long> b, long long ii) {
    for (int i = 0; i < a.size(); i++, ii = (ii + 1) % m) {
        if (a[ii] != b[i]) {
            return false;
        }
        
    }
    return true;
}

int main() {
    
    long long tmp;

    cin >> n >> m;

    vector<long long> a(m), b(m);

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[tmp]++;
    }
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        b[tmp]++;
    }

    if (comVector(a, b, 0)) {
        cout << 0 << "\n";
        return 0;
    }

    for (long long i = 1; i < m; i++) {
        for (int j = 0, ii = m - i; j < a.size(); j++, ii = (ii + 1) % m) {
            if (a[ii] != b[j]) {
                continue;
            }
        }
        cout << i << "\n";
        break;
    }

    return 0;
}
