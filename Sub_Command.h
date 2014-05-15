/*
@class Subtract Command

IMPLEMENTATION OF SUB COMMAND CLASS

*/

#ifndef _SUB_COMMAND_H_
#define _SUB_COMMAND_H_

#include "Binary_Op_Command.h"



class Sub_Command: public Binary_Op_Command
{
public:
	//** Default Constructor **//
	Sub_Command();

	//** Destructor **//
	virtual ~Sub_Command();

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

#endif  // !defined _SUB_COMMAND_H_
