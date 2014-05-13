
#ifndef _CALCULATOR_STRATEGY_H_
#define _CALCULATOR_STRATEGY_H_

#include<iostream>

/*
	This is a Abstract strategy class.
	The methods in the class are implemented by the concrete strategies.
*/

class Calculator_Strategy
{
public:
	Calculator_Strategy();

	virtual ~Calculator_Strategy();

	/*
		Build_Expression_Strategy - builts as well as evaluates an expression.
	*/
	virtual void Build_Expression_Strategy() = 0;

	class CalException : public std::exception
	{
		public:
		/// Default constructor.
		CalException (void): std::exception () { }

		/**
		* Initializing constructor.
		*
		* @param[in]      msg         Error message.
		*/
		CalException (const char * msg) : message(msg)
		{}

		virtual const char* what() const throw() { return message;}
	
		private:
		const char* message;
	};

};

#endif