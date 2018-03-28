#include <iostream>
#include <list> 

template<class T, size_t N = 10>
class FixedList
{
public:
	FixedList();
	~FixedList();
	const T& get(unsigned int index) const;
	T& operator[](unsigned int index);
	int getFirstIndex(const T& t) const;
	size_t size() const;
	size_t capacity() const;
	bool add(const T& t);
	T remove(const T& t);
private:
	// private variables here
	T set[N];
};

template<class T, size_t N>
FixedList<T, N>::FixedList()
{
}

template<class T, size_t N>
FixedList<T, N>::~FixedList()
{
}

template<class T, size_t N>
const T & FixedList<T, N>::get(unsigned int index) const
{
	if(index > size())
	{
		throw std::out_of_range::out_of_range();
	}
	
	return set[index];
}

template<class T, size_t N>
T & FixedList<T, N>::operator[](unsigned int index)
{
	return T();
}

template<class T, size_t N>
int FixedList<T, N>::getFirstIndex(const T & t) const
{
	return 0;
}

template<class T, size_t N>
size_t FixedList<T, N>::size() const
{
	return sizeof(set) / sizeof(set[0])
}

template<class T, size_t N>
size_t FixedList<T, N>::capacity() const
{
	return set.size();
}

template<class T, size_t N>
bool FixedList<T, N>::add(const T & t)
{
	return false;
}

template<class T, size_t N>
T FixedList<T, N>::remove(const T & t)
{
	return T();
}
