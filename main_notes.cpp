// https://replit.com/@matthewjenifer/MainNotes#main.cpp | https://www.sololearn.com/learning/1051
// https://www.programiz.com/cpp-programming/online-compiler/

/* singla and multi line comments work the same as in java */

// C++ offers various headers, each of which contains information needed for programs to work properly. We have already seen the standard <iostream> header on our first C++ program:

#include <iostream> // #include is used for adding a standard or user-defined header files to the program. The <iostream> header defines the standard stream objects that input and output data.

using namespace std; // A namespace is a declarative region that provides a scope to the identifiers (names of elements) inside inside it. In our code, the line using namespace std; tells the compiler to use the std (standard) namespace. The std namespace includes features of the C++ Standard Library

int
main ()				// cout is used to perform output on the standard output device which is usually the display screen. cout is used in combination with the insertion operator <<. Note that you can add multiple insertion operators after cout.
{
  int myFirstIntVariable = 1; // The C++ programming language is case-sensitive, so myVariable and myvariable are two different identifiers.
  //int a, b; // defines two variables of type int
  int a = 5;
  int b = 3;

  int c; // You have the option to assign a value to the variable at the time you declare the variable or to declare it and assign a value later. You can also change the value of a variable.
  int d = 42;
  c = 10; // Specifying the data type is required just once, at the time when the variable is declared. After that, the variable may be used without referring to the data type. Specifying the data type for a given variable more than once results in a syntax error.
  d = 9; 

  int e = d;

  auto f = 7; // The auto keyword allows you to automatically deduct the type of the variable being declared. It infers the data type of the variable from its value. Any variable declared with the auto keyword should be initialized at the time of its declaration or there will be an error.
  auto g = 3.45;
  auto h = "im a string";

  int i = 40 + 60;

  int j = 6+9/3; // Operator precedence determines the grouping of terms in an expression, which affects how an expression is evaluated. Certain operators take higher precedence over others; for example, the division operator has higher over the addition operator.

  int k = (6+9)/3; //This, however, will print "5" instead of "9" - as in mathematics, using parentheses alters operators precedence.
  int l = ((((6-4)/2)*2)+9)/3; // Parentheses force the operations to have higher precedence. If there are parenthetical expressions nested within one another, the expression within the innermost parentheses is evaluated first. If none of the expressions are in parentheses, multiplicative (multiplication, division, modulus) operators will be evaluated before additive (addition, subtraction) operators.

  int m = 20;
  m += 5;
  int n = 20;
  n -= 5;
  int o = 20;
  o *= 5;
  int p = 20;
  p /= 5;
  int q = 20;
  q %= 5;
  int r = 5;
  r++;

  int s = 5;
  int t = ++s; // Prefix increments the value, and then proceeds with the expression.

  int u = s--; // Postfix evaluates the expression and then performs the incrementing.


  int num, num2; // To enable the user to input a value, use cin in combination with the extraction operator (>>). The variable containing the extracted data follows the operator. The following example shows how to accept user input and store it in the num variable:
  cout << "Please enter a number \n";
  cin >> num; // As with cout, extractions on cin can be claimed to request more than one input in a single statement: cin >> a >> b; When the program runs, it displays the message "Please enter a number", and then waits for the user to enter a number and press Enter, or Return. The entered number is stored in the variable num. The program will wait for as long as the user needs to type in a number.
  cout << "Gimmie one mo \n"; // You can accept user input multiple times throughout the program:
  cin >> num2;

  int sum = a + b; 
  int sum2 = c * d;
  int sum3 = num + num2;

  // ================================================== IF-STATEMENTS =========================================================

  if(sum != sum2){
    cout << "Yo Matt" << endl;
  }

  if(sum != sum){ // If the condition is false, the statements are simply ignored, and the program continues to run after the if statements body.
    cout << "Ayo Matt" << endl;
  }
  
  if(j >= t){  // prints: true
    cout << "Aye Bruh" << endl;
  }

  if(j <= t){  // false | wont print anything
    cout << "Bruh" << endl;
  }

  if(j == t){  // false | prints else statement: ...
    cout << "Aye Bruh again" << endl;
  } else {
    cout << ".." << endl;
    cout << "..." << endl;
    cout << "...." << endl;
  }

  if(sum2 >= 50){
    cout << "we up" << endl;
    if(sum2 == 90) { // You can also include, or nest, if statements within another if statement.
      cout << "we all the way up" << endl;
    }
  } else {
    cout << "i'm going down" << endl;
  }

  if(sum2 == 90) // In if/else statements, a single statement can be included without enclosing it into curly braces. Still, including the curly braces anyway is a good practice, as they clarify the code and make it easier to read.
    cout << "! ! !" << endl;
  else
    cout << "nnnnnope"<< endl;

  // ================================================== WHILE AND FOR LOOPS ======================================================

  while(sum < 11) { // A while loop statement repeatedly executes a target statement as long as a given condition remains true. At the point when the condition becomes false, program control is shifted to the line that immediately follows the loop.
    cout << "Loading.." << sum << endl;
    sum = sum + 1;
  }

  while(n < 16) { 
    cout << "...insert number below:" << endl;
    n++; // num++ is equivalent to num = num + 1.
  }

  int number;
  int total = 0;
  while(n <= 18) { // A loop can be used to obtain multiple inputs from the user. This loop will run twice
    cin >> number;
    cout << "...insert number below:" << endl;
    total += number;
    n++;
  }
  cout << "Entered total: " << total << "..and now for something odd" << endl;

for(int v = 1; v < 10; v+=2) {
  cout << v << endl;
}

  cout << "Watup Doe" << endl; // The cout object does not insert a line break at the end of the output. One way to print two lines is to use the endl manipulator, which will put in a line break. 
  cout << "Oh " << "we on " << "C++ now! \n"; // The new line character \n can be used as an alternative to endl. Using a single cout statement with as many instances of \n as your program requires will print out multiple lines of text. The backslash (\) is called an escape character, and indicates a "special" character.	
  cout << "..but will \n this work?\n"; // In C++, the semicolon is used to terminate a statement. Each statement must end with a semicolon. It indicates the end of one logical expression.
  cout << myFirstIntVariable<<endl; // prints: 1
  cout << sum << endl; // prints: 13
  cout << sum2 << endl; // prints: 90
  cout << d << endl; // prints: 9
  cout << e << endl; // prints: 9
  cout << i << endl; // prints: 100
  cout << j << endl; // prints: 9
  cout << k << endl; // prints: 5
  cout << l << endl; // prints: 3
  cout << m << endl; // prints: 25
  cout << n << endl; 
  cout << o << endl; // prints: 100
  cout << p << endl; // prints: 4
  cout << q << endl; // prints: 0
  cout << r << endl; // prints: 6
  cout << s << endl; // prints: 5
  cout << t << endl; // prints: 6
  cout << u << endl; // prints: 6
  cout << "Your sum is: " << sum3 << endl; // prints: sum of numbers entered when program starts.

  return 0;
}



/* Creating a variable reserves a memory location, or a space in memory for storing values. The compiler requires that you provide a data type for each variable you declare.
C++ offer a rich assortment of built-in as well as user defined data types.

Integer, a built-in type, represents a whole number value. Define integer using the keyword int.
C++ requires that you specify the type and the identifier for each variable defined.
An identifier is a name for a variable, function, class, module, or any other user-defined item. An identifier starts with a letter (A-Z or a-z) or an underscore (_), followed by additional letters, underscores, and digits (0 to 9).
For example, define a variable called myVariable that can hold integer values as follows: */