#pragma once
#include"stdafx.h"
using namespace std;
template <class Object>
class TemplateOfObject
{
private:
	vector <Object> v;
public:
	TemplateOfObject(string diachifile = "");
	/////Note: cac phuong thuc cua vector
	void pushObject(Object const& elem);
	bool emptyObject()const;//Tra ve true neu la trong
	void popObject();
	Object topObject()const;
	Object Index(int idx);
	int sizeObject();
	void insert(string);
	bool edit(int, string);
	bool del(int);
	string tolower(string);
	/////Note: doc ghi file va vector
	void fileToVector(string diachifile);
	void vectorToFile(string diachifiie);
	//chuyen du lieu tu file sang vector tu mot dia chi  truyen vao

	//chuyen du lieu trong vector vao file co dia chi truyen vao

	/////Note: Cac phuong thuc mo rong
	Object Minab(Object a, Object b);
	void output();
};
