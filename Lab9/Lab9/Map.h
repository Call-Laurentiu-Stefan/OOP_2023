#pragma once

template <typename K, typename V>
class Map {
	struct MapEm {
		K key;
		V value;
		int index;
	} *container;

	int index;
	int size;
public:
	Map() {
		container = new MapEm[1];
		index = 0;
		size = 1;
	}

	MapEm* begin() {
		return &container[0];
	}

	MapEm* end() {
		return &container[index];
	}

	V& operator [] (K key)
	{
		for (int i = 0; i < index; i++)
		{
			if (container[i].key == key) {
				return container[i].value;
			}
		}
		if (index == size) {
			MapEm* newContainer = new MapEm[size * 2];
			for (int i = 0; i < size; i++) {
				newContainer[i] = container[i];
			}
			delete[] container;
			container = newContainer;
			size *= 2;
			}
		container[index].index = index;
		container[index].key = key;
		container[index].value = {};
		return container[index++].value;
	}

	void Set(K key, V value) {
		for (int i = 0; i < index; i++) {
			if (container[i].key == key) {
				container[i].value = value;
				return;
			}
		}
		printf("Nu exista element cu aceasta cheie\n");
	}

	bool Get(const K& key, V& value) {
		for (int i = 0; i < index; i++) {
			if (container[i].key == key) {
				value = container[i].value;
				return true;
			}
		}
		return false;
	}
	
	int Count() {
		return index;
	}
	
	void Clear() {
		size = 0;
		index = 0;
		delete[] container;
	}

	bool Delete(const K& key) {
		for (int i = 0; i < index; i++) {
			if (container[i].key == key) {
				for (int j = i; j < index - 1; j++) {
					container[j] = container[j + 1];
				}
				return true;
			}
		}
		return false;
	}

	bool Includes(const Map<K, V>& map) {
		bool check;
		int i, j;
		for (i = 0; i < index; i++) {
			check = 0;
			for (j = 0; j < map.index; j++) {
				if (container[i].key == map.container[j].key) {
					check = 1;
				}
			}
			if (!check) {
				return false;
			}
		}
		return true;
	}
};
