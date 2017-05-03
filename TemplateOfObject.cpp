#include "stdafx.h"
#include "TemplateOfObject.h"
using namespace std;
template <class Object>
int TemplateOfObject<Object>::sizeObject() {
	return v.size();
}

template <class Object>
TemplateOfObject<Object>::TemplateOfObject(string diachifile) {
	fstream f;
	string n;
	f.open(diachifile, ios::in);
	if (f.fail() == true)
	{
		cout << "File not exit!!!" << endl;
	}
	else
	{
		while (f.eof() != true)
		{
			getline(f, n);
			Object object(n);
			v.push_back(object);
		}
	}
	f.close();
}

template <class Object>
void TemplateOfObject<Object>::fileToVector(string diachifile) {
	fstream f;
	string n;
	f.open(diachifile, ios::in);
	if (f.fail() == true)
	{
		cout << "File not exit!!!" << endl;
	}
	else
	{
		while (f.eof() != true)
		{
			getline(f, n);
			Object object(n);
			v.push_back(object);
		}
	}
	f.close();
}

template <class Object>
void TemplateOfObject<Object>::vectorToFile(string diachifile) {
	fstream f;
	string s;
	f.open(diachifile, ios::out);
	for (int i = 0; i < v.size(); i++) {

		Object object(v[i], s);
		f << "tien trinh nhap :" << s << endl;
	}
	f.close();

}



template <class Object>
void TemplateOfObject<Object>::pushObject(Object const& elem) {
	// phu them ban sao cua phan tu da truyen 
	v.push_back(elem);
}

template <class Object>
bool TemplateOfObject<Object>::emptyObject()const {
	return v.empty();
}

template <class Object>
void TemplateOfObject<Object>::output() {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
}

template <class Object>
void TemplateOfObject<Object>::popObject() {
	if (v.empty()) {
		//throw out_of_range("List da trong! ");
		cout << "List da trong! " << endl;
	}
	else
		v.pop_back();
}

template <class Object>
Object TemplateOfObject<Object>::topObject() const {
	if (v.empty()) {
		cout << "List da trong!" << endl;
	}
	// tra ve ban sao cua phan tu cuoi cung 
	else
		return v.back();
}

template <class Object>
Object TemplateOfObject<Object>::Minab(Object a, Object b) {
	return a > b ? a : b;
}

template <class Object>
Object TemplateOfObject<Object>::Index(int idx) {
	return v[idx];
}

template<class Object>
bool TemplateOfObject<Object>::edit(int index, string s) {
	//T tmp(s);
	if (index > l.size() || index < 0) return false;
	else
	{
		l[index] = T(s);
	}
	return true;
}
template<class Object>
bool TemplateOfObject<Object>::del(int index) {
	if (index > l.size() || index < 0) return false;
	else
	{
		l.erase(l.begin() + index);
	}
	return true;
}
template<class Object>
string TemplateOfObject<Object>::tolower(string s){
	string tmp = "";
	std::locale loc;
	for (int i = 0; i < s.length(); i++)
		tmp += std::tolower(s[i], loc);
	return tmp;
}
template<class Object>
void TemplateOfObject<Object>::insert(string s) {

	l.push_back(T(s));
}

