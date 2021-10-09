#include "Source1.h"
void Vector::push_back(int elem)
{
	if (size == capacity)
	{
		capacity *= 2;
		int* tmp = new int[capacity];
		for (int i = 0; i < size; i++)
		{
			tmp[i] = buffer[i];
		}
		delete[] buffer;
		buffer = tmp;
	}
	buffer[size] = elem;
	size++;
}
int Vector::at(int index)
{
	if (index < size && index >= 0)
	{
		return buffer[index];
	}
}
void Vector::pop_back()
{
	size--;
}
bool Vector::empty()
{
	if (size != 0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void Vector::insert(int index , int elem)
{
	if (index >= 0 && index < size)
	{
		int* tmp1 = new int[size + 1];
		for (int i = 0; i < index; ++i)
		{
			tmp1[i] = buffer[i];
		}
		tmp1[index] = elem;
		for (int i = index + 1; i < size; ++i)
		{
			tmp1[i] = buffer[i];
		}
		size++;
		delete[] buffer;
		buffer = tmp1;
	}
}
void Vector::erase(int id)
{
	if(id >= 0 && id < size)
	{
		for (int i = id; i < size - 1; ++i)
		{
			buffer[i] = buffer[i + 1];
		}
	}
}
void Vector::resize(int size_1, int arg)
{
	
	if (size_1 < size)
	{
		int* tmp = new int[size_1];
		for (int i = 0; i < size_1; ++i)
		{
			tmp[i] = buffer[i];
		}
		delete[] buffer;
		buffer = tmp;
		size = size_1;
	}
	if (size_1 > size && size_1 < capacity)
	{
		int* tmp = new int[size_1];
		for (int i = 0; i < size; ++i)
		{
			tmp[i] = buffer[i];
		}
		for (int i = size; i < size_1; i++)
		{
			tmp[i] = arg;
		}
		delete[] buffer;
		buffer = tmp;
		size = size_1;
	}
	if (size_1 > size && size_1 > capacity)
	{
		int* tmp = new int[size_1];
		capacity = size_1 * 2;
		for (int i = 0; i < size; ++i)
		{
			tmp[i] = buffer[i];
		}
		for (int i = size; i < size_1; i++)
		{
			tmp[i] = arg;
		}
		delete[] buffer;
		buffer = tmp;
		size = size_1;
	}
}
void Vector::clear()
{
	size = 0;
}
int Vector::Size()
{
	return size;
}
int Vector::Capacity()
{
	return capacity;
}
int* Vector::data()
{
	return buffer;
}
void Vector::shrink_to_fit()
{
	capacity = size;
}