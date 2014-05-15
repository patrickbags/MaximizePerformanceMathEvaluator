/**
 * @class Expression Builder
 * It is an Abstract Builder class
 * It is used to build different expression nodes.
 *
 */
#ifndef _EXPR_NODE_BUILDER_H_
#define _EXPR_NODE_BUILDER_H_


#include "Expr_Node.h"
#include "Binary_Expr_Node.h"
#include "Stack.h"
#include "Array.h"
#include "Num_node.h"

class Expr_Builder
{

public:

	Expr_Builder();

	virtual ~Expr_Builder();


	/*
	*BUILD EXPRESSION METHOD
	*@param		void
	*result		void
	*This method build the expression tree.
	*It assigns the respective left and right nodes and updates the root of the tree
	*/
	virtual void build_expression()=0;
	
	
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

	virtual void Convert(Stack<Expr_Node *>& operators,Stack<Expr_Node *>& numbers, Expr_Node * rootNode,Expr_Node * node)=0;
	
	/*
	*BUILD NUMBER METHOD
	*@param		int
	*result		void
	* This method builds a number node
	*/
	virtual void build_number(int n) = 0;

	/*
	*BUILD ADD METHOD
	*@param		void
	*result		void
	* This method builds an Add node
	*/
	virtual void build_add_operator() = 0;

	/*
	*BUILD SUBTRACT METHOD
	*@param		void
	*result		void
	* This method builds a subtract node
	*/
	virtual void build_sub_operator() = 0;

	/*
	*BUILD MULTIPLY METHOD
	*@param		void
	*result		void
	* This method builds a number node
	*/
	virtual void build_mul_operator() = 0;

	/*
	*BUILD DIVIDE METHOD
	*@param		void
	*result		void
	* This method builds a number node
	*/
	virtual void build_div_operator() = 0;

	/*
	*BUILD MODULUS METHOD
	*@param		void
	*result		void
	* This method builds a number node
	*/
	virtual void build_mod_operator()= 0;
	
	/*
	*BUILD OPEN BRACKET METHOD
	*@param		void
	*result		void
	* This method builds a number node
	*/
	virtual void build_open_bracket_operator() = 0;

	/*
	* GET EXPRESSION
	* @param	void
	* result	Expr_Node
	* This method returns the root node of the Expression Tree
	*/
	
	virtual Expr_Node * get_expression() = 0;

	/*
	* PUSH ON NUMBER STACK METHOD
	* @param	Expr_Node
	* This method is used to push node on Number Stack
	*/

	void pushonNumberStack(Expr_Node * n);


	/*
	* GETTOPNUMBER METHOD
	* @param	void
	* result	expr_node
	*This method is used to get the top of Number stack
	*/
	Expr_Node* getTopNumber();

	/*
	* GETTOPOPERATOR METHOD
	* @param	void
	* result	expr_node
	*This method is used to get the top of Operator stack
	*/
	Expr_Node* getTopOperator();


	/*
	* popOperator METHOD
	* @param	void
	* result	void
	* This method pops the top of operator stack
	*/
	void popOperator();
	
	/*
	* popNumber METHOD
	* @param	void
	* result	void
	* This method pops the top of Number stack
	*/
	void popNumber();

	/*
	*	IsOPERATORSEMPTY METHOD
	* @param	void
	* result	boolean
	* The method check whether Operator stack is empty or not.
	*/
	bool isOperatorsEmpty();

	/*
	*	IsNUMBERsEMPTY METHOD
	* @param	void
	* result	boolean
	* The method check whether Number stack is empty or not.
	*/
	bool isNumbersEmpty();

protected:

	Stack<Expr_Node *> numbers;
	Stack<Expr_Node *> operators;

	Expr_Node * root_;
};

#endif //_EXPR_NODE_BUILDER_H_
