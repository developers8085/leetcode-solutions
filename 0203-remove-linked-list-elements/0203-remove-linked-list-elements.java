class Solution {
    public ListNode removeElements(ListNode head, int val) {
        if (head == null) {
            return null;
        }

        // Once removeElements call is done, right side of the list is solved.
        ListNode rightSideHead = removeElements(head.next, val);
        if (head.val == val) {
            return rightSideHead;
        }
        head.next = rightSideHead;
        return head;
    }
}