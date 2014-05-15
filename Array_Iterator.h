
/*
@class Array Iterator

IMPLEMENTATION OF ARRAY_ITERATOR CLASS

*/

#ifndef _ARRAY_ITERATOR_H_
#define _ARRAY_ITERATOR_H_


#include "Array.h"


template <typename T>
class Array_Iterator
{
public:

	typedef T type;

	//*** CONSTRUCTOR
	Array_Iterator(Array<T> & arr);

	//*** DESTRUCTOR

	~Array_Iterator();

	/* ADVANCE FUNCTION
	* advances to the next element in the array
	*/
	bool advance();

	/*Is Done FUNCTION
	*
	* checks whether end of array is reached
	*/
	bool is_done();


	//*** OVERLOADING THE OPERATOR
	
	T * operator -> (void);
	T & operator * (void);
	

private:

	Array<T> & a_;

	size_t cur_;

};

#include "Array_Iterator.cpp"

#endif //_ARRAY_ITERATOR_H_
