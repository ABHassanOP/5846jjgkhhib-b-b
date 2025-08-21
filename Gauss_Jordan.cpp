#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, j, k, n;
    double A[20][20], c, x[20];

    cout << "Nahid Hassan Rifat\n";
    cout << "ID : 1440\n";

    cout << "\nEnter the size of matrix: ";
    cin >> n;

    cout << "\nEnter the elements of augmented matrix row-wise:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j <= n; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }
    }
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            if (i != j) {
                c = A[i][j] / A[j][j];
                for (k = 0; k <= n; k++) {
                    A[i][k] -= c * A[j][k];
                }
            }
        }
    }
    cout << "\nThe solution is:\n";
    for (i = 0; i < n; i++) {
        x[i] = A[i][n] / A[i][i];
        cout << "x" << i+1 << " = " << fixed << setprecision(4) << x[i] << endl;
    }

    return 0;
}
