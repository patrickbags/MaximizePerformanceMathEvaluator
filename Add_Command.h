/*==============================================================================

 Honor Pledge:
 I pledge that I have neither given nor received any help
 on this assignment.
 
==============================================================================*/
/*
@class Add Command

IMPLEMENTATION OF  ADD COMMAND CLASS

*/

#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

#include "Binary_Op_Command.h"

// Shweta, add more detailed documentation to your
// class definitions.

// Shweta, your class needs a virtual destructor since it
// has at least one virtual method.

class Add_Command: public Binary_Op_Command
{
public:
	//** Default Constructor **//
	Add_Command();

	//** Destructor **//
	virtual ~Add_Command();

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

#endif  // !defined _ADD_COMMAND_H_