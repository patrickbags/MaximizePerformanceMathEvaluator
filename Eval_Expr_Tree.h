/**
 * @class Evaluate Expression Tree Visitor
 * Represents a concrete Visitor.
 *
 */


#ifndef _EVAL_EXPR_TREE_H_
#define _EVAL_EXPR_TREE_H_


#include "Expr_Node_Visitor.h"
#include "Add_Node.h"
#include "Num_node.h"
#include "Sub_Node.h"
#include "Mul_Node.h"
#include "Div_Node.h"
#include "Mod_Node.h"
#include "Open_Bracket_Node.h"
#include <exception>


class Eval_Expr_Tree: public Expr_Node_Visitor
{
public:

	Eval_Expr_Tree();

	virtual ~Eval_Expr_Tree();

	/*
	* VISIT ADD METHOD
	* @param	Add_node
	* result	void
	* 
	* This method visits an Add Operator in the Expression Tree
	* Performs addition of the left child and right child
	*/
	
	virtual void Visit_Add_Node(Add_Node & node);

	/*
	* VISIT NUMBER METHOD
	* @param	Num_node
	* result	void
	* This method visits a Number Node in the Expression Tree
	*/

	virtual void Visit_Num_Node(Num_Node & node);


	/*
	* VISIT SUB METHOD
	* @param	Sub_node
	* result	void
	* 
	* This method visits a Subtract Operator in the Expression Tree
	* Performs subtraction of the left child and right child
	*/
	virtual void Visit_Sub_Node(Sub_Node & node);


	/*
	* VISIT MULTIPLY METHOD
	* @param	Mul_node
	* result	void
	* 
	* This method visits a Multiply Operator in the Expression Tree
	* Performs Multiplication of the left child and right child
	*/
	virtual void Visit_Mul_Node(Mul_Node & node);

	/*
	* VISIT DIV METHOD
	* @param	Div_node
	* result	void
	* 
	* This method visits a Divide Operator in the Expression Tree
	* Performs division of the left child and right child
	*/
	virtual void Visit_Div_Node(Div_Node & node);

	/*
	* VISIT MOD METHOD
	* @param	Add_node
	* result	void
	* 
	* This method visits a Modulus Operator in the Expression Tree
	* Performs Modulus operation on the left child and right child
	*/
	virtual void Visit_Mod_Node(Mod_Node & node);


	/*
	* RESULT METHOD
	* result	int
	* This method returns the evaluated value.
	*/
	virtual int result();

	class DividebyZeroException : public std::exception
	{
		public:
		/// Default constructor.
		//DividebyZeroException (void): std::exception () { }

		/**
		* Initializing constructor.
		*
		* @param[in]      msg         Error message.
		*/
		DividebyZeroException (const char * msg) : message(msg)
		{}

		virtual const char* what() const throw() { return message;}
	
		private:
		const char* message;
	};

	class FloatingPointException : public std::exception
	{
		public:
		
		/**
		* Initializing constructor.
		*
		* @param[in]      msg         Error message.
		*/
		FloatingPointException(const char * msg) : message(msg)
		{}

		virtual const char* what() const throw() { return message;}
	
		private:
		const char* message;
	};


};

#endif
