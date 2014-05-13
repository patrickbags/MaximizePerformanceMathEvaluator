
#ifndef _EXPR_TREE_BUILDER_H_
#define _EXPR_TREE_BUILDER_H_

#include "Expr_Builder.h"


class Expr_Tree_Builder : public Expr_Builder
{

public:

	Expr_Tree_Builder();

	virtual ~Expr_Tree_Builder();


	/*
	*BUILD NUMBER METHOD
	*@param		int
	*result		void
	* This method builds a number node
	*/
	virtual void build_number(int n);


	/*
	*BUILD ADD METHOD
	*@param		void
	*result		void
	* This method builds an Add node
	*/
	virtual void build_add_operator();


	/*
	*BUILD SUBTRACT METHOD
	*@param		void
	*result		void
	* This method builds a subtract node
	*/

	virtual void build_sub_operator();


	/*
	*BUILD MULTIPLY METHOD
	*@param		void
	*result		void
	* This method builds a number node
	*/
	virtual void build_mul_operator();


	/*
	*BUILD DIVIDE METHOD
	*@param		void
	*result		void
	* This method builds a number node
	*/
	virtual void build_div_operator();


	/*
	*BUILD MODULUS METHOD
	*@param		void
	*result		void
	* This method builds a number node
	*/
	virtual void build_mod_operator();


	/*
	*BUILD OPEN BRACKET METHOD
	*@param		void
	*result		void
	* This method builds a number node
	*/
	virtual void build_open_bracket_operator();


	/*
	*BUILD EXPRESSION METHOD
	*@param		void
	*result		void
	*This method build the expression tree.
	*It assigns the respective left and right nodes and updates the root of the tree
	*/
	virtual void build_expression();


	/*
	* CONVERT METHOD
	*@param		Operator Stack
	*			Number Stack
	*			Root Node
	*			Expr_Node
	* The expression node is pushed onto the number or operator stack. 
	* Whenever an operator of lower precedence than that of top of operator stack comes,
	* operators are popped and evaluated until the top of operator stack has a precedence of equal
	* or lower to that of the new operator.
	*/
	virtual void Convert(Stack<Expr_Node *>& operators,Stack<Expr_Node *>& numbers, Expr_Node * rootNode,Expr_Node * expr_node);


	/*
	* GET EXPRESSION
	* @param	void
	* result	Expr_Node
	* This method returns the root node of the Expression Tree
	*/
	virtual Expr_Node * get_expression();

	

};



#endif