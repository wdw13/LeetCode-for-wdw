//LC相交链表
//给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。
//如果两个链表不存在相交节点，返回 null 。
//图示两个链表在节点 c1 开始相交：

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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		//tempA和tempB我们可以认为是A,B两个指针
		ListNode *tempA = headA;
		ListNode *tempB = headB;
		while (tempA != tempB) {
			//如果指针tempA不为空，tempA就往后移一步。
			//如果指针tempA为空，就让指针tempA指向headB（注意这里是headB不是tempB）
			if (tempA == NULL) {
				tempA = headB;
			}
			else {
				tempA = tempA->next;
			}
			//指针tempB同上
			if (tempB == NULL) {
				tempB = headA;
			}
			else {
				tempB = tempB->next;
			}
		}
		//tempA要么是空，要么是两链表的交点
		return tempA;
	}
};