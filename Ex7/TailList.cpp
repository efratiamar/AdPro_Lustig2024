#include "TailList.h"

TailList::TailList() : List(), last(nullptr) {	}

TailList::TailList(const TailList& ls2)
	: List(ls2), last(nullptr)
{
	if (isEmpty())
	{
		last = nullptr;
		return;
	}

	Link* ptr = head;
	while (ptr->next != nullptr)
		ptr = ptr->next;

	last = ptr;
}

TailList::~TailList()
{
	last = nullptr;
}

void TailList::addToEnd(int val)
{
	if (isEmpty())
	{
		add(val);
		return;
	}

	Link* ptr = new Link(val);
	last->next = ptr;
	last = ptr;
}

void TailList::add(int value)
{
	if (!isEmpty())
	{
		List::add(value);
		return;
	}

	List::add(value);
	last = head;
}

void TailList::removeFirst()
{
	List::removeFirst();

	if (isEmpty()) //was only one element
	{
		last = head; //nullptr
		return;
	}
}

void TailList::clear()
{
	List::clear();
	last = nullptr;
}