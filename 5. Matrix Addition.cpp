#include <iostream>
using namespace std;
int main()
{
    int m, n, p, q, i, j, A[5][5], B[5][5], C[5][5];

    cout << "Enter rows and columns of matrix A :";
    cin >> m >> n;
    cout << "Enter rows and columns of matrix B :";
    cin >> p >> q;

    if ((m != p) && (n != q))
    {
        cout << "Matrices cannot be added!!";
        exit(0);
    }

    cout << "Enter elements of matrix A :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of matrix B :";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Sum of matrices\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
