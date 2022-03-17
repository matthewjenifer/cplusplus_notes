// https://www.onlinegdb.com/online_c++_compiler | https://www.sololearn.com/learning/1051

/* singla and multi line comments work the same as in java */

// C++ offers various headers, each of which contains information needed for programs to work properly. We have already seen the standard <iostream> header on our first C++ program:

#include <iostream> // #include is used for adding a standard or user-defined header files to the program. The <iostream> header defines the standard stream objects that input and output data.

using namespace std; // A namespace is a declarative region that provides a scope to the identifiers (names of elements) inside inside it. In our code, the line using namespace std; tells the compiler to use the std (standard) namespace. The std namespace includes features of the C++ Standard Library

int
main ()				// cout is used to perform output on the standard output device which is usually the display screen. cout is used in combination with the insertion operator <<. Note that you can add multiple insertion operators after cout.
{
  int myFirstIntVariable = 1; // The C++ programming language is case-sensitive, so myVariable and myvariable are two different identifiers.
  cout << "Watup Doe" << endl; // The cout object does not insert a line break at the end of the output. One way to print two lines is to use the endl manipulator, which will put in a line break. 
  cout << "Oh " << "we on " << "C++ now! \n"; // The new line character \n can be used as an alternative to endl. Using a single cout statement with as many instances of \n as your program requires will print out multiple lines of text. The backslash (\) is called an escape character, and indicates a "special" character.	
  cout << "..but will \n this work?\n"; // In C++, the semicolon is used to terminate a statement. Each statement must end with a semicolon. It indicates the end of one logical expression.
  cout << myFirstIntVariable;
  return 0;
}



/* Creating a variable reserves a memory location, or a space in memory for storing values. The compiler requires that you provide a data type for each variable you declare.
C++ offer a rich assortment of built-in as well as user defined data types.

Integer, a built-in type, represents a whole number value. Define integer using the keyword int.
C++ requires that you specify the type and the identifier for each variable defined.
An identifier is a name for a variable, function, class, module, or any other user-defined item. An identifier starts with a letter (A-Z or a-z) or an underscore (_), followed by additional letters, underscores, and digits (0 to 9).
For example, define a variable called myVariable that can hold integer values as follows: */