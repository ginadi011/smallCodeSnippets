
#pragma once
namespace Gina_D_Bag {
	class Bag {
	public:
		static const int CAPACITY = 30;
		Bag();
		int erase_all(const int& erased);
		bool erase_one(const int& erased);
		void insert(const int& entry);
		void operator+=(const Bag& add);
		int size() const;
		int count(const int& target) const;


	private:
		int data[CAPACITY];
		int used;
	};


}
