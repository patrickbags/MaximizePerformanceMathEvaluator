//==============================================================================
/** 
* Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

/**
 * @class Add_Node
 *
 * Implementation of Addition Node.
 * Addition Node represents an Add operator.
 * It is a sub-class of Binary Expression Node.
 */


#ifndef _ADD_NODE_H_
#define _ADD_NODE_H_

#include "Binary_Expr_Node.h"

class Add_Node : public Binary_Expr_Node
{
public:
	Add_Node();

	virtual ~Add_Node();


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
