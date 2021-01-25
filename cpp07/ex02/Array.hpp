# include <iostream>

template<class T>
class Array
{
	class OutOfRange : public std::exception
	{
		public:
			OutOfRange	&operator=(const OutOfRange &other);
			OutOfRange(void);
			~OutOfRange(void) _NOEXCEPT {};
            OutOfRange(const OutOfRange &other);
            
            
			const char*	what() const throw() ;
	};


	public:
		T		*array;
		unsigned int	len;

	public:
				Array(void);

				Array(unsigned int n);
                
				Array(const Array &other);

				~Array(void);

	public:
		T		&operator[](unsigned int index) const;
		Array		&operator=(const Array &other);

	public:
		unsigned int	size(void) const;

};

template<typename T>
Array<T>::OutOfRange::OutOfRange(void)
{}

// OutofRange 클래스 밑의 OutOfRange함수.
template<typename T>
Array<T>::OutOfRange::OutOfRange(const OutOfRange &) {}


template<typename T>
Array<T> &Array<T>::operator =(const Array &other)
{
    if (this->size() != other.size())
    {
        delete [] this->array;
        this->array = new T[other.size()];
        this->len = other.size();
    }
    for (unsigned int i = 0; i < other.size(); i++)
        this->array[i] = other[i];
    return (*this);
}

template<typename T>
const char * Array<T>::OutOfRange::what() const throw()
{
    return ("Cannot approach indicated index");
}

template<typename T>
T &Array<T>::operator[](unsigned int index) const
{
    if (index >= this->len)
        throw Array<T>::OutOfRange();
    return (this->array[index]);
}


template<typename T>
Array<T>::Array(void)
:
    array(
        new T[0],
        len(0))
{}

template<typename T>
Array<T>::Array(unsigned int n)
:
        
        len(n)
{
    this->array = new T[n];
    this->len = n;
}

template<typename T>
Array<T>::Array(const Array & copy)
{
    this->array = copy.array;
    this->len = copy.len;
}

template<typename T>
Array<T>::~Array(void)
{
    delete [] this->array;
}

template<typename T>
unsigned int Array<T>::size() const
{
    return (this->len);
}
