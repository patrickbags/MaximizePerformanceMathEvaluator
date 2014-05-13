

//#include "Array_Iterator.h"


//PARAMETERISED CONSTRUCTOR
template <typename T>
Array_Iterator <T>::Array_Iterator(Array <T> & arr)
:	a_(arr),
	cur_(0)
{

}

//DESTRUCTOR
template <typename T>
Array_Iterator<T>::~Array_Iterator()
{
}


//ADVANCE FUNCTION - ADVANCES TO THE NEXT ELEMENT IN ARRAY
template <typename T>
bool Array_Iterator <T>::advance()
{
	++this->cur_;
	return true;
}

//IS_DONE FUNCTION - CHECKS WHETHER END OF ARRAY IS REACHED
template <typename T>
bool Array_Iterator <T>::is_done()
{
	return this->cur_ >= this->a_.cur_size_;
}

//OVERLOADS OPERATOR '->'
template <typename T>
T * Array_Iterator <T>:: operator->()
{
	return &this->a_.data_[this->cur_];
}

//OVERLOADS OPERATOR '*'
template <typename T>
T & Array_Iterator<T>:: operator * (void)
{
	return this->a_.data_[this->cur_];
}