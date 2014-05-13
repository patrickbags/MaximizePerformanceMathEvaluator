
#include "Stack_Expr_Command_Factory.h"

Stack_Expr_Command_Factory::Stack_Expr_Command_Factory()
{

}

Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory(void)
{
	//donothing
}

//CREATE NUMBER COMMAND- CREATES NUMBER COMMAND
Num_Command * Stack_Expr_Command_Factory:: create_num_command(int num)
{
	return new Num_Command(num);
}

//CREATE ADD COMMAND- CREATES ADD COMMAND
Add_Command * Stack_Expr_Command_Factory:: create_add_command(void)
{
	return new Add_Command();
}

//CREATE SUB COMMAND- CREATES SUB COMMAND
Sub_Command * Stack_Expr_Command_Factory:: create_sub_command(void)
{
	return new Sub_Command();
}

//CREATE MUL COMMAND- CREATES MUL COMMAND
Mul_Command * Stack_Expr_Command_Factory:: create_mul_command(void)
{
	return new Mul_Command();
}

//CREATE DIV COMMAND- CREATES DIV COMMAND
Div_Command * Stack_Expr_Command_Factory:: create_div_command(void)
{
	return new Div_Command();
}


//CREATE MOD COMMAND- CREATES DIV COMMAND
Mod_Command * Stack_Expr_Command_Factory:: create_mod_command(void)
{
	return new Mod_Command();
}

//CREATE OPENING PARENTHESIS COMMAND
OpenBracket_Command * Stack_Expr_Command_Factory::create_openbracket_command(void)
{
	return new OpenBracket_Command();
}