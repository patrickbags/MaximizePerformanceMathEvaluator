
/*==============================================================================

 Honor Pledge:
 I pledge that I have neither given nor received any help
 on this assignment.
 
==============================================================================*/
/*
@class Stack Expression Command Factory 

IMPLEMENTATION OF STACK_EXPRESSION_COMMAND_FACTORY CLASS

*/
#ifndef STACK_EXPR_COMMAND_FACTORY_H_
#define STACK_EXPR_COMMAND_FACTORY_H_


#include "Expr_Command_Factory.h"

// Shweta, add more detailed documentation to your
// class definitions.

// Shweta, your class needs a virtual destructor since it
// has at least one virtual method.

class Stack_Expr_Command_Factory : public Expr_Command_Factory
{
public:

	Stack_Expr_Command_Factory();


	///DESTRUCTOR
	virtual ~Stack_Expr_Command_Factory(void);

	/* CREATE NUMBER COMMAND FUNCTION
	*  creates a number command
	* @param[in]	num			number 
	*/
	virtual Num_Command * create_num_command(int num);


	/* CREATE ADD COMMAND FUNCTION
	* creates a addition command
	* 
	*/
	virtual Add_Command * create_add_command(void);

	/* CREATE SUB COMMAND FUNCTION
	* creates a subtract command
	* 
	*/

	virtual Sub_Command * create_sub_command(void);

	/* CREATE DIV COMMAND FUNCTION
	* creates a divide command
	* 
	*/
	virtual Div_Command * create_div_command(void);
	
	/* CREATE MUL COMMAND FUNCTION
	* creates a multiply command
	* 
	*/
	virtual Mul_Command * create_mul_command(void);


	/* CREATE MOD COMMAND FUNCTION
	* creates a modulus command
	* 
	*/
	virtual Mod_Command * create_mod_command(void);


	/* CREATE OPEN BRACKET COMMAND FUNCTION
	*  creates a open bracket command
	* 
	*/
	virtual OpenBracket_Command * create_openbracket_command(void);
};

#endif //!defined STACK_EXPR_COMMAND_FACTORY_H_