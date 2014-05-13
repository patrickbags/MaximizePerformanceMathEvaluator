/*==============================================================================

 Honor Pledge:
 I pledge that I have neither given nor received any help
 on this assignment.
 
==============================================================================*/

/*
@class Command

IMPLEMENTATION OF COMMAND CLASS

*/

#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "Stack.h"

// Shweta, add more detailed documentation to your
// class definitions.

// Shweta, your class needs a virtual destructor since it
// has at least one virtual method.

class Command
{
public:

	//** Default Constructor **//
	Command();

	//** Destructor **//
	virtual ~Command();


   /*
   * EXECUTE FUNCTION
   * 
   * @param[in]      s		STACK CONTAIN COMMANDS
   *
   */

	virtual bool execute(Stack<int> &s)=0;


	/*
	* PRECEDENCE FUNCTION
	*
	* returns the precedence of the command
	*/
	virtual int precedence()=0;


};

#endif //!defined _COMMAND_H_