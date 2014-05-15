#ifndef _MOD_COMMAND_H_
#define _MOD_COMMAND_H_

// References
#include "Binary_Op_Command.h"
// End of References

/**
 * @class Modulus_Command
 *
 * Implementation of a Modulus Command.
 */
class Mod_Command: public Binary_Op_Command
{
public:

	/// FLOATING POINT EXCEPTION
	class FloatingPointException : public std::exception
	{
		public:
		/// Default constructor.
		FloatingPointException (void): std::exception () { }

		/**
		* Initializing constructor.
		*
		* @param[in]      msg         Error message.
		*/
		FloatingPointException (const char * msg) : message(msg)
		{}

		virtual const char* what() const throw() { return message;}
	
		private:
		const char* message;
	};



	// Default Consructor
	Mod_Command();

	// Destructor
	~Mod_Command();

	/**
   * Evaluate Function
   *
   * @param[in]      operand1           Operand on the left side of operator.
   *		         operand2			Operand on the right side of operator.
   * @return		 int				Value of the operation.
   */
	int evaluate (int operand1, int operand2);
	

	/*
	* PRECEDENCE FUNCTION
	*
	* returns the precedence of the command
	*/

	virtual int precedence();


	
	
};



#endif  // !defined _MOD_COMMAND_H_
