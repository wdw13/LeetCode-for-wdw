//LC�Ƴ�����Ԫ��
//����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��

class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		// ɾ��ͷ���
		while (head != NULL && head->val == val) { // ע�����ﲻ��if
			ListNode* tmp = head;
			head = head->next;
			delete tmp;
		}

		// ɾ����ͷ���
		ListNode* cur = head;
		while (cur != NULL && cur->next != NULL) {
			if (cur->next->val == val) {
				ListNode* tmp = cur->next;
				cur->next = cur->next->next;
				delete tmp;
			}
			else {
				cur = cur->next;
			}
		}
		return head;
	}
};