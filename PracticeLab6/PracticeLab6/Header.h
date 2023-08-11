#pragma once
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>

class B {
	int x;
public:
	B();
	virtual ~B();
	int getX();
	void calcul();
};

class D : public B {
	int x;
public:
	D();
	~D();
	virtual int getX();
	void calcul();
};

class E : public D {
	int x;
public:
	E();
	~E();
	int getX();
	void calcul();
};