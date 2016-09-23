#include "bag.h"

using namespace Gina_D_Bag;

Bag::Bag() { used = 0; }

void Bag::insert(const int& entry) {
	if (used < CAPACITY) {
		data[used] = entry;
		++used;
	}
	else return;
}

bool Bag::erase_one(const int& target) {
	if (used == 0) {
		return false;
	}
	else {
		for (int i = 0; i < used, ++i) {
			if (data[i] == target) {
				data[i] = data[--used];
				return true;
			}
			else {
				return false;
			}
		}
	}
}

int Bag::erase_all(const int& target) {
	int count = 0;
	if (used == 0) {
		return 0;
	}
	else {
		for (int i = 0; i < used; ++i) {
			if (data[i] == target) {
				++count;
				--used;
				data[i] = data[used];
			}
		}
	}
	return count;
}

void Bag::operator+=(const Bag& add) {
	if (add.size() + size() <= 0) {
		for (int i = 0; i < add.used; ++i) {
			data[used] = add.data[i];
			++used;
		}
	}
} 
