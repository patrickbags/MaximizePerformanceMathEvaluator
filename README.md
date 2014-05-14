MaximizePerformanceMathEvaluator
================================
The Mathematical Expression Evaluator is implemented in two different ways. One implementation is based on the use of Stack and the second implementation uses a tree based approach. 

1.	Infix-to-Postfix
=======================
The first approach of Expression Evaluator implementation used is to convert an Infix expression (where operators are written between the operands) into a Postfix expression (where every operator follows operands it acts on). <br/>
Stack (Last in First Out) is used for storing the commands/operators in an expression. Command Pattern is used to denote different commands and evaluate the postfix expression. Abstract Factory Pattern used helps in creating different commands based on the operators encountered in an infix expression. Iterator Pattern is used to go over the postfix expression and call evaluate on each of the commands.

2.	Expression Tree
=======================
As the name suggests, a tree like structure is formed to evaluate the expression. Operators are considered as ‘parent’ nodes and operands as ‘child’ nodes.  While parsing the input expression, the nodes are built and operator nodes are assigned left and right child.<br/>
The implementation of Expression Tree approach uses a Builder Pattern to create different commands dynamically based on the operators encountered in the expression (the input expression is in Infix format) and a Visitor Pattern is used to evaluate the generated tree. 

3. Method
======================
Approach of this study is as follows:<br/>
a.	Strategy Pattern is used. <br/>
b.	Infix-to-Postfix approach and Expression Tree approach both are subclasses of the Strategy class created.<br/>
c.	Based on the command line argument, whether ‘postfix’ or ‘exprtree’, corresponding strategy is created and that approach is used for evaluating the expressions.<br/>
d.	The expressions are created using a separate method in a text file and that text file is read by both the strategies for evaluation purpose.<br/>
e.	The execution time of both approaches is calculated for different number of expressions of varying lengths.<br/>
f.	Execution time measured is in milliseconds.

4. Improvement
======================
In the Infix-to-Postfix implementation, the commands (operators) are stateless objects. The frequent allocation and de-allocation of these objects (Excessive Dynamic Allocation) is lowering the performance of this approach. This frequent allocation and de-allocation of stateless objects can be avoided with the help of Flyweight Pattern. <br/>
To evaluate the performance of Infix-to-Postfix using Flyweight Pattern, a Flyweight Command Factory is used which has all the stateless objects (operators) as its member variables and they are created only once at the object initialization of Flyweight Command Factory. This saves a lot of time.<br/>
To compare the performance with the original implementation of Infix-to-Postfix, a Postfix Flyweight strategy is created. Based on the command line input of ‘flyweight’, this strategy gets created. <br/>
The other benefit of this approach is the memory management. There is no need to explicitly de-allocate the command objects. They get de-allocated once the Flyweight Command Factory goes out of scope.<br/>

