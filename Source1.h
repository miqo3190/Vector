class Vector
{
private:
	int size;
	int capacity;
	int* buffer;
public:
	Vector();
	~Vector();
	void push_back(int);
	int at(int);
	void pop_back();
	bool empty();
	void insert(int , int);
	void erase(int);
	void resize(int, int);
	void clear();
	int Size();
	int Capacity();
	int* data();
	void shrink_to_fit();
};
Vector::Vector()
{
	size = 0;
	capacity = 1;
	buffer = new int[capacity];
}
Vector::~Vector()
{
	delete[] buffer;
}