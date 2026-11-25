/*
 * Problem: 2. Add Two Numbers
 * Source: LeetCode
 * URL: https://leetcode.com/problems/add-two-numbers/submissions/2203087156/
 * Difficulty: Medium
 * Language: C
 * Solved on: 2026-11-25 08:00:52 UTC
 * Created by Anunay Srivastava
 * Synced by: DSA Tracker
 */

def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dum = ListNode(0)
        curr = dum
        carry = 0

        while l1 or l2 or carry:
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0

            total = x + y + carry
            carry = total // 10

            curr.next = ListNode(total % 10)
            curr = curr.next

            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next
        return dum.next