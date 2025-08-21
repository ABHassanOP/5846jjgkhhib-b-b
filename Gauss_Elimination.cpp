#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, j, k, n;
    double A[20][20], c, x[20], sum = 0.0;

    cout << "Nahid Hassan Rifat\n";
    cout << "ID : 1440\n\n";

    cout << "Enter the order of matrix: ";
    cin >> n;

    cout << "Enter the elements of augmented matrix row-wise:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j <= n; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "] : ";
            cin >> A[i][j];
        }
    }
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            if (i > j) {
                c = A[i][j] / A[j][j];
                for (k = 0; k <= n; k++) {
                    A[i][k] = A[i][k] - c * A[j][k];
                }
            }
        }
    }
    x[n-1] = A[n-1][n] / A[n-1][n-1];
    for (i = n-2; i >= 0; i--) {
        sum = 0;
        for (j = i+1; j < n; j++) {
            sum += A[i][j] * x[j];
        }
        x[i] = (A[i][n] - sum) / A[i][i];
    }
    cout << "\nThe solution is: \n";
    for (i = 0; i < n; i++) {
        cout << "x" << i+1 << " = " << fixed << setprecision(4) << x[i] << endl;
    }
    return 0;
}
