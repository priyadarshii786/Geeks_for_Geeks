//  https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/0

class Solution
{
public:
    // Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int>> matrix, int n, int m, int x)
    {
        // code here
        // jai ganesh
        int i = 0;
        int j = m - 1;
        while (i < n && j >= 0)
        {
            if (matrix[i][j] == x)
                return true;

            else if (matrix[i][j] > x)
            {
                j--;
                if (j < 0)
                {
                    i++;
                    j = m - 1;
                }
            }
            else
                i++;
        }
        return false;
    }
};