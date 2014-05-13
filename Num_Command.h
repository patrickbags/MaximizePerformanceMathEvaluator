/*==============================================================================

 Honor Pledge:
 I pledge that I have neither given nor received any help
 on this assignment.
 
==============================================================================*/
/*
@class Number Command

IMPLEMENTATION OF NUMBER COMMAND CLASS

*/

#ifndef _NUM_COMMAND_H_
#define _NUM_COMMAND_H_

#include "Command.h"
#include "Stack.h"

// Shweta, add more detailed documentation to your
// class definitions.

// Shweta, your class needs a virtual destructor since it
// has at least one virtual method.

class Num_Command: public Command
{
public:
	//*** DEFAULT CONSTRUCTOR

	Num_Command();

	//*** CONSTRUCTOR WITH Number

	Num_Command(int n);


	//*** DESTRUCTOR

	virtual ~Num_Command();

	/*
   * EXECUTE FUNCTION
   * 
   * @param[in]      s		the number is pushed on the stack
   *
   */

	virtual bool execute(Stack <int> &s);


	/*
	* PRECEDENCE FUNCTION
	*
	* returns the precedence of the command
	*/

	virtual int precedence();

private:
	//*** NUMBER

	int n_;

};


#endif //!defined _NUM_COMMAND_H_