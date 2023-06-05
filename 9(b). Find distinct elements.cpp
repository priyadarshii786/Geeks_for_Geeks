//  https://practice.geeksforgeeks.org/batch/cpp-stl-1/track/foundation-cpp-array/problem/find-distinct-elements2054
class Solution
{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        int hash[1001];
        for (int i = 0; i < 1001; i++)
            hash[i] = 0;
        for (int i = 0; i < N; i++)
        {
            hash[M[0][i]] = 1;
        }

        for (int i = 1; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (hash[M[i][j]] == i)
                {
                    hash[M[i][j]] = i + 1;
                }
            }
        }

        int count = 0;
        for (int i = 0; i < 1001; i++)
        {
            if (hash[i] == N)
                count++;
        }
        return count;
    }
};