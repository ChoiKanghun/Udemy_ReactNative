#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>
# include <algorithm>
# include <iostream>


template<typename T> 
class MutantStack;

template<typename T> 
class MutantStack : public std::stack<T>
{
    public:

        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack() : std::stack<T>() {};
        MutantStack(const MutantStack& copy) : std::stack<T>(copy){};
        virtual ~MutantStack() {};

        MutantStack &operator=(const MutantStack &op)
        {
            if (this == &op)
                return (*this);
            std::stack<T>::operator=(op);
            return (*this);
        };
	
	// stack은 Container_type 형 c를 protected 변수로 가지고 있음.
	/*

		class std::stack {

    	protected:

        	C c;

		public:
		...
	*/
        iterator begin() { return (std::stack<T>::c.begin()); }

        iterator end() { return (std::stack<T>::c.end()); }

};

#endif
