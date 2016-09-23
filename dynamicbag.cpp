#include "dynamicBag.h"

bag::bag(size_t initial_capacity) {
	data = new int[initial_capacity];
	used = 0;
	capacity = initial_capacity;
}

//value semantics: how values are copied from one object to another

bag::bag(const bag& source) {
	//create a bag with the same capactiy as source bag
	data = new int[source.capacity];
	capacity = source.capacity;
	used = source.used;
	//copy the values from source to data
	for (int i = 0; i < capacity; ++i) {
		data[i] = source.data[i];
	}
}

bag::~bag() {
	delete[] data;
}

void bag::operator=(const bag& obj) {
	if (this == &obj) {
		return;
	}
	if (capacity != obj.capacity) {
		delete[] data;
		data = new int[obj.capacity];
		capacity = obj.capacity;
	}
	used = obj.used;
	for (int i = 0; i < capacity; ++i) {
		data[i] = obj.data[i];
	}
}

void bag::insert(const int& value) {
	if (capacity == used) {
		++capacity;
	}
	data[used] = value;
	++used;
}

bool bag::remove(const int& value) {
	for (int i = 0; i < used; ++i) {
		if (data[i] == value) {
			data[i] = data[used];
			--used;
			return true;
		}
	}
	return false;
}

int bag::count(const int& value) const {
	int count = 0;
	for (int i = 0; i < used; ++i) {
		if (data[i] == value) {
			++count;
		}
	}
	return count;
}
