#pragma once

class List
{
private:
	class Link
	{
	public:
		int key;
		Link* next;

		Link(int _key, Link* _next);
	};

	Link* head;
public:
	List();
	List(const List& ls2);
	~List();
	bool isEmpty() const;
	void add(int value);
	void removeFirst();
	int firstElement() const;

	bool search(const int& value) const;
	void clear();

};











//#pragma once
//
////--------------------------------------
////  class List
////      arbitrary size Lists
////      permits insertion and removal 
////      only from the front of the List
////--------------------------------------
//class List
//{
//protected:
//    //---------------------------------------
//    //  inner class link
//    //  a single element for the linked List 
//    //---------------------------------------
//    class Link
//    {
//    public:
//        // data areas
//        int value;
//        Link* next;
//        // constructor
//        Link(int linkValue, Link* nextPtr);
//        Link(const Link&);
//    };	//end of class Link
//
//public:
//    // constructors
//    List();
//    List(const List&);
//    ~List();
//
//    // operations
//    void add(int value);
//    int firstElement() const;
//    bool search(const int& value) const;
//    bool isEmpty() const;
//    void removeFirst();
//    void clear();
//
//protected:
//    // data field
//    Link* head;
//};
