//LC�ϲ����������б�
//��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵ�
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		if (list1 == nullptr) {
			return list2;
		}
		else if (list2 == nullptr) {
			return list1;
		}
		else if (list1->val > list2->val) {
			list2->next = mergeTwoLists(list1, list2->next);
			return list2;
		}
		else {
			list1->next = mergeTwoLists(list1->next, list2);
			return list1;
		}
	}
};