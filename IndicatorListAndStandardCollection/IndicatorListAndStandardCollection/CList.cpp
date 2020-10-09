/*The class CLista of pointer list, then the elements of which are a 3D point structure (double x, y,z) */
#include "pch.h"
#include "CList.h"


CList::CList(void){
	first = 0;
}


CList::~CList(void){
}

void CList::addElement(Points3D p, int n) {
	if (first == 0){
		first = new Element;
		first->p = p;
		first->next = 0;
		return;
	}
	if (n == 0){
		Element *tmp = first;
		first = new Element;
		first->p = p;
		first->next = tmp;
		return;
	}
	Element *it = first;
	for (int i = 1; i < n; i++)
		it = it->next;
	Element *tmp = it->next;
	it->next = new Element;
	it->next->p = p;
	it->next->next = tmp;
}
void CList::addLastElement(Points3D p) 
{
	Element *NewElement = new Element;
	NewElement->p = p;
	NewElement->next = 0;
	if (first == 0) {
		first = NewElement;
		return;
	}
	Element *itr = first;
	while (itr->next != 0)
		itr = itr->next;
	itr->next = NewElement;
}
Points3D CList::insertElement(int n) {
	Element *it = first;
	for (int i = 0; i < n; i++){
		it = it->next;
	}
	return it->p;
}
void CList::deleteElement(int n) {
	if (n == 0){
		Element *tmp = first->next;
		delete first;
		first = tmp;
		return;
	}
	Element *it = first;
	for (int i = 1; i < n; i++)
		it = it->next;
	Element *tmp = it->next->next;
	delete it->next;
	it->next = tmp;
}
int CList::searchElement(Points3D p) {
	Element *it = first;
	int i = 0;
	while (it != 0){
		if (it->p.x == p.x && it->p.y == p.y && it->p.z == p.z)
			return i;
		i++;
		it = it->next;
	}
	return -1;
}