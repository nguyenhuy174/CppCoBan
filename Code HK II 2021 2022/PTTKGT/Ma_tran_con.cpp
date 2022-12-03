#include <iostream>
#include <cstdlib>
using namespace std;

enum { MAXN = 100 };
long a[MAXN + 1][MAXN + 1];
long h[MAXN + 1][MAXN + 1], hc[MAXN + 1][MAXN + 1];  // nếu dữ liệu lớn thì khai báo double
// Chú ý: Trong bài này các chỉ số của ma trận được tính từ [1][1] đến [m][n]
struct Rect {
    int m1, n1, m2, n2;
};

int main()
{
    int m = 4, n = 4;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            a[i][j] = rand() % 1000 - 500;
        }
    }

    //  Ti'nh h[i][j] = a[i][1] + a[i][2] + ... + a[i][j]
    for (int i = 1; i <= m; ++i) {
        h[i][0] = 0;
        for (int j = 1; j <= n; ++j)
            h[i][j] = h[i][j - 1] + a[i][j];
    }

    //  Ti'nh hc[i][j] = tong cac so trong ma tran con tu [1][1] den [i][j]
    for (int i = 0; i <= m; ++i) hc[i][0] = 0;
    for (int j = 1; j <= n; ++j) {
        hc[0][j] = 0;
        for (int i = 1; i <= m; ++i)
            hc[i][j] = hc[i - 1][j] + h[i][j];
    }

    Rect r, maxr;
    long max_sum = -2e9;
    for (r.m1 = 1; r.m1 <= m; ++r.m1) {
        for (r.n1 = 1; r.n1 <= n; ++r.n1) {
            for (r.m2 = r.m1; r.m2 <= m; ++r.m2) {
                for (r.n2 = r.n1; r.n2 <= n; ++r.n2) {
                    long sum = hc[r.m2][r.n2] - hc[r.m1 - 1][r.n2] - hc[r.m2][r.n1 - 1] + hc[r.m1 - 1][r.n1 - 1];
                    if (sum < max_sum) continue;
                    max_sum = sum;
                    maxr = r;
                }
            }
        }
    }

    cout << "max_sum = " << max_sum << endl << "a[" << maxr.m1 << ".." << maxr.m2 << ", " << maxr.n1 << ".." << maxr.n2 << "]";
}
// Danh gia ve do phuc tap cua thuat toan su dung: O(m*m*n*n)