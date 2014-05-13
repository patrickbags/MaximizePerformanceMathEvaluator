
#include "Sub_Command.h"

//CONSTRUCTOR
Sub_Command::Sub_Command()
{
}

//DESTRUCTOR
Sub_Command::~Sub_Command()
{
}

/*Evaluate Function
*
*@param[in]      operand1           left hand side operator.
*		         operand2			right hand side operator
* @return		 int				subtraction of the two operands
*/

int Sub_Command::evaluate(int operand1,int operand2)
{
	int result;

	result= operand1 - operand2;
	
	return result;
}


/*
* PRECEDENCE FUNCTION
*
* returns the precedence of the command
*/


int Sub_Command::precedence()
{
	//Precedence of subtract command
	return 1;
}
