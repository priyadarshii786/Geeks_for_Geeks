//  https://practice.geeksforgeeks.org/batch/cpp-stl-1/track/foundation-cpp-array/problem/find-distinct-elements2054

class Solution
{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        // code here
        // jai ganesh
        map<int, int> num;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (num[M[i][j]] == i)
                    num[M[i][j]]++;
            }
        }

        int distinct_count = 0;
        for (auto i : num)
        {
            if (i.second == N)
                distinct_count++;
        }
        return distinct_count;
    }
};