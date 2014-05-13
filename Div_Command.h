/*==============================================================================

 Honor Pledge:
 I pledge that I have neither given nor received any help
 on this assignment.
 
==============================================================================*/
/*
@class Division Command

IMPLEMENTATION OF  DIVISION COMMAND CLASS

*/
#ifndef _DIV_COMMAND_H_
#define _DIV_COMMAND_H_

#include "Binary_Op_Command.h"

// Shweta, add more detailed documentation to your
// class definitions.

// Shweta, your class needs a virtual destructor since it
// has at least one virtual method.

class Div_Command: public Binary_Op_Command
{
public:

	/// DIVIDE BY ZERO EXCEPTION
	class DividebyZeroException : public std::exception
	{
		public:
		/// Default constructor.
		DividebyZeroException (void): std::exception () { }

		/**
		* Initializing constructor.
		*
		* @param[in]      msg         Error message.
		*/
		DividebyZeroException (const char * msg) : message(msg)
		{}

		virtual const char* what() const throw() { return message;}
	
		private:
		const char* message;
	};


	//** Default Constructor **//
	Div_Command();

	//** Destructor **//
	virtual ~Div_Command();

	/*Evaluate Function
	*
	*@param[in]      operand1           left hand side operator.
	*		         operand2			right hand side operator
	* @return		 int				Value of the command operation.
	*/

	virtual int evaluate(int operand1,int operand2);


	/*
	* PRECEDENCE FUNCTION
	*
	* returns the precedence of the command
	*/

	virtual int precedence();


};

#endif  // !defined _DIV_COMMAND_H_