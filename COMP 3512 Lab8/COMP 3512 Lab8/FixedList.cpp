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
	for (int < i = 0; i < capacity(); i++) {
		set[i] = nullptr;
	}
}

template<class T, size_t N>
FixedList<T, N>::~FixedList()
{
	delete []set;
}

template<class T, size_t N>
const T & FixedList<T, N>::get(unsigned int index) const
{
	if(index >= size())
	{
		throw std::out_of_range::out_of_range();
	}
	
	return set[index];
}

template<class T, size_t N>
T & FixedList<T, N>::operator[](unsigned int index)
{
	if (index >= size())
	{
		throw std::out_of_range::out_of_range();
	}

	return set[index];
}

template<class T, size_t N>
int FixedList<T, N>::getFirstIndex(const T & t) const
{
	for (int i  = 0; i < size(); i++ ) 
	{
		if (set[i] == t) 
		{
			return i;
		}
	}

	return -1;
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
	if(set[size()] = t)
		return ture;

	return false;

}

template<class T, size_t N>
T FixedList<T, N>::remove(const T & t)
{
	for (int i = 0; i < capacity(); i++)
	{
		if (set[i] == t)
		{
			while (i < size()) 
			{
				set[i] = set[i + 1];
			}
			set[i + 1] = nullptr;

			return std::begin(set)
		}
	}

	return t;
}
