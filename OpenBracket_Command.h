/*
@class Open Bracket Command

IMPLEMENTATION OF OPEN BRACKET COMMAND CLASS

*/
#ifndef _OPENBRACKET_COMMAND_H_
#define _OPENBRACKET_COMMAND_H_

#include "Command.h"
#include "Stack.h"

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
