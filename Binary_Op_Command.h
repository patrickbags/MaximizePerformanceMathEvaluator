
/*
@class Binary Operator Command

IMPLEMENTATION OF  BINARY OPERATOR COMMAND CLASS

*/
#ifndef _BINARY_OP_COMMAND_H_
#define _BINARY_OP_COMMAND_H_

#include "Command.h"


class Binary_Op_Command: public Command
{
public:

	//** Default Constructor **//
	Binary_Op_Command();

	//** Destructor **//
	virtual ~Binary_Op_Command();


   /*Execute function
   * 
   * @param[in]      s		stack contain commands
   *
   */
	
	virtual bool execute(Stack <int> &s);

	/*Evaluate Function- pure virtual
	*
	*@param[in]      operand1           left hand side operator.
	*		         operand2			right hand side operator
	* @return		 int				Value of the command operation.
	*/

	virtual int evaluate (int operand1,int operand2) = 0;

	/*
	* PRECEDENCE FUNCTION
	*
	* returns the precedence of the command
	*/

	virtual int precedence()=0;


};

#endif //!defined _BINARY_OP_COMMAND_H_
