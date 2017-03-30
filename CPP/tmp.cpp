#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

extern "C" {
#include <limits.h>
#include <math.h>
}

using namespace std;

static vector<int> table(1001);
static int n = 0;

int main(int argc, const char * argv[]) {

    int current = 0;

    cin >> n;

    fill(table.begin(), table.end(), INT_MIN);
    table[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> current;

        for (int j = i ; j <= n; j++) {
                table[j] = max(table[j], table[j - i] + current);
        }
    }

    cout << table[n] << endl;

    return 0;
}
