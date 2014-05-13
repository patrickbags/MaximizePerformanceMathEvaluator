//==============================================================================
/** 
* Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

/**
 * @class Sub_Node
 *
 * Implementation of Subtraction Node.
 * Subtraction Node represents an Subtract operator.
 * It is a sub-class of Binary Expression Node.
 */

#ifndef _SUB_NODE_H_
#define _SUB_NODE_H_

#include "Binary_Expr_Node.h"

class Sub_Node : public Binary_Expr_Node
{
public:
	Sub_Node();

	virtual ~Sub_Node();


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
