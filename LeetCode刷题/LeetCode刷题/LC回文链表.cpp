//LC回文链表
//给你一个单链表的头节点 head ，请你判断该链表是否为回文链表。如果是，返回 true ；否则，返回 false
class Solution {
public:
	bool isPalindrome(ListNode* head) {
		ListNode *temp = head;
		stack<int> stack;
		//把链表节点的值存放到栈中
		while (temp != NULL) {
			stack.push(temp->val);
			temp = temp->next;
		}

		//然后再出栈
		while (head != NULL) {
			if (head->val != stack.top()) {
				return false;
			}
			stack.pop();
			head = head->next;
		}
		return true;
	}
};