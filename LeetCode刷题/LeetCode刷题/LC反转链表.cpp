//LC反转链表
//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode *newHead = NULL;
		while (head != NULL) {
			//先保存访问的节点的下一个节点，保存起来
			//留着下一步访问的
			ListNode *temp = head->next;
			//每次访问的原链表节点都会成为新链表的头结点，
			//其实就是把新链表挂到访问的原链表节点的
			//后面就行了
			head->next = newHead;
			//更新新链表
			newHead = head;
			//重新赋值，继续访问
			head = temp;
		}
		//返回新链表
		return newHead;
	}
};