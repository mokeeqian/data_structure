/**
 * 206. 反转链表
反转一个单链表。

示例:

输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL
进阶:
你可以迭代或递归地反转链表。你能否用两种方法解决这道题？
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
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = NULL, *tmp = NULL;       // 遍历过程中，直接修改next指针
        while ( head ) {
            tmp = head -> next;                 // 先把当前节点的下一个保存下来
            head -> next = pre;                 // 当前节点的next修改，指向它的前一个节点
            pre = head;                         // pre 指针往后走
            head = tmp;                         // head工作指针走一步 ===> 工作指针始终再pre前面
        }
        return pre;
    }
};