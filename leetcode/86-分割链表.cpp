/**
 *86. 分隔链表
给定一个链表和一个特定值 x，对链表进行分隔，使得所有小于 x 的节点都在大于或等于 x 的节点之前。
你应当保留两个分区中每个节点的初始相对位置。
示例:
输入: head = 1->4->3->2->5->2, x = 3
输出: 1->2->2->4->3->5 
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if ( !head ) {
            return head;
        }
        // 维护两个链表，一个 val < x， 一个 val >= x，最后连起来
        ListNode *dummyLeft = new ListNode(-1), *dummyRight = new ListNode(-1);     // 这里使用两个哑巴节点
        ListNode *l1 = dummyLeft, *l2 = dummyRight;                                 // 两个工作指针
        while ( head ) {
            if ( head -> val < x  ) {
                l1 -> next = head;                                                  // 这里只是把链表指向改了
                l1 = l1 -> next;                                                    // 更新l1工作指针
            } else {
                l2 -> next = head;
                l2 = l2 -> next;
            }
            head = head -> next;
        }

        l2 -> next = NULL;                  // 第二个链表尾部置空
        l1 -> next = dummyRight -> next;    // 连起来
        return dummyLeft -> next;
    }
};