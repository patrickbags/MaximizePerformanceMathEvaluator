
#include "Div_Command.h"
#include <exception>

//CONSTRUCTOR
Div_Command::Div_Command()
{
}

//DESTRUCTOR
Div_Command::~Div_Command()
{
}

/*Evaluate Function
*
*@param[in]      operand1           left hand side operator.
*		         operand2			right hand side operator
* @return		 int				Value of the command operation.
*/

int Div_Command::evaluate(int operand1,int operand2)
{
	//throws exception if operand2 is 0
	if(operand2 == 0)
	{
		throw DividebyZeroException("Divisor is zero !!!");	
		//throw std::exception("Divide by Zero Exception");
	}
	int result;
	result= (int)operand1 / operand2;
	return result;	
	
	
}


/*
* PRECEDENCE FUNCTION
*
* returns the precedence of the command
*/


int Div_Command::precedence()
{
	//Precedence of Divide command
	return 2;
}
