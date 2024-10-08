//LC合并两个有序列表
//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的
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