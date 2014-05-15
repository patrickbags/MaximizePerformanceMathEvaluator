
/*
@class Number Command

IMPLEMENTATION OF NUMBER COMMAND CLASS

*/

#ifndef _NUM_COMMAND_H_
#define _NUM_COMMAND_H_

#include "Command.h"
#include "Stack.h"



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
