#pragma once

#include <iostream>

using namespace std;

template<typename T>
class List
{
private:
	template<typename T> struct Elem
	{
		T data;
		Elem* next, * prev;
	};
	Elem<T>* Head, * Tail;
public:
	List();
	List(const List<T>& obj);

	void Add_begin(T el);
	void Add_end(T el);
	void deleteAll();
	void reversList();

	template<typename T> 
	friend ostream& operator<<(ostream& out, const List<T>& obj);

	~List();
};