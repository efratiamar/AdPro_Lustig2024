#pragma once
#include "List.h"

class TailList : public List
{

private:
	Link* last;

public:
	TailList(); 
	TailList(const TailList& ls2);
	~TailList();
	void addToEnd(int val);

	///overriden
	void add(int value);
	void removeFirst();
	void clear();

};
