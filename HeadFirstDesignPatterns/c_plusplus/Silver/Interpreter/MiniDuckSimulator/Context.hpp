#ifndef	_HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_CONTEXT_HPP_
#define _HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_CONTEXT_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {

namespace MiniDuckSimulator {

//Grammar:
//
//  expression	::= <command> | <sequence> | <repetition>
//  sequence	::= <expression> ';' <command>
//  command		::= left | right | display | fly | quack | swim
//  repetition	::= while '(' <variable> ')' '{' <expression> '}'
//  variable	::= [A-Z,a-z]+

class Context : public Iterator< Expression > {

	private: std::list< Expression* > _content;

	public: explicit Context( std::vector< std::string >& tokens ) {

		std::vector< std::string >::const_iterator iterator = tokens.begin();

		while( iterator != tokens.end() ) {
			if( 0 == iterator->compare( "display" ) )
				_content.push_back( new DisplayCommand );
			else if( 0 == iterator->compare( "fly" ) )
				_content.push_back( new FlyCommand() );
			else if( 0 == iterator->compare( "quack" ) )
				_content.push_back( new QuackCommand() );
			else if( 0 == iterator->compare( "left" ) )
				_content.push_back( new LeftCommand() );
			else if( 0 == iterator->compare( "right" ) )
				_content.push_back( new RightCommand() );
			else if( 0 == iterator->compare( "swim" ) )
				_content.push_back( new SwimCommand() );
			else if( 0 == iterator->compare( "while" ) ) {
				std::vector< std::string > expression;
				Variable* variable = 0;
				bool open_paren_found = false;
				bool open_brace_found = false;
				while( ++iterator != tokens.end() ) {
					if( 0 == iterator->compare( "(" ) )
						open_paren_found = true;
					else if( 0 == iterator->compare( ")" ) )
						continue;
					else if( 0 == iterator->compare( "{" ) )
						open_brace_found = true;
					else if( 0 == iterator->compare( "}" ) )
						break;
					else if( 0 == variable && true == open_paren_found )
						variable = new Variable( iterator->c_str() );
					else {
						expression.push_back( iterator->c_str() );
						if( true == open_brace_found )
							continue;
						else
							break;
					}
				}
				_content.push_back( new WhileCommand( variable, expression ) );
			}
			iterator++;
		}
	}
	public: Expression* next() {
		Expression* result = 0;
		if( false == _content.empty() ) {
			result = _content.front();
			_content.pop_front();
		}
		return result;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif