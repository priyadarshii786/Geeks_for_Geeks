//   https://practice.geeksforgeeks.org/batch/cpp-stl-1/track/foundation-cpp-operators/problem/last-digit-of-a-number

void utility(int n)
{

    // just complete below statement
    // jai ganesh

    // here we are only supposed to resolve the corner case ie; what if n is a '-ve' number.  .

    // int ans = abs(n)%10; ----------------- is a shortcut approach
    int ans;
    if (n > 0)
        ans = n % 10;

    else
        ans = (n % 10) * (-1);

    // print the result
    cout << ans << endl;
}