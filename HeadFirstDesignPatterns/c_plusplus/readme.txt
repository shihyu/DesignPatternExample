Preface:
================================================================================
In the spirit of contributing to the design pattern community (whilst learning
more about patterns), I followed Mark McFadden’s example of converting the Java
examples associated with “Head First Design Patterns” to another computer
language: C++.  

First, I would like to acknowledge the good work done by the authors of this 
book and their support of my efforts. Second, I do not claim to be a Java 
developer, so I may have misinterpreted a subtle Java notion or convention 
during the conversion process. In this regard, I welcome (constructive) feedback.
 
Finally, I intend to provide three levels of interpretation (Bronze, Silver & Gold)
on two different platforms (Windows & Linux):

-	Bronze; a literal (syntax) translation that produces identical output
-	Silver; a lateral (semantic) translation that preserves the intent using
	good C++ programming practices
-	Gold: a modern level using templates and more STL.

Conventions:
================================================================================
A note about style: 

1) I have adopted the Java idiom of specifying a members access specifier
(e.g, public, protected and private) on an individual basis rather than adhering 
to the 'block' convention in C++. Although it requires a bit more typing, I like 
its explicit clarity, rather than having to search up a class declaration looking
for its access specifier. Warning, personal opinion rant follows: I never understood
the complaint of having to do extra typing, if it makes your code easier to understand
and maintain then its worth the extra keystrokes. Okay, I'm done :-). 

This convention revealed itself while I was creating the 'Bronze' version; when 
my charter was maintain the original example and minimize any code changes. That is, 
I simply wanted it to compile and run. I understand that adopting the Java convention
is a deviation from common C++ practices and some may balk at it (even ridicule it); 
however, I have grown to appreciate its simplicly and explicite clarity. 

2) I took liberties with header files. It is not my convention to put everything
into a single header file that includes the world. I have done so (like access
specifiers) to alter as little as possible from the original examples. I considered
changing it in the 'Silver' version (and I still might), but I am concentrating on
completing the leftover patterns and the 'gold' version at the moment.

3) I welcome positive & negative feeback as long as it is constructive. If there
is a better way to do something, or I simply "missed the boat" I would like to 
know about it. If you have other ideas, would like to expand the examples or provide
alternate versions of them (say Linux) I would be happy to include them and your
name in future updates.


BRONZE 
================================================================================

A 'syntactical' translation; simply get it to compile, run and produce the same
output as the Java examples with minimal changes. No regard was given for memory
leakes or class integrety.

version 1.0:
------------
Adapter:

* Duck and Turkey test drives' where combined into ducks.cpp and implemented by
  defining (or not defining) the pre-processor definition: _DUCK_ADAPTER_

Factory:

* Original Pizzaaf has a logic error, it does not cut Chicago Style pizza's in squares. 

Iterator:

* Renamed ‘Menu’ to ‘Menus’ to avoid a conflict between the project name and one
  of its header files.

* MenuIterator was initially attempted but dismissed for the following reasons:

* It did not eliminate the need for 'PancakeHouseMenuIterator' as in the Java 
  version. In C++, 'PancakeHouseMenuIterator' became an 'adapter' that translated
  the Java Iterator interface to the STL std::iterator interface.
	
Proxy:

* Deferred, pending suitable solution for RMI (most likely it will be 
  ‘boost:: serialization’ implementation.) Or, something completely differrent.

MVC (Model, View, Controller)

* Deferred, pending suitable solution for GUI (most likely it will be a WTL 
  implementation.)

SILVER
================================================================================

A 'semantical' translation; Convey the samples explicit and implicit meaning 
using C++ idioms and good practices; however, I still implement headers that 
"include the world" and contain code; however, the primary intent is still to 
demonstrate a pattern and keeps things as simple as possible.

The Silver version is 'volatile'! That is, it will continue to morph more and more
into what is termed 'Good C++ programming practices'. As stated, the 'Bronze'
version is a 'syntactical' translation only; however, it was also the foundation
for this version, which presented a dilemma: rework existing examples to implement
recognized C++ style, or provide more pattern examples, so its my intent to work
on patter examples and rework the code as I go.

version 1.0:
------------

* Initial release with basic C++ idioms
* Added test.bat (MSDOS style batch file that execute debug and release versions

version 1.1:
------------

* Added 'Bridge' and 'Builder' pattern examples
* Updated (this) readme.txt file
	
version 1.2:
------------

* Added 'Chain of Responsibility' pattern example (added vacation.txt as an 
  input file during execution of test.bat)
* C++ improvements: prepended and underscore (_) to all 'private' and 'protected'
  members, better class member initialization
* Disabled compiler generated methods (copy constructor and assignment operator)
  to ensure the integrity of the class.
* Better class construction in Strategy::MiniDuckSimulator::Duck and derived
  classes.
* Updated (this) readme.txt file

version 1.3:
------------

* Added 'Flyweight' pattern example: "Fowlweight". 

  I deviated from the example in the book for two reasons: I wanted to 'sort' 
  ducks as illustrated in the 'Template Method' pattern and since that illustration
  sorted by 'weight' I thought naming the example 'Fowlweight' combined both the
  pattern and its intent. Since I deviated, I felt obligated to write a narrative
  in the same tone as that used throughout the book. Here is my humble attempt: 
  
  "The number of birds migrating to Objective has overwhelmed the Quackologists
   who are complaining that it is hard to keep up because the journaling program
   you wrote is getting sluggish. Quackologists capture birds, categorize them, 
   weight them, tag them, and finally, record them with your program; however,
   as the size of the flock grows your program begins to crawl. After hours of
   drinking coffee at Starbuzz reviewing your design, you realize that some 
   traits are common to each type of bird; its type, the sound it makes and how
   it swims. If only you could isolate the common (intrinsic) traits from the 
   unique (extrinsic) traits, its weight and tag number. Your redesign implements
   the ‘Flyweight’ pattern by creating a single instance for each type of bird and
   each bird contains a reference back to its type."

version 1.4:
------------

* Added 'Interpreter' pattern (with 'Visitor'): "MiniDuckSimulator".

  See 'readme.txt' in 'Interpreter' directory for additional information regarding
  the implementation of this pattern(s).

  Possible enhancements: 
	- add other keywords, such as 'for', 'if'
	- add 'turkey' via adapter
	
version 1.5:
------------

* Added 'Visitor' pattern: "Menus".

  See 'readme.txt' in 'Visitor' directory for additional information regarding
  the implementation of this pattern(s).

version 1.6:
------------

* Added 'Mediator' pattern: "AutoHouse"

  See 'readme.txt' in 'mediator' directory for additional information regarding
  the implementation of this pattern(s).

