//LC��������
//����һ���������ͷ�ڵ� head �������жϸ������Ƿ�Ϊ������������ǣ����� true �����򣬷��� false
class Solution {
public:
	bool isPalindrome(ListNode* head) {
		ListNode *temp = head;
		stack<int> stack;
		//������ڵ��ֵ��ŵ�ջ��
		while (temp != NULL) {
			stack.push(temp->val);
			temp = temp->next;
		}

		//Ȼ���ٳ�ջ
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