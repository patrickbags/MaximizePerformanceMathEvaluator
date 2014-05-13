

#include "OpenBracket_Command.h"


//CONSTRUCTOR
OpenBracket_Command::OpenBracket_Command()
{

}

//DESTRUCTOR
OpenBracket_Command::~OpenBracket_Command()
{

}

//EXECUTE FUNCTION - SIMPLY RETURNS TRUE FOR OPENING PARENTHESIS COMMAND

bool OpenBracket_Command::execute(Stack<int> &s)
{
	return true;
}


/*
* PRECEDENCE FUNCTION
*
* returns the precedence of the command
*/


int OpenBracket_Command::precedence()
{
	//Precedence of Subtract command
	return 0;
}
