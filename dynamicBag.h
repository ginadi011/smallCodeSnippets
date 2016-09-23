

class bag {
public:
	static const int DEFAULT_CAPACITY = 30;
	bag(size_t initial_capacity = DEFAULT_CAPACITY);
	bool remove(const int& data);
	//if value in bag value erased
	int count (const int& data) const;
	//number of times target is in bag
	//value semantics
	bag(const bag& source);
	~bag();
	void operator=(const bag& obj);
	void insert(const int& value);
	//value inserted into bag
private:
	int* data;
	int used;
	int capacity;
};
