#pragma once

struct Points3D {
	double x;
	double y;
	double z;
};

class CList
{
private:
	struct Element {
		Points3D p;
		Element *next;
	};
	Element *first;
public:
	CList(void);
	~CList(void);
/*The list class must have methods allowing for adding, inserting, deleting and searching (by cursor) elements from the list.*/
	void addElement(Points3D p, int n);
	void addLastElement(Points3D p);
	Points3D insertElement(int n);
	void deleteElement(int n);
	int searchElement(Points3D p);
};

