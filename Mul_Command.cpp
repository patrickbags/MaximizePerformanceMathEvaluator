
#include "Mul_Command.h"


//CONSTRUCTOR
Mul_Command::Mul_Command()
{
}

//DESTRUCTOR
Mul_Command::~Mul_Command()
{
}

/*Evaluate Function
*
*@param[in]      operand1           left hand side operator.
*		         operand2			right hand side operator
* @return		 int				Value of the command operation.
*/

int Mul_Command::evaluate(int operand1,int operand2)
{
	int result;

	result= operand1 * operand2;
	
	return result;
}

/*
* PRECEDENCE FUNCTION
*
* returns the precedence of the command
*/


int Mul_Command::precedence()
{
	//Precedence of Multiply command
	return 2;
}
