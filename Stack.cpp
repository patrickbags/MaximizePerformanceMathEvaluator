//
// Stack
//
//#include <iostream>
#include <stdexcept>
#include <exception>

template <typename T>
Stack <T>::Stack (void)
:container_(1),
peak_(0)
{
		//*** Initially Peak is 0 since stack is empty	
	this->peak_=0;
	
}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
:container_(0),
peak_(0)
{
	//*** Calling Copy Constructor of Array
	this->container_=Array<T>(stack.container_);
	this->peak_ =stack.peak_;
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack(void)
{
	peak_=0;
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
	if(this->is_empty())
	{
		this->container_.set(this->peak_,element);
		this->peak_++;
						
	}
	else
	{
		//***resize the container to store the new element

		this->container_.resize(this->container_.max_size() + 1);
		this->container_.set(this->peak_,element);
		this->peak_++;	
		
	}	

}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
	//*** Check if stack is empty.If it is Throw Exception
	if(this->is_empty())
	{
		throw  empty_exception ("The Stack is Empty !!!");
	}
	else
	{
		this->peak_--;

	}
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	//**Checking for self assignment
	if(this != &rhs)
	{
		//**Using assignment operator of Array to assign
		this->peak_ = rhs.peak_;
		this->container_ = rhs.container_;
		
	
	}
	return *this;

	
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
 
	//***Making peak=0
	this->peak_=0;
}

template <typename T>
void Stack <T>::printS(void)
{
	if(!this->is_empty())
	{
		for(size_t i=0;i<this->size();i++)
		{
			std::cout<<this->container_[i]<<" ";
		}
		
	}
	else
	{
		std::cout<<"\nStack is Empty";	
	}
}
