/**
 * @class Open_Bracket_Node
 *
 * Implementation of Opening Bracket Node.
 * This represents an Open Bracket
 * It is a sub-class of Expression Node.
 */
#ifndef _OPEN_BRACKET_NODE_H_
#define _OPEN_BRACKET_NODE_H_

#include "Expr_Node.h"

class Open_Bracket_Node :public Expr_Node
{
public:

	Open_Bracket_Node();

	virtual ~Open_Bracket_Node();

	/*
	*ACCEPT METHOD
	* @param	expression_node_visitor
	* result	returns an int 
	*
	* Accept Method is used to evaluate a binary operator.
	* object itself is passed to the Visitor.
	* and the visitor stores the result.
	*/
	virtual int accept(Expr_Node_Visitor &v);

	/*
	*PRECEDENCE METHOD
	*@param		void
	*result		int
	* Precedence Method returns the priority of an operator
	*/
	virtual int precedence();


};

#endif

