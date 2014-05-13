
#ifndef _EXPRESSIONTREEEVALUATOR_STRATEGY_H_
#define _EXPRESSIONTREEEVALUATOR_STRATEGY_H_

#include "Calculator_Strategy.h"
#include "Expr_Tree_Builder.h"


/*
	ExpressionTreeEvaluator is a concrete strategy class.
	It implements ExpressionTree evaluation approach
*/

class ExpressionTreeEvaluator_Strategy : public Calculator_Strategy
{
public:

	ExpressionTreeEvaluator_Strategy();

	virtual ~ExpressionTreeEvaluator_Strategy();

	virtual void Build_Expression_Strategy();

	bool parse_expr(const string & infix, Expr_Tree_Builder &b);

	bool evaluate_expr(const std::string &infix);

};


#endif