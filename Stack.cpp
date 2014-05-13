// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack
//
//#include <iostream>
#include <stdexcept>
#include <exception>
//#include "Stack.h"

// Shweta, do not import all the symbols in a namespace into
// the global namespace. This can result in symbol clashes.

//***using namespace std;

template <typename T>
Stack <T>::Stack (void)
// Shweta, initialize each member variable on its own line.
// This is a repeat offense.
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
// Shweta, initialize each member variable on its own line.
// This is a repeat offense.
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
	//***Calling the Array's destructor and clear function
  
  // Shweta, there is no need to explicitly call the destructor
  // for the array class. It is called for your automatically
  // since the array is declared on the stack.
	//this->container_.~Array();
  
  // Shweta, there is no need to clear the stack since the
  // object is no longer usable when this method returns.
	//this->clear();

	peak_=0;
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
  // Shweta, the stack---in theory---can never be full. If you
  // run out of space, the you need to increase the size of the
  // array.
  
	
  // Shweta, it does not make sense to throw an empty exception
  // when your stack is full!
      
	if(this->is_empty())
	{
		//this->peak_=0;
		this->container_.set(this->peak_,element);
		this->peak_++;
						
	}
	else
	{
		//***resize the container to store the new element
		//int temp_size = this->container_.max_size() + 1;
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
		//***Pop data at the top
		/*T topdata = this->container_[peak_-1];
		int temp_size=this->container_.size()-1;
		this->container_.resize(temp_size);*/
		
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
  // Shweta, self assignment is allowed. You should not throw
  // an exception. Moreover, an empty exception does not make
  // sense!
	
	
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
  // Shweta, peak_ is of type size_t, which is unsigned. I think
  // you will have unwanted behavior in other parts of your program
  // if you think that it can ever be less than 0.
  
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