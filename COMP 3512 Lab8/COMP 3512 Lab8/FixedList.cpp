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
	// TODO: insert return statement here
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
	return size_t();
}

template<class T, size_t N>
size_t FixedList<T, N>::capacity() const
{
	return size_t();
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
