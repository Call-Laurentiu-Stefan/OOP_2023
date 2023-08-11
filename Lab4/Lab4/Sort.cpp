#include "Sort.h"

Sort::Sort(int n, int min, int max)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		vec.push_back(rand() % (max-min+1) + min);
	}
}

Sort::Sort(vector<int> v) : vec(v)
{
}

Sort::Sort(vector<int> v, int n)
{
	for (int i = 0; i < n; i++) {
		vec.push_back(v.at(i));
	}
}

Sort::Sort(int n, ...)
{
	va_list varg;
	va_start(varg, n);
	for (int i = 0; i < n; i++) {
		vec.push_back(va_arg(varg, int));
	}
	va_end(varg);
}

Sort::Sort(const char* m)
{
	char aux[100];
	char* p;
	strcpy(aux, m);
	p = strtok(aux, ",");
	while (p != NULL) {
		vec.push_back(atoi(p));
		p = strtok(NULL, ",");
	}
}

void Sort::InsertSort(bool ascendent)
{
	for (int i = 1; i < vec.size(); i++) {
		int key = vec[i];
		int j = i - 1;
		if (ascendent) {
			while (j >= 0 && vec[j] > key) {
				vec[j + 1] = vec[j];
				j--;
			}
		}else {
			while (j >= 0 && vec[j] < key) {
				vec[j + 1] = vec[j];
				j--;
			}

		}
		vec[j + 1] = key;
	}
}
//int partition(vector<int>vec, int low, int high, bool ascendent) {
//	int pivot = vec[high];
//	int i = low - 1;
//	for (int j = low; j < high; j++) {
//		if ((ascendent && vec[j] <= pivot) || (!ascendent && vec[j] >= pivot)) {
//			i++;
//			swap(vec[i], vec[j]);
//		}
//	}
//	swap(vec[i + 1], vec[high]);
//	return ++i;
//}
//
//void QuickSortHelp(vector<int> vec, int low, int high, bool ascendent){
//	if (low < high) {
//		int p = partition(vec, low, high, ascendent);
//		QuickSortHelp(vec, low, p - 1, ascendent);
//		QuickSortHelp(vec, p + 1, high, ascendent);
//	}
//}
void Sort::QuickSort(bool ascendent)
{
	//QuickSortHelp(vec, 0, vec.size()-1, ascendent);

}

void Sort::BubbleSort(bool ascendent)
{
	bool sorted = 1;
	while (sorted) {
		for (int i = 0; i < vec.size() - 1; i++) {
			sorted = false;
			for (int j = 0; j < vec.size() - i - 1; j++) {
				if (ascendent) {
					if (vec[j] > vec[j + 1]) {
						swap(vec[j], vec[j + 1]);
						sorted = true;
					}
				}
				else {
					if (vec[j] < vec[j + 1]) {
						swap(vec[j], vec[j + 1]);
						sorted = true;
					}
				}
			}
		}
	}
}

void Sort::Print()
{
	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << " ";
	}
	cout << endl;
}

int Sort::GetElementsCount()
{
	return (int)vec.size();
}

int Sort::GetElementFromIndex(int index)
{
	return vec.at(index);
}
