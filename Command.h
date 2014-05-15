

/*
@class Command

IMPLEMENTATION OF COMMAND CLASS

*/

#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "Stack.h"


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
