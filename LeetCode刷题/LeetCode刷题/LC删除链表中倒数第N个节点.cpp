//LC删除链表中倒数第N个节点
//给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。

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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode *p1 = head;
		ListNode *p2 = head;
		for (int i = 0; i < n; i++) {
			p2 = p2->next;
		}
		if (p2 == NULL) return head->next;
		while (p2->next != NULL) {
			p1 = p1->next;
			p2 = p2->next;
		}
		p1->next = p1->next->next;
		return head;
	}
};