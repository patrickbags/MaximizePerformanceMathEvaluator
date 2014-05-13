
#include "ExpressionTreeEvaluator_Strategy.h"
#include "Eval_Expr_Tree.h"
#include "Expr_Tree_Builder.h"
#include<iostream>
#include<time.h>
#include<sstream>
#include<fstream>

/*Implementation of ExpressionTreeEvaluator_Strategy concrete strategy*/

ExpressionTreeEvaluator_Strategy::ExpressionTreeEvaluator_Strategy()
{
}

ExpressionTreeEvaluator_Strategy::~ExpressionTreeEvaluator_Strategy()
{
}

void ExpressionTreeEvaluator_Strategy::Build_Expression_Strategy()
{
	bool quit=false;
	bool converted = false;
	std::ifstream Exprfile;
	Exprfile.open("testExpressions.txt");
	int i=0;
	clock_t t;
	t = clock();
	do
	{
		std::string infix;
		try
		{
			quit= false;

			getline(Exprfile, infix);
	
			if(infix.compare("QUIT")==0)
			{
				quit= true;
				break;
			}
			
			evaluate_expr(infix);
		}
		catch(std::exception &e)
		{
			std::cout<<e.what()<<"\n";

		}
	}
	while(!quit);

	t =(clock() - t)/(CLOCKS_PER_SEC/1000);
	cout<<"\n Time : "<<t<<" millisecs";
	
	Exprfile.close();

}
bool ExpressionTreeEvaluator_Strategy::evaluate_expr(const std::string &infix)
{
	
	Expr_Tree_Builder builder;
	Eval_Expr_Tree evalExpr;

	if(!parse_expr(infix,builder))
		return false;

	//get the root of the tree
	Expr_Node *expr;
	expr = builder.get_expression();

	if(0 == expr)
		return false;

	
	//evaluate the expression
	expr->accept(evalExpr);

	//return the result of the evaluation
	int result=evalExpr.result();

	//***
	delete expr;
	cout<<"\n The result is : "<<result;
	return true;
}


bool ExpressionTreeEvaluator_Strategy::parse_expr(const string & infix, Expr_Tree_Builder &b)
{
	bool checkOperand= true;
	bool checkOperator = true;
	bool checkExtraClosing = true;
	
	std::istringstream input (infix);
	std::string token;

	int number=0;

	while(!input.eof())
	{
		input >> token;
		//check the token to build respective operator nodes
		if(token == "+")
		{
			if(!checkOperator)
			{
				throw CalException("Expression is Invalid");
			}
			
			b.build_add_operator();

			checkOperand = true;
			checkOperator= false;
			

		}
		else if(token == "-")
		{
			if(!checkOperator)
			{
				throw CalException("Expression is Invalid");
			}

			b.build_sub_operator();

			checkOperand = true;
			checkOperator = false;
			

		}
		else if(token == "*")
		{
			if(!checkOperator)
			{
				throw CalException("Expression is Invalid");
			}
			b.build_mul_operator();

			checkOperand = true;
			checkOperator = false;
			

		}
		else if(token == "/")
		{
			if(!checkOperator)
			{
				throw CalException("Expression is Invalid");
			}

			b.build_div_operator();

			checkOperand = true;
			checkOperator = false;
			

		}
		else if(token == "%")
		{
			if(!checkOperator)
			{
				throw CalException("Expression is Invalid");
			}

			b.build_mod_operator();

			checkOperand = true;

			checkOperator = false;
			

		}
		else if(token == "(")
		{

			b.build_open_bracket_operator();		
			


		}
		else if(token == ")")
		{
			/*Closing parenthesis indicates higher precedence
			* The operations are evaluated and the result is pushed onto the Numbers stack*/
			if(!checkExtraClosing)
					throw CalException("Expression is invalid");

			
			Eval_Expr_Tree t;
							
			while(!b.isOperatorsEmpty())
			{
				
				Binary_Expr_Node *node=(Binary_Expr_Node*)b.getTopOperator();	
				b.popOperator();
				if(node->precedence()==0)
				{
					delete node;
					break;
				}
				if(node->precedence()!=0)
				{
					node->setRightChild(b.getTopNumber());
					b.popNumber();

					node->setLeftChild(b.getTopNumber());
					b.popNumber();

					int n=node->accept(t);
					
					b.pushonNumberStack(new Num_Node(n));

				}
				delete node;
				
			}			

		}
		else
		{
			std::stringstream string_to_number(token);				
			if (!(string_to_number >> number))
			{
				throw CalException("Expression is Invalid");
			}
			b.build_number(number);
			
			checkOperand = false;
			checkOperator = true;

		}
	}
	//Build the expression tree and assign the root
	b.build_expression();
	
	return true;
}