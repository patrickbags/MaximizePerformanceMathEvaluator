
#include "Add_Command.h"


//CONSTRUCTOR
Add_Command::Add_Command()
{
}


//DESTRUCTOR
Add_Command::~Add_Command()
{
}

/*Evaluate Function
*
*@param[in]      operand1           left hand side operator.
*		         operand2			right hand side operator
* @return		 int				Value of the command operation.
*/
int Add_Command::evaluate(int operand1,int operand2) 
{
	return (operand1 + operand2);
}

/*
* PRECEDENCE FUNCTION
*
* returns the precedence of the command
*/


int Add_Command::precedence()
{
	//Precedence of Add command
	return 1;
}
