#ifndef _POSTFIX_FLYWEIGHT_EVALUATOR_STRATEGY_H_
#define _POSTFIX__FLYWEIGHT_EVALUATOR_STRATEGY_H_

#include "Calculator_Strategy.h"
#include "Stack.h"
#include "Command.h"
#include "Array_Iterator.h"
#include "Flyweight_Expr_Command_Factory.h"
#include<sstream>
#include<iostream>

/*Class representation of Postfix_Flyweight_Evaluator_Strategy concrete strategy*/

class Postfix_Flyweight_Evaluator_Strategy : public Calculator_Strategy
{
public:

	Postfix_Flyweight_Evaluator_Strategy();

	virtual ~Postfix_Flyweight_Evaluator_Strategy();

	virtual void Build_Expression_Strategy();

	void Convert(Stack<Command *>& temp,Array<Command *>& postfix, Command * cmd,size_t &i);

	bool evaluate_postfix(Array_Iterator<Command *> & arr_iter, int & result);

	bool infix_to_postfix(const std::string & infix, Flyweight_Expr_Command_Factory & factory, Array<Command *>& postfix);


	

};


#endif
