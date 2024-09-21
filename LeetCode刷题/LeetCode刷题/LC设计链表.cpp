//LC设计链表
//你可以选择使用单链表或者双链表，设计并实现自己的链表。
//单链表中的节点应该具备两个属性：val 和 next 。val 是当前节点的值，next 是指向下一个节点的指针 / 引用。
//如果是双向链表，则还需要属性 prev 以指示链表中的上一个节点。假设链表中的所有节点下标从 0 开始。
//实现 MyLinkedList 类：
//MyLinkedList() 初始化 MyLinkedList 对象。
//int get(int index) 获取链表中下标为 index 的节点的值。如果下标无效，则返回 - 1 。
//void addAtHead(int val) 将一个值为 val 的节点插入到链表中第一个元素之前。在插入完成后，新节点会成为链表的第一个节点。
//void addAtTail(int val) 将一个值为 val 的节点追加到链表中作为链表的最后一个元素。
//void addAtIndex(int index, int val) 将一个值为 val 的节点插入到链表中下标为 index 的节点之前。如果 index 等于链表的长度，那么该节点会被追加到链表的末尾。如果 index 比长度更大，该节点将 不会插入 到链表中。
//void deleteAtIndex(int index) 如果下标有效，则删除链表中下标为 index 的节点。

class MyLinkedList {
public:
	/** Initialize your data structure here. */
	struct node {//单链表节点结构
		int val;//数据域
		node *next;//指针域
		node(int x) : val(x), next(NULL) {}//表示的含义就是节点数值为x，指针为空（初始化一个新节点）
	};
	MyLinkedList() {//初始化链表
		head = new node(0);//初始化头指针，数据为0(0-0(index))--->相当于定义了一个空节点作为头，它本身不算节点
		size = 0;//链表长度为0
	}

	/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
	int get(int index) {//获取索引节点数值
		if (index<0 || index>(size - 1)) return -1;//索引比0小或者比最大索引大，返回-1
		node *cur = head->next;//辅助指针指向第一个节点
		while (index--) cur = cur->next;//循环index次遍历到第index个节点
		return cur->val;//指向数值输出
	}

	/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
	void addAtHead(int val) {//插入头
		node *newnode = new node(val);//创建新节点
		newnode->next = head->next;//将头节点的next赋值给新的节点--->相当于连接新插入节点与第一个节点
		head->next = newnode;//连接头指针与第一个新节点
		size++;//长度加1
	}

	/** Append a node of value val to the last element of the linked list. */
	void addAtTail(int val) {//插入尾
		node *cur = head;//辅助指针从头指针开始
		while (cur->next) cur = cur->next;//遍历到最后一个节点,如果是空链表，则直接不循环，指针还是在头指针
		node *newnode = new node(val);//创造新节点并赋值
		newnode->next = cur->next;//复制原最后节点的next信息
		cur->next = newnode;//连接最后一个新节点和上一个节点
		size++;//长度加1
	}

	/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
	void addAtIndex(int index, int val) {
		if (index <= 0) addAtHead(val);//插入index的时候，如果下标是=0,就相当于从头插入，所以要包含<=
		else if (index == size) addAtTail(val);
		else if (index > size) return;
		else {
			node *newnode = new node(val);
			node *cur = head;//辅助指针从头指针开始
			while (index--) cur = cur->next;//遍历到第index-1的节点，循环次数是index次 但是辅助指针是从头指针开始而不是第一个节点
			newnode->next = cur->next;//连接index
			cur->next = newnode;//连接前一个
			size++;//长度+1
		}
	}

	/** Delete the index-th node in the linked list, if the index is valid. */
	void deleteAtIndex(int index) {
		if (index < 0 || index >= size) return;
		node *cur = head;//从头指针开始
		while (index--) {//遍历到index-1的位置,循环次数是index次
			cur = cur->next;
		}
		cur->next = cur->next->next;//相当于直接跨过了index节点
		size--;
	}
private://私人函数定义
	int size;//表示链表长度
	node *head;//定义头指针
};