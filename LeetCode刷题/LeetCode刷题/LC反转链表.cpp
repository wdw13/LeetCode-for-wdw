//LC��ת����
//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������
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
			//�ȱ�����ʵĽڵ����һ���ڵ㣬��������
			//������һ�����ʵ�
			ListNode *temp = head->next;
			//ÿ�η��ʵ�ԭ����ڵ㶼���Ϊ�������ͷ��㣬
			//��ʵ���ǰ�������ҵ����ʵ�ԭ����ڵ��
			//���������
			head->next = newHead;
			//����������
			newHead = head;
			//���¸�ֵ����������
			head = temp;
		}
		//����������
		return newHead;
	}
};