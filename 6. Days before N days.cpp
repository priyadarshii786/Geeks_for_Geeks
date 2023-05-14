//   https://practice.geeksforgeeks.org/batch/cpp-stl-1/track/foundation-cpp-operators/problem/days-before-n-days

void utility(int d, int n)
{

    // write your code here
    // jai ganesh
    int ans = (7 + (d - (n % 7))) % 7;
    cout << ans;
}