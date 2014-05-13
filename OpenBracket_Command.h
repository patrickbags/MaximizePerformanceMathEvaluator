/*==============================================================================

 Honor Pledge:
 I pledge that I have neither given nor received any help
 on this assignment.
 
==============================================================================*/
/*
@class Open Bracket Command

IMPLEMENTATION OF OPEN BRACKET COMMAND CLASS

*/
#ifndef _OPENBRACKET_COMMAND_H_
#define _OPENBRACKET_COMMAND_H_

#include "Command.h"
#include "Stack.h"

// Shweta, add more detailed documentation to your
// class definitions.

// Shweta, your class needs a virtual destructor since it
// has at least one virtual method.

// Shweta, the open bracket is not a math operator and should
// not appear in the command hiearchy. Fix your design so this
// is not the case.

class OpenBracket_Command: public Command
{
public:
	//*** DEFAULT CONSTRUCTOR

	OpenBracket_Command();

	
	//*** DESTRUCTOR

	virtual ~OpenBracket_Command();

   /*
   * EXECUTE FUNCTION
   * 
   * @param[in]      s		the opening bracket is pushed on the stack
   *
   */

	virtual bool execute(Stack <int> &s);


	/*
	* PRECEDENCE FUNCTION
	*
	* returns the precedence of the command
	*/

	virtual int precedence();

};


#endif //!defined _OPENBRACKET_COMMAND_H_