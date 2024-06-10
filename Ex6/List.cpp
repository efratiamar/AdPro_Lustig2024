#include "List.h"

List::Link::Link(int _key, Link* _next = nullptr) 
	: key(_key), next(_next) {}

List::List() :head(nullptr) { }

List::List(const List& ls2)
{
	Link* ptr2 = ls2.head;
	Link* ptr1 = head = nullptr;

	if (ls2.isEmpty())
	{
		head = nullptr;
		return;
	}
	else
	{
		ptr1 = new Link(ptr2->key);
		head = ptr1;
		ptr2 = ptr2->next;
		while (ptr2 != nullptr)
		{
			ptr1->next = new Link(ptr2->key);
			ptr1 = ptr1->next;
			ptr2 = ptr2->next;
		}
	}
}

List::~List()
{
	clear();
}


bool List::isEmpty() const
{
	return head == nullptr;
}
void List::add(int value)
{
	//Link* pNew = new Link(value, head);
	//head = pNew;

	head = new Link(value, head);
}
void List::removeFirst()
{
	if (!isEmpty())
	{
		Link* ptr = head;
		head = head->next;
		if (ptr)
			delete ptr;
	}
	else
		throw "underflow - cannot remove from empty list\n";
}

int List::firstElement() const
{
	if (!isEmpty())
	{
		return head->key;
	}
	else
		throw "underflow - cannot get first value of empty list\n";
}

bool List::search(const int& value) const
{
	Link* ptr = head;
	while (ptr != nullptr)
	{
		if (ptr->key == value)
			return true;
		ptr = ptr->next;
	}
	return false;
}

void List::clear()
{
	while (!isEmpty())
	{
		removeFirst();
	}
}

////--------------------------------------
////  class Link implementation
////--------------------------------------
//#include "List.h"
//
//List::Link::Link(int val, Link * nxt) :
//    value(val), next(nxt) {}
//
//List::Link::Link(const Link & source) :
//    value(source.value), next(source.next) {}
//
////-----------------------------
////  class List implementation
////-----------------------------
//List::List() : head(nullptr)
//{
//    // no further initialization
//}
//
//List::List(const List& l)
//{
//    Link* src, * trg;
//    if (l.head == nullptr)
//        head = nullptr;
//    else
//    {
//        head =
//            new Link((l.head)->value, nullptr);
//        src = l.head;
//        trg = head;
//        while (src->next != nullptr)
//        {
//            trg->next = new Link
//            ((src->next)->value, nullptr);
//            src = src->next;
//            trg = trg->next;
//        }
//    }
//}
//
//List::~List()
//{
//    clear();
//}
//
//void List::clear()
//{
//    // empty all elements from the List
//    Link* next;
//    for (Link* p = head; p != nullptr; p = next)
//    {
//        // delete the element pointed to by p
//        next = p->next;
//        p->next = nullptr;
//        delete p;
//    }
//    // mark that the List contains no elements
//    head = nullptr;
//}
//
//bool List::isEmpty() const
//{
//    // test to see if the List is empty
//    // List is empty if the pointer to the head
//    // Link is null
//    return head == nullptr;
//}
//void List::add(int val)
//{
//    //Add new key to front of List
//    head = new Link(val, head);
//    if (head == nullptr)
//        throw
//        "failed in memory allocation";
//}
//
//int List::firstElement() const
//{
//    // return first value in List
//    if (isEmpty())
//        throw
//        "the List is empty, no first Element";
//    return head->value;
//}
//
//bool  List::search(const  int& val) const
//{
//    // loop to test each element
//    for (Link* p = head; p != nullptr; p = p->next)
//        if (val == p->value)
//            return true;
//    // not found
//    return false;
//}
//
//void List::removeFirst()
//{
//    // make sure there is a first element
//    if (isEmpty())
//        throw
//        " List empty, no Elements to remove";
//    // save pointer to the removed node
//    Link* p = head;
//    // reassign the first node
//    head = p->next;
//    p->next = nullptr;
//    delete p;
//}
//
//
