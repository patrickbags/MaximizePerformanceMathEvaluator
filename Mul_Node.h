/**
 * @class Mul_Node
 *
 * Implementation of Multiplication Node.
 * Multiplication Node represents an Multiply operator.
 * It is a sub-class of Binary Expression Node.
 */

#ifndef _MUL_NODE_H_
#define _MUL_NODE_H_

#include "Binary_Expr_Node.h"


class Mul_Node : public Binary_Expr_Node
{

public:

	Mul_Node();

	virtual ~Mul_Node();


	/*
	*ACCEPT METHOD
	* @param	expression_node_visitor
	* result	returns an int 
	*
	* Accept Method is used to evaluate a binary operator.
	* object itself is passed to the Visitor.
	* and the visitor stores the result.
	*/
	virtual int accept(Expr_Node_Visitor & v);

	/*
	*PRECEDENCE METHOD
	*@param		void
	*result		int
	* Precedence Method returns the priority of an operator
	*/
	virtual int precedence();

};

#endif
