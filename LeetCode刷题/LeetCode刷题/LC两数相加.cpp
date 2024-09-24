﻿//LC两数相加
//给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。
//请你将两个数相加，并以相同形式返回一个表示和的链表

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int len1 = 1;//记录l1的长度
		int len2 = 1;//记录l2的长度
		ListNode* p = l1;
		ListNode* q = l2;
		while (p->next != NULL)//获取l1的长度
		{
			len1++;
			p = p->next;
		}
		while (q->next != NULL)//获取l2的长度
		{
			len2++;
			q = q->next;
		}
		if (len1 > len2)//l1较长，在l2末尾补零
		{
			for (int i = 1; i <= len1 - len2; i++)
			{
				q->next = new ListNode(0);
				q = q->next;
			}
		}
		else//l2较长，在l1末尾补零
		{
			for (int i = 1; i <= len2 - len1; i++)
			{
				p->next = new ListNode(0);
				p = p->next;
			}
		}
		p = l1;
		q = l2;
		bool count = false;//记录进位
		ListNode* l3 = new ListNode(-1);//存放结果的链表
		ListNode* w = l3;//l3的移动指针
		int i = 0;//记录相加结果
		while (p != NULL && q != NULL)
		{
			i = count + p->val + q->val;
			w->next = new ListNode(i % 10);
			count = i >= 10 ? true : false;
			w = w->next;
			p = p->next;
			q = q->next;
		}
		if (count)//若最后还有进位
		{
			w->next = new ListNode(1);
			w = w->next;
		}
		return l3->next;
	}
};
