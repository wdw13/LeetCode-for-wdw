//LC复制带随机指针的链表
//给你一个长度为 n 的链表，每个节点包含一个额外增加的随机指针 random ，该指针可以指向链表中的任何节点或空节点。
//构造这个链表的 深拷贝。 深拷贝应该正好由 n 个 全新 节点组成，其中每个新节点的值都设为其对应的原节点的值。
//新节点的 next 指针和 random 指针也都应指向复制链表中的新节点，并使原链表和复制链表中的这些指针能够表示相同的链表状态。
//复制链表中的指针都不应指向原链表中的节点
class Solution {
	unordered_map<Node*, Node*> m;
public:
	Node* copyRandomList(Node* head) {
		if (!head) return NULL;
		Node* newnode = new Node(head->val);
		m[head] = newnode;
		newnode->next = copyRandomList(head->next);
		if (head->random)newnode->random = m[head->random];
		return newnode;
	}
};