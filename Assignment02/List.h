#pragma once
class List
{
	class node
	{
	public:
		int key;
		char data;
		node* next;
	};

	node* head, * cursor, * prev;

public:

	List();
	~List();
	bool listIsEmpty() const;
	bool curIsEmpty() const;
	void toFirst();
	bool atFirst() const;
	void advance();
	void toEnd();
	bool atEnd() const;
	int  listSize() const;
	void updateData(const char&);
	void retrieveData(char&, int&) const;
	void insertFirst(const int&, const char&);
	void insertAfter(const int&, const char&);
	void insertBefore(const int&, const char&);
	void insertEnd(const int&, const char&);
	void deleteNode();
	void deleteFirst();
	void deleteEnd();
	void makeListEmpty();
	bool search(const int&);
	void orderInsert(const char&, const int&);
	void traverse();
	void ReverceList(node* h);
	void rearrangeAscendingly();
	void printListKeys();
};

