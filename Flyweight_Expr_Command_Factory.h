/*
@class Flyweight Expression Command Factory 

IMPLEMENTATION OF FLYWEIGHT_EXPRESSION_COMMAND_FACTORY CLASS

*/
#ifndef FLYWEIGHT_EXPR_COMMAND_FACTORY_H_
#define FLYWEIGHT_EXPR_COMMAND_FACTORY_H_


#include "Expr_Command_Factory.h"
#include "Add_Command.h"
#include "Sub_Command.h"
#include "Mul_Command.h"
#include "Div_Command.h"
#include "Mod_Command.h"

class Flyweight_Expr_Command_Factory : public Expr_Command_Factory
{
public:

	Flyweight_Expr_Command_Factory();


	///DESTRUCTOR
	virtual ~Flyweight_Expr_Command_Factory(void);

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


private:

	Add_Command *add_;
	Sub_Command *sub_;
	Mul_Command *mul_;
	Div_Command *div_;
	Mod_Command *mod_;
	OpenBracket_Command *open_bracket_;
	
};

#endif 