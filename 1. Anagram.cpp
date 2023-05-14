//  https://practice.geeksforgeeks.org/batch/cpp-stl-1/track/foundation-cpp-string/problem/anagram-1587115620

class Solution
{
    // Function is to check whether two strings are anagram of each other or not.
public
    static boolean isAnagram(String a, String b)
    {

        // Your code here
        // jai ganesh
        int n = a.length();
        int m = b.length();

        if (n != m)
            return false;

        int fre1[] = new int[26];
        int fre2[] = new int[26];
        Arrays.fill(fre1, 0);
        Arrays.fill(fre2, 0);

        for (int i = 0; i < n; i++)
        {
            fre1[a.charAt(i) - 'a']++;
            fre2[b.charAt(i) - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (fre1[i] != fre2[i])
                return false;
        }
        return true;
    }
}