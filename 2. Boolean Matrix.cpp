//  https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/0
// jai ganesh

unordered_map<int, int>
    row;
unordered_map<int, int> col;
int n = matrix.size(), m = matrix[0].size();
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if (matrix[i][j] == 1)
        {
            row[i] = 1;
            col[j] = 1;
        }
    }
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if (row[i] == 1 || col[j] == 1)
        {
            matrix[i][j] = 1;
        }
    }
}