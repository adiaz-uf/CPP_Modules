#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array(): _size(0)
{
    this->_array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int size): _size(size)
{
    this->_array = new T[size];
}

template<typename T>
Array<T>::Array(const Array &copy): _size(copy._size)
{
    this->_array = new T[copy.size()];
    for (unsigned int i = 0; i < copy.size(); i++)
    {
        this->_array[i] = copy._array[i];
    }
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &assign)
{
    if (this != &assign)
    {
        this->_size = assign._size;
        this->_array = new T[assign.size()];
        for (unsigned int i = 0; i < assign.size(); i++)
        {
            this->_array[i] = assign._array[i];
        }
    }
    return *this;
}

template<typename T>
Array<T>::~Array()
{  
    delete [] this->_array;
}

template<typename T>
unsigned int Array<T>::size() const
{
    return this->_size;
}

template<typename T>
T &Array<T>::operator[](unsigned int idx)
{
    if (idx >= this->size())
        throw (Array::IndexOutOfRange());
    return this->_array[idx];
}

template<typename T>
T &Array<T>::operator[](unsigned int idx) const
{
    if (idx >= this->size())
        throw (Array::IndexOutOfRange());
    return this->_array[idx];
}

# endif