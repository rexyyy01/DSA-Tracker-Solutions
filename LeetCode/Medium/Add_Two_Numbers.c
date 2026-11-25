/*
 * Problem: 2. Add Two Numbers
 * Source: LeetCode
 * URL: https://leetcode.com/problems/add-two-numbers/
 * Difficulty: Medium
 * Language: C
 * Solved on: 2026-11-25 07:59:39 UTC
 * Created by Anunay Srivastava
 * Synced by: DSA Tracker
 */

*     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* head = new ListNode(-1);

        ListNode* tail= head;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        int carry=0;
        int sum=0;
        while(temp1 !=nullptr || temp2!=nullptr || carry)