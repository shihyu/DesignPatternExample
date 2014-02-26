#include "MiniDuckSimulator.hpp"

using namespace HeadFirstDesignPatterns::Interpreter::MiniDuckSimulator;

void lexer( std::istream_iterator< char > next, 
			std::istream_iterator< char > last, 
			std::vector< std::string >& tokens ) {
	std::string token;
	while( next != last ) {
		if( *next == ';' ) {
			if( 0 != token.length() ) {
				tokens.push_back( token );
				token.clear();
			}
		} else if( *next == '(' || *next == ')' || *next == '{' || *next == '}' ) {
			if( 0 != token.length() ) {
				tokens.push_back( token );
				token.clear();
			}
			token += *next;
			tokens.push_back( token );
			token.clear();
		} else {
			token += tolower( *next );
		}
		next++;
	}
	if( 0 != token.length() ) {
		tokens.push_back( token );
	}
}

int main(int argc, char* argv[]) {

	int fowl = 0;
	if( argc > 1 ) {	// argument[1]=type of duck
		std::stringstream( argv[1] ) >> fowl;
	} else {
		std::cout << "pick-a-duck" << std::endl;
		std::cout << "0=None(exit), 1=Mallard, 2=Redhead, 3=Rubber, 4=Model" << std::endl;
		std::cin  >> fowl;
	}

	if( 0 != fowl ) {
		std::auto_ptr<Duck> duck( DuckFactory::createDuck( fowl ) );
		std::vector< std::string > tokens;

		if( 2 < argc ) { // argument[2]=file name
			std::ifstream file( argv[2] );
			std::istream_iterator< char > next( file );
			std::istream_iterator< char > last;
			lexer( next, last, tokens );
		} else {
			std::cin.sync();
			std::cout << "code-a-duck, enter 'duck calls' (expressions) or Ctrl+Z to exit..." << std::endl;
			std::istream_iterator< char > next ( std::cin );
			std::istream_iterator< char > last;
			lexer( next, last, tokens );
		}
		if( 0 != tokens.size() ) {
			Context context( tokens );
			Interpreter interpreter( duck.get() );
			interpreter.interpret( context );
		}
	}
	std::cout << "Goodbye..." << std::endl;;
	return 0;
}
