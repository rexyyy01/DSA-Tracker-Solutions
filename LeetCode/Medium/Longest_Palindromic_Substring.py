# Problem: 5. Longest Palindromic Substring
# Source: LeetCode
# URL: https://leetcode.com/problems/longest-palindromic-substring/submissions/2203087774/
# Difficulty: Medium
# Language: Python3
# Solved on: 2026-11-25 08:03:04 UTC
# Created by Anunay Srivastava
# Synced by: DSA Tracker

class Solution:
    def longestPalindrome(self, s: str) -> str:
        n=len(s)
        def expand_center(i,j):            
            while 0<=i<=j<n and s[i]==s[j]:
                i-=1
                j+=1                
            
            return (i+1, j)                
        
        res=max([expand_center(i,i+offset) for i in range(n) for offset in range(2)], key=lambda x: x[1]-x[0]+1)
        
        return s[res[0]:res[1]]