#include "Calculator_Strategy.h"
#include "Postfix_Evaluator_Strategy.h"
#include "ExpressionTreeEvaluator_Strategy.h"
#include "Postfix_Flyweight_Evaluator_Strategy.h"
#include<iostream>
#include<fstream>

int main(int argc,char *argv[])
{
	Calculator_Strategy *strategy;
	
	string strategyChoice = argv[1];

	if(argc == 2 )
	{
		if(strategyChoice == "postfix")
		{
			//create postfix strategy
			cout<<"\n Creating Postfix strategy ";
			strategy = new Postfix_Evaluator_Strategy();
		}
		else if(strategyChoice == "exprtree")
		{
			//create expression tree strategy
			cout<<"\n Creating Expression Tree strategy ";
			strategy = new ExpressionTreeEvaluator_Strategy();
		}
		else if(strategyChoice =="flyweight")
		{
			//create postfix flyweight strategy
			cout<<"\n Creating Postfix Flyweight strategy";
			strategy= new Postfix_Flyweight_Evaluator_Strategy();
		}
		strategy->Build_Expression_Strategy();
		
		delete strategy;
	}
	else
	{
		cout<<"\n Not enough Arguments ";
	}

	return 0;

}