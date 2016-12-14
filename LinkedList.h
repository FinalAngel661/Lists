#pragma once

template<typename T>
class LinkedList
{
private:
	struct Node
	{
		T data;
		Node *prev, *next;
		Node() : prev(nullptr), next(nullptr) {}
	};

	Node *head, *tail;
	size_t count;
public:

	struct iterator
	{
		Node *_Ptr;

		iterator &operator++()
		{
			_Ptr = _Ptr->next;
			return *this
		}

		iterator &operator--();
		
		T *operator->()
		{
			return &_Ptr->data;
		}

		T &operator*()
		{
			return _Ptr->data;
		}

		bool operator!=(const iterator &o) const
		{
			return _Ptr != o._Ptr;
		}

		// --,++,*,->,
		//pointer to a node
	};

	T &at(size_t idx)
	{
		assert(idx < count);

		for (int i = 0; i < idx; ++i)
		{
			t = t->next;
		}
	}

	iterator begin()
	{
		iterator it;
		it._Ptr = head;
		return it;
	}

	iterator end() // should be exclusive
	{
		iterator it;
		it._Ptr = nullptr;
	}

	const T &front() { return head->data; }
	const T &back(){return tail->data;}

	T &operator[](size_t idx);
	const T &operator[](size_t idx) const;
	const T &front() const { return head->data; }
	const T &back() const { return tail->data; }

	void add_front(const T &val);
	void add_back(const T &val);

	T del_back();

	void del_front()
	{
		if (count == 1)
		{
			delete head;
			head = tail = nullptr;
		}
		else if (count > 1)
		{
			auto t = head;
			head = head->next;
			head->prev = nullptr;
			delete t;
		}
	}

	void clear()
	{
		auto t = head;

		while (t != nullptr)
		{
			auto todel = t;
			t = t->next;
			delete todel;
		}

		head = tail = nullptr;
	}

	bool empty() const { return count == 0; }
	size_t size() const { return count; }

	//RO5
	LinkedList() : prev(nullptr), next(nullptr), count(0) {};
	~LinkedList() { clear(); };
	LinkedList(const LinkedList &);
	LinkedList(LinkedList &&);
	LinkedList &operator=(const LinkedList &);
	LinkedList &operator=(LinkedList &&);
};



