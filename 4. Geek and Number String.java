//  https://practice.geeksforgeeks.org/problems/904237fa926d79126d42c437802b04287ea9d1c8/0

class Solution {
    public int minLength(String s, int n) {
        // jai ganesh
        Stack<Integer> st = new Stack<>();
        int mem[] = { 9, 2, 1, 4, 3, 6, 5, 8, 7, 0 };

        for (char ch : s.toCharArray()) {
            int x = ch - '0';

            if (!st.isEmpty() && mem[st.peek()] == x)
                st.pop();

            else
                st.push(x);
        }

        return st.size();

    }
}