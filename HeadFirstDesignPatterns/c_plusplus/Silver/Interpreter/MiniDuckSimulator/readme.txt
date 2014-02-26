Interestingly, the ‘Interpreter’ pattern does not explain how to create an
abstract syntax tree [GoF, p247] yet, that is where I spent most of my time
writing and looking for an elegant solution. I think I could have done more
but I was already tardy in delivering this example. That and changing jobs 
impacted my intentions to deliver timely examples.

Another non-pattern related idom is the istream_iterator iterators that give
processing either console or file streams its elegance; however, the 'Visitor'
pattern afforded the greatest elegance to this example. I originally intended
to create an example that implemented only the 'Interpreter' pattern, then 
apply the 'Visitor' pattern later to illustrate their differences. This proved
futile and I opted to apply the 'Visitor' pattern immediately.

Don't be mislead by the number of files in this projrect, most files were
copied from othter examples to maintain consistency and symmetry. The core
implementation of the pattern is in: "Context.hpp", "Expression.hpp", 
"Interpreter.hpp", "Visitor.hpp" and the various 'command' files.

Grammar:

	expression  ::= <command> | <sequence> | <repetition>
	sequence    ::= <expression> ';' <command>
	command     ::= left | right | display | fly | quack | swim
	repetition  ::= while '(' <variable> ')' '{' <expression> '}'
	variable    ::= [A-Z,a-z]+

Usage:

	MiniDuckSimulator [ <type> [ <file name> ] ]
	
	[]          := optional arguments
	<type>      := 0=None(exit), 1=Mallard, 2=Redhead, 3=Rubber, 4=Model
	<file name> := name of file containing duck calls


