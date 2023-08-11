#pragma once

class Compare

{

public:

	virtual int CompareElements(void* e1, void* e2) = 0 {
		return 0;
	};

};

template<class T>

class ArrayIterator

{

private:

	int Current; // mai adaugati si alte date si functii necesare pentru iterator

public:

	ArrayIterator() {
		Current = 0;
	}

	ArrayIterator& operator ++ ();

	ArrayIterator& operator -- ();

	bool operator= (ArrayIterator<T>&);

	bool operator!=(ArrayIterator<T>&);

	T* GetElement() {
		return Current;
	};

};

template<class T>

class Array

{

private:

	T** List; // lista cu pointeri la obiecte de tipul T*

	int Capacity; // dimensiunea listei de pointeri

	int Size; // cate elemente sunt in lista

public:

	Array() {
		Capacity = 0;
		Size = 0;
		List = nullptr;
	} // Lista nu e alocata, Capacity si Size = 0

	~Array() {
		for (int i = 0; i < Capacity; i++) {
			delete List[i];
		}
		delete[]List;
		Capacity = 0;
		Size = 0;
		
	}; // destructor

	Array(int capacity) {
		if (capacity <= 0) {
			throw "Capacity should be at least 1";
		}
		Capacity = capacity;
		Size = 0;
		List = new T * [capacity];
		for (int i = 0; i < Capacity; i++){
			List[i] = new T;
		}
	} // Lista e alocata cu 'capacity' elemente
	
	Array(const Array<T>& otherArray) {
		Capacity = otherArray.Capacity;
		Size = otherArray.Size;
		List = new T*[Capacity];
		for (int i = 0; i < Capacity; i++) {
			List[i] = new T;
			*List[i] = *otherArray.List[i];
		}
	} // constructor de copiere



	T& operator[] (int index) {
		if (index > Capacity) {
			throw "Index out of range";
		}
		return *List[index];
	}; // arunca exceptie daca index este out of range



	const Array<T>& operator+=(const T& newElem) {
		if (Size == Capacity) {
			throw "Maximum capacity reached";
		}
		*(List[Size++]) = newElem;
		return *this;
	}; // adauga un element de tipul T la sfarsitul listei si returneaza this

	const Array<T>& Insert(int index, const T& newElem) {
		/*if (Size == Capacity) {
			throw "Maximum capacity reached";
		}
		else if (index >= Capacity) {
			throw "Index out of bounds";
		}*/
		for (int i = Size; i > index; i--) {
			*List[i] = *List[i-1];
		}
		*List[index] = newElem;
		Size++;
		return *this;

	}; // adauga un element pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie

	const Array<T>& Insert(int index, const Array<T> otherArray) {

	}; // adauga o lista pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie

	const Array<T>& Delete(int index) {
		for (int i = index; i < Size-1; i++) {
			*List[i] = *List[i + 1];
		}
		List[Size--] = new T;
		return *this;
	}; // sterge un element de pe pozitia index, returneaza this. Daca index e invalid arunca o exceptie



	bool operator=(const Array<T>& otherArray) {
		Capacity = otherArray.Capacity;
		Size = otherArray.Size;
		List = new T * [Capacity];
		for (int i = 0; i < Capacity; i++) {
			List[i] = new T;
			*List[i] = *otherArray.List[i];
		}
		return true;
	}

	void Sort() {
		sort(List, Size);
	}; // sorteaza folosind comparatia intre elementele din T

	void Sort(int(*compare)(const T&, const T&)) {
	}; // sorteaza folosind o functie de comparatie

	void Sort(Compare* comparator) {
		for (int i = 0; i < Size-1; i++) {
			if (comparator->CompareElements(List[i], List[i + 1]) == 1) {
				T aux = List[i];
				List[i] = List[i+1];
				List[i + 1] = aux;
			}
		}
	}; // sorteaza folosind un obiect de comparatie



	// functii de cautare - returneaza pozitia elementului sau -1 daca nu exista

	int BinarySearch(const T& elem) {
		sort(List);
		int L = 0;
		int H = Size;
		int M;
		while (L < H) {
			M = (L + H) / 2;
			if (*List[M] == *elem) {
				return M;
			}
			else if(*List[M]<*elem) {
				L = M + 1;
			}
			else {
				H = M - 1;
			}
		}
		return -1;
	}; // cauta un element folosind binary search in Array

	int BinarySearch(const T& elem, int(*compare)(const T&, const T&));//  cauta un element folosind binary search si o functie de comparatie

	int BinarySearch(const T& elem, Compare* comparator);//  cauta un element folosind binary search si un comparator



	int Find(const T& elem) {
		for (int i = 0; i < Size; i++) {
			if (*elem == *List[i]) {
				return i;
			}
		}
		return -1;
	}; // cauta un element in Array

	int Find(const T& elem, int(*compare)(const T&, const T&));//  cauta un element folosind o functie de comparatie

	int Find(const T& elem, Compare* comparator);//  cauta un element folosind un comparator



	int GetSize() {
		return Size;
	}

	int GetCapacity() {
		return Capacity;
	}



	ArrayIterator<T> GetBeginIterator();

	ArrayIterator<T> GetEndIterator();

};


