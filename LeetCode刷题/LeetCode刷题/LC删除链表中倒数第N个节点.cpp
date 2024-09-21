//LCɾ�������е�����N���ڵ�
//����һ������ɾ������ĵ����� n ����㣬���ҷ��������ͷ��㡣

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