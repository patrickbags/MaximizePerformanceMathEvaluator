// References
#include "Mod_Command.h"
// end of References

//
// Modulus_Command
// Default constructor.
//
Mod_Command::Mod_Command()
{

}

//
// Modulus_Command
// Destructor.
//
Mod_Command::~Mod_Command()
{

}

//
// Modulus_Command
// Evaluate.
//
int Mod_Command::evaluate(int operand1, int operand2)
{
	if(operand2 ==0)
	{
		throw FloatingPointException("Divide by Zero exception !!!");
	}
	int n = (int)(operand1 % operand2);
	return n;
}

/*
* PRECEDENCE FUNCTION
*
* returns the precedence of the command
*/
int Mod_Command::precedence()
{
	//Precedence of Mod command
	return 2;
}