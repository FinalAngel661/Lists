#include <vector>
#include <random>
#include <ctime>
#include <map>
#include <iostream>
#include <algorithm>
//#include <sort>
#include <list>

#include "LinkedList.h"

/*
	1) Statements in Sequential Order

	2) Recursive Stack

	3) Non Contiguous Data Structures (Linked Lists)
*/


class MyClass
{
private:
	int *myPtr;
public:
	MyClass()
	{
		myPtr = nullptr;
		
		if (myPtr = nullptr)
		{

		}
	}
	void init()
	{

	}
	MyClass()
	{
	if (myPtr != nullptr)
		delete[] myPtr;
	}
	MyClass(const MyClass &o)
	{
		size = o.size;
		myPtr = nullptr;
		myPtr = new int[size];
		memcpy(myPtr, o.myPtr, size * sizeof(int));
	}
	MyClass(MyClass &&o)
	{
		myPtr = o.myPtr;
		size = o.size;
		o.myPtr = nullptr;
		o.size = size;
	}
};

void main()
{
	MyClass A, B;
	MyClass C(B);
	MyClass D = C;

	D = C;
}


/*
void main()
{
	srand(time(0));
	std::vector<int>blah;

	for(int i = 0; i < blah.size(); i++)
	{
		blah[i] = 0;
	}

	for(int *ptr = &blah[0]; ptr <= &blah[blah.size()-1]; ptr++)
	{
		*ptr = rand();
	}

	for(auto it = blah.begin(); it != blah.end(); it++)
	{
		*it = rand();
	}
}

*/

/*

class Blah
{

}

void main()
{
	std::vector<int> IntVector;

	IntVector.push_back(23);
	IntVector.push_back(245);
	IntVector.push_back(26);

	IntVector[0];
	IntVector.at(1) = 4;

	if(IntVector.size() > 2)
	{
		IntVector[2] = 4;
	}

	std::vector<int>::iterator it = IntVector.begin();
	auto it = IntVector.begin();
	it++;
	*it = 4;
	// pointer function... it._Ptr;

	for(auto it = IntVector.begin(); it != IntVector.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	system("pause");
}
*/

/*

void unaryOp(int &)

struct UnaryOp
{
	int idx = 0;
	void operator()(int &i)
	{
		if(idx % 2 == 1)
			i = 0;
		idx++;
	}
};

void main()
{
	srand(time(0));

	std::vector<int> data;

	for(int i = 0; i < 20; ++i)
		data.push_back(rand());

	for each(auto var in data)
	{
		std::cout << var << "";
	}
	std::cout << std::endl;

	std::sort(data.begin(), data.end());

	for(auto it = data.begin(); it != data.end(); it += 2)
		*it = 0;

	for each(auto var in data)
	{
		std::cout << var << "";
	}
	std::cout << std::endl;


	std::for_each(data.begin(), data.end(), UnaryOp();

	for each(auto var in data)
	{
	std::cout << var << "";
	}
	std::cout << std::endl;

	system("pause");
}

*/

/*
// equal to an array function...
struct Node
{
	Node *next;
	int data;

};

ptr = &node;
ptr = ptr->next;

void blah()
{
	Node *head = new Node();
	Node *tail = head;
	
	// add to end
	Node *t = tail;
	t->next  = new Node();
	tail->prev->next = t->next;
	tail = t;
	tail =tail->next = new Node();
	tail =tail->next = new Node();
	tail =tail->next = new Node();
	tail =tail->next = new Node();
	tail->prev = head;
	tail->prev->next = tail;
	tail->next->prev = tail;

	//add to front
	head->prev = new Node();
	head->prev->next = head;
	head = head->prev;

	//remove from end
	Node *t = tail->prev;
	tail = tail->prev;
	tail->next = nullptr;
	delete t;

	//remove from front
	Node *t = head;
	head = head->prev;
	tail->next = nullptr;
	delete t;

	// add to beginning
	Node *t = new Node();
	t->next = head;
	head = t;

	//decapitation
	t = head;
	head = head->next;
	delete t;
}

*/

/*
void main()
{
	std::list<int> blah;
	std::vector<int> blah;
	auto it = blah.begin();

	LinkedList<int> list;

	list.add_front(10);
	list.add_front(11);
	list.add_front(12);
	list.add_back(9);
	list.add_back(8);
	list.add_back(7);

	list.DEBUG_TEMP_PRINT();

	for each(auto it = list.begin(0; it != list.end(0; it++)
	{
		*it = 4;
	}

	list.at(0) = 5;

	list.del_back();
	list.del_front();

	system("pause");
}

*/