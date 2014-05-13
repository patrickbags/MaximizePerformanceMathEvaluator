//==============================================================================
/** 
* Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

/**
 * @class Expr_Node
 *
 * Implementation of Expression Node.
 * Expression Node is the base class of operators and operand.
 */


#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

#include "Expr_Node_Visitor.h"
class Expr_Node
{
public:
	Expr_Node();

	virtual ~Expr_Node();


	//Used to traverse the tree

	/*
	*ACCEPT METHOD
	* @param	expression_node_visitor
	* result	returns an int 
	*
	* Accept Method is used to evaluate a binary operator.
	* object itself is passed to the Visitor.
	* and the visitor stores the result.
	*/

	virtual int accept(Expr_Node_Visitor & v) = 0;

	/*
	*PRECEDENCE METHOD
	*@param		void
	*result		int
	* Precedence Method returns the priority of an operator
	*/

	virtual int precedence()=0;
};

#endif //_EXPR_NODE_H_