//LC奇偶链表
//给定单链表的头节点 head ，将所有索引为奇数的节点和索引为偶数的节点分别组合在一起，然后返回重新排序的列表。
//第一个节点的索引被认为是 奇数 ， 第二个节点的索引为 偶数 ，以此类推。
//请注意，偶数组和奇数组内部的相对顺序应该与输入时保持一致。
//你必须在 O(1) 的额外空间复杂度和 O(n) 的时间复杂度下解决这个问题。

class Solution {
public:
	ListNode* oddEvenList(ListNode* head) {
		//空表直接返回head
		if (!head)
			return head;
		//用两个指针指分别向奇数号和偶数号元素
		ListNode *evenHead = head->next;//偶数号的头指针是head->next
		ListNode *odd = head;
		ListNode *even = evenHead;
		while (even&&even->next) {//非空继续
			odd->next = even->next;
			odd = odd->next;
			even->next = odd->next;
			even = even->next;
		}
		//将两个链表连接，此时odd表在前，头指针依然是head
		odd->next = evenHead;
		return head;
	}
};