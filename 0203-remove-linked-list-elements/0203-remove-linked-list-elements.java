class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode remove = new ListNode(0);
        remove.next = head;

        ListNode curr = remove;

        while (curr.next != null) {
            if (curr.next.val == val) {
                curr.next = curr.next.next;
            } else {
                curr = curr.next;
            }
        }

        return remove.next;
    }
}