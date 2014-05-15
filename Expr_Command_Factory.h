/*
@class Expression Command Factory

IMPLEMENTATION OF EXPR_COMMAND_FACTORY CLASS

*/

#ifndef EXPR_COMMAND_FACTORY_H_
#define EXPR_COMMAND_FACTORY_H_

#include "Num_Command.h"
#include "Add_Command.h"
#include "Sub_Command.h"
#include "Div_Command.h"
#include "Mul_Command.h"
#include "Mod_Command.h"
#include "OpenBracket_Command.h"

class Expr_Command_Factory
{
public:
	Expr_Command_Factory();


	//DESTRUCTOR
	virtual ~Expr_Command_Factory(void);


	/* CREATE NUMBER COMMAND FUNCTION
	*  creates a number command
	* @param[in]	num			number 
	*/

	virtual Num_Command * create_num_command(int num)=0;

	/* CREATE ADD COMMAND FUNCTION
	* creates a addition command
	* 
	*/
	
	virtual Add_Command * create_add_command()=0;

	/* CREATE SUB COMMAND FUNCTION
	* creates a subtract command
	* 
	*/

	virtual Sub_Command * create_sub_command()=0;


	/* CREATE MUL COMMAND FUNCTION
	* creates a Multiply command
	* 
	*/

	virtual Mul_Command * create_mul_command()=0;

	/* CREATE DIV COMMAND FUNCTION
	* creates a multiply command
	* 
	*/
	virtual Div_Command * create_div_command()=0;


	/* CREATE MOD COMMAND FUNCTION
	* creates a modulus command
	* 
	*/
	virtual Mod_Command * create_mod_command()=0;

	/* CREATE OPEN BRACKET COMMAND FUNCTION
	*  creates a open bracket command
	* 
	*/
	virtual OpenBracket_Command * create_openbracket_command()=0;

private:

	Expr_Command_Factory(const Expr_Command_Factory &);

	Expr_Command_Factory & operator = (const Expr_Command_Factory &);	
};

#endif //!EXPR_COMMAND_FACTORY_H
