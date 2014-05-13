// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.



#include "Num_Command.h"

//CONSTRUCTOR
Num_Command::Num_Command(int n)
:n_(n)
{

}

//DESTRUCTOR
Num_Command::~Num_Command()
{
	//cout<<"\n in destructor of number command  ";
}

/*EXECUTE FUNCTION
PUSHES ELEMENT ONTO THE STACK
*/
bool Num_Command::execute(Stack<int> &s)
{
	//cout<<"\n pushing number "<<n_<<" on stack ";
	s.push(n_);
	return true;
}


/*
* PRECEDENCE FUNCTION
*
* returns the precedence of the command
*/


int Num_Command::precedence()
{
	//Precedence of Number command
	return -1;
}

