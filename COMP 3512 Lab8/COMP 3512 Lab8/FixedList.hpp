#include <iostream>
#include <list>
#include <string>

template<class T, size_t N>
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
	size_t numData; // number of data
	T set[N]; // array for contain data
};

//default constructor
template<class T, size_t N>
FixedList<T, N>::FixedList()
{
	numData = 0;
}

//destructor
template<class T, size_t N>
FixedList<T, N>::~FixedList()
{
}

//get function.
//If orderd index number is valid, return value.
//If not, throw out_of_range as error.
template<class T, size_t N>
const T & FixedList<T, N>::get(unsigned int index) const
{
	if (index < size())
	{
		return set[index];
	}

	throw std::out_of_range("Out of Range");

}

//operator[] function.
//If orderd index number is valid, return value.
//If not, throw out_of_range as error.
template<class T, size_t N>
T & FixedList<T, N>::operator[](unsigned int index)
{
	if (index < size())
	{
		return set[index];
	}

	throw std::out_of_range("Out of Range");
}

//getFirstIndex function.
//If orderd data exists at array, return the index number.
//If not, return -1.
template<class T, size_t N>
int FixedList<T, N>::getFirstIndex(const T & t) const
{
	for (int i = 0; i < size(); i++)
	{
		if (set[i] == t)
		{
			return i;
		}
	}

	return -1;
}

//size function.
//return the number od data on object.
template<class T, size_t N>
size_t FixedList<T, N>::size() const
{
	return numData;
}

//capacity function.
//return size of array.
template<class T, size_t N>
size_t FixedList<T, N>::capacity() const
{
	return sizeof(set) / sizeof(set[0]);
}

//add function.
//If the array has space, contain data and count up numData.
//Then return ture. If could not, false.
template<class T, size_t N>
bool FixedList<T, N>::add(const T & t)
{
	if (size() < capacity())
	{
		set[size()] = t;
		numData++;

		return true;
	}

	return false;
}

//remove function.
//Try to remove orderd data by over writing next data.
//Then sift all data to next, and reduce 1 from numData.
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
				i++;
			}
			numData--;
			return t;
		}
	}

	return t;
}