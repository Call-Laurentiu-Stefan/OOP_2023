#pragma once
#include "Complex.h"


template<class T>

class Colectie {
	vector<T> colectie;
public:
	Colectie();
	~Colectie();
	void Insert(T n);
	void Sort();
	void Print();
};

template<class T>
Colectie<T>::Colectie()
{
	colectie.clear();
}

template<class T>
Colectie<T>::~Colectie()
{
	colectie.clear();
}

template<class T>
void Colectie<T>::Insert(T n) {
	/*if (find(colectie.begin(), colectie.end(), n) == colectie.end()) {
		colectie.push_back(n);
	}*/
	auto res = find_if(colectie.begin(), colectie.end(), [n](T x) {return x == n; });
	if (res == colectie.end()) {
		colectie.push_back(n);
	}
 }

template<class T>
void Colectie<T>::Sort() {
	sort(colectie.begin(), colectie.end());
}

template<class T>
void Colectie<T>::Print() {
	for (auto i : colectie) {
		cout << i << " ";
	}
}