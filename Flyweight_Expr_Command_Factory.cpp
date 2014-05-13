
#include "Flyweight_Expr_Command_Factory.h"

/* Implementation of Flyweight Expression Command Factory*/

Flyweight_Expr_Command_Factory::Flyweight_Expr_Command_Factory()
{
	//stateless objects are created only once and are shared
	this->add_ = new Add_Command();
	this->sub_ = new Sub_Command();
	this->mul_ = new Mul_Command();
	this->mod_ = new Mod_Command();
	this->div_ = new Div_Command();
	this->open_bracket_ = new OpenBracket_Command();
}

Flyweight_Expr_Command_Factory::~Flyweight_Expr_Command_Factory(void)
{
	//no need of explicit deletion of stateless objects.
	//deallocation takes place when destructor of Flyweight_Expr_Command_Factory is called
	delete this->add_;
	delete this->sub_;
	delete this->mul_;
	delete this->div_;
	delete this->mod_;
	delete this->open_bracket_;

}

//CREATE NUMBER COMMAND- CREATES NUMBER COMMAND
Num_Command * Flyweight_Expr_Command_Factory:: create_num_command(int num)
{
	//Num_Command is a stateful object
	return new Num_Command(num);
}

//CREATE ADD COMMAND- RETURNS ADD COMMAND
Add_Command * Flyweight_Expr_Command_Factory:: create_add_command(void)
{
	return this->add_;
}

//CREATE SUB COMMAND- RETURNS SUB COMMAND
Sub_Command * Flyweight_Expr_Command_Factory:: create_sub_command(void)
{
	return this->sub_;
}

//CREATE MUL COMMAND- RETURNS MUL COMMAND
Mul_Command * Flyweight_Expr_Command_Factory:: create_mul_command(void)
{
	return this->mul_;
}

//CREATE DIV COMMAND- RETURNS DIV COMMAND
Div_Command * Flyweight_Expr_Command_Factory:: create_div_command(void)
{
	return this->div_;
}


//CREATE MOD COMMAND- RETURNS DIV COMMAND
Mod_Command * Flyweight_Expr_Command_Factory:: create_mod_command(void)
{
	return this->mod_;
}

//CREATE OPENING PARENTHESIS COMMAND - RETURNS  OPENING_PARENTHESIS
OpenBracket_Command * Flyweight_Expr_Command_Factory::create_openbracket_command(void)
{
	return this->open_bracket_;
}