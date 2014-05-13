/*==============================================================================

 Honor Pledge:
 I pledge that I have neither given nor received any help
 on this assignment.
 
==============================================================================*/

#include "Binary_Op_Command.h"


//CONSTRUCTOR
Binary_Op_Command:: Binary_Op_Command()
{
}

//DESTRUCTOR
Binary_Op_Command::~Binary_Op_Command()
{
}

/*Execute function
* 
* @param[in]      s		stack contain commands
*
*/
bool Binary_Op_Command::execute(Stack<int> &s)
{
	/*
	* Removes two top-most elements
	*/
	//cout<<"\n in Execute of binary op command : ";
	int n2= s.top();
	//cout<<"\nn2: "<<n2;
	s.pop();
	int n1= s.top();
	//cout<<"\nn1: "<<n1;
	s.pop();

	/*
	* The numbers are sent to Evaluate function for evaluation
	* 
	*/
	int result = this->evaluate(n1,n2);

	/*
	* Result is pushed onto stack
	*/
	s.push(result);

	return true;
}

