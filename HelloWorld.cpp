#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>

namespace namespacelearning {
	int testNamespace = 1;
}

namespace anotherNamespace {
	int testNamespace = 2;
}

// type def
// 
//typedef std::string string;
//typedef int number;
using string = std::string;
using number = int;


int main() {
	
	// omg a comment just like any other language wow amazing cant believe it.

	/*
	* woww a multiline comment
	* just like any other lanauge
	* omggg
	*/


	// Basic output
	std::cout << "Hello World!\n";
	std::cout << "Pizza is good!\n";


	//std::cout << '\n';
	/*
	* Variables
	*/

	//ints
	int width = 69;
	int height = -69;
	int squareFeet = width * height;

	//std::cout << width << std::endl;
	//std::cout << height << std::endl;
	//std::cout << squareFeet << std::endl;


	//doubles
	double price = 10.99;
	double gradeAverage = 2.5;
	double temperature = -2.1;
	//std::cout << price << std::endl;

	//chars
	char firstInitial = 'S';
	char currency = '$';
	//std::cout << firstInitial << std::endl;

	// booleans
	bool charged = true;
	bool powered = false;

	// strings
	//std::string name = "Hi, I'm Skeeter! I'm being forced to learn C++!";

	//std::cout << name << std::endl;


	//std::cout << '\n';


	/*
	* Consts
	*/
	const double PI = 3.14159;
	const int RADIUS = 10;
	const double CIRCUM = 2 * PI * RADIUS;

	//std::cout << CIRCUM << "cm\n";


	//std::cout << '\n';


	/*
	* Namespace
	*/

	// using namespace namespacelearning;

	int testNamespace = 0;
	//std::cout << testNamespace << std::endl;
	//std::cout << namespacelearning::testNamespace << std::endl;
	//std::cout << anotherNamespace::testNamespace << std::endl;


	//std::cout << '\n';


	/*
	* TypeDef
	*/

	string typeDefstring = "Wow amazing can't believe it wow!";
	number typeDefnumber = 69;

	//std::cout << typeDefstring << std::endl;
	//std::cout << typeDefnumber << std::endl;


	//std::cout << '\n';

	/*
	* Arithmetic Operators
	*/

	int people = 20;

	// people = people + 1; people = people - 1;
	people += 5;
	people -= 5;

	people++;
	people--;

	// people = people * 2; people = people / 2;
	people *= 2;
	people /= 2;

	int remainder = people % 3;

	//std::cout << people << ' ' << remainder << std::endl;

	// paraenthesis, multiplication & devision, addition & subtraction
	int kiddos = 6 + (9 - 2) * 9 / 2;
	//std::cout << kiddos << std::endl;

	//std::cout << '\n';

	/*
	* Type Conversion
	*/

	int correct = 15;
	int questions = 25;
	double score = correct / (double) questions * 100;
	//std::cout << score << std::endl;


	//std::cout << '\n';

	/*
	* User Input
	*/

	std::string userName;

	//std::cout << "Whata your fucking name?: ";
	//std::getline(std::cin >> std::ws, userName);
	//std::cout << "Your weird, " << userName << std::endl;

	/*
	* basic useful math functions https://cplusplus.com/reference/cmath/
	*/
	double mathFunctionX = 3.99;
	double mathFunctionY = 4;
	double mathFunctionZ;

	//mathFunctionZ = std::max(mathFunctionX, mathFunctionY); // Assigns mathFunctionZ to the highest number between mathFunctionx and mathFunctionY
	//mathFunctionZ = std::min(mathFunctionX, mathFunctionY); // Assigns mathFunctionZ to the lowest number between mathFunctionx and mathFunctionY
	//mathFunctionZ = pow(2, 3); // Gets the power to something, 2 to the power of 3 is 8
	//mathFunctionZ = sqrt(9); // gets the sqareroot of a number
	//mathFunctionZ = abs(-3); // Gets the absolute value of a number.
	//mathFunctionZ = round(mathFunctionX); // Rounds a number
	//mathFunctionZ = ceil(mathFunctionX);
	//mathFunctionZ = floor(mathFunctionX);


	/*
	* Hypotenuse calcuator 
	*/
	double a;
	double b;
	double c;

	//std::cout << "Enter size A: ";
	//std::cin >> a;

	//std::cout << "Enter size B: ";
	//std::cin >> b;

	// c = sqrt(pow(a, 2) + pow(b, 2));

	//std::cout << "side C: " << c;

	/*
	* If statements
	*/
	int age;

	//std::cout << "Enter your age: ";
	//std::cin >> age;

	//if (age >= 18) {
	//	std::cout << "Your allowed in!";
	//}else{
	//	std::cout << "You need to be 18 or older to enter here!";
	//}

	/*
	* Switches
	*/

	//int monthSwitch;
	//std::cout << "Enter month (1-12): ";
	//std::cin >> monthSwitch;

	//switch (monthSwitch) {
	//	case 1:
	//		std::cout << "January";
	//		break;
	//	case 2:
	//		std::cout << "February";
	//		break;
	//	case 3:
	//		std::cout << "March";
	//		break;
	//	case 4:
	//		std::cout << "April";
	//		break;
	//	case 5:
	//		std::cout << "May";
	//		break;
	//	case 6:
	//		std::cout << "June";
	//		break;
	//	case 7:
	//		std::cout << "July";
	//		break;
	//	case 8:
	//		std::cout << "August";
	//		break;
	//	case 9:
	//		std::cout << "September";
	//		break;
	//	case 10:
	//		std::cout << "October";
	//		break;
	//	case 11:
	//		std::cout << "November";
	//		break;
	//	case 12:
	//		std::cout << "December";
	//		break;
	//	default:
	//		std::cout << "This month dont exists dumbass.";

	//}

	/*
	*  Calcuator Program
	*/

	//char op;
	//double num1;
	//double num2;
	//double result;


	//std::cout << "Please enter a operator (+ - * /): ";
	//std::cin >> op;

	//std::cout << "Enter #1: ";
	//std::cin >> num1;

	//std::cout << "Enter #2: ";
	//std::cin >> num2;

	//switch (op) {
	//	case '+':
	//		result = num1 + num2;
	//		std::cout << "Result is " << result << std::endl;
	//		break;
	//	case '-':
	//		result = num1 - num2;
	//		std::cout << "Result is " << result << std::endl;
	//		break;
	//	case '/':
	//		result = num1 / num2;
	//		std::cout << "Result is " << result << std::endl;
	//		break;
	//	case '*':
	//		result = num1 * num2;
	//		std::cout << "Result is " << result << std::endl;
	//		break;
	//	default:
	//		std::cout << "The operator cannot be used.\n";
	//	
	//}
	/*
	* Ternary operator (in-line if statement)
	*/

	//int ternaryTest = 64;

	//ternaryTest >= 60 ? std::cout << "OOO" : std::cout << "Fuck you!";
	
	//int oddTest = 9;
	//oddTest % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

	/*
	* Logical Operators
	*/
	
	//int temp;

	//std::cout << "Enter temp: ";
	//std::cin >> temp;

	//if (temp > 0 && temp < 30) {} // both need to be true
	//if (temp > 0 || temp < 30) {} // one one has to be true
	//if (!temp > 0) {} // reverse
	

	/*
	* Temp conversion program
	*/
	//double temp;
	//char unit;

	//std::cout << "F = Fahrenheit\n";
	//std::cout << "C = Celsius\n";

	//std::cout << "What unit are you converting to: ";
	//std::cin >> unit;

	//if (unit == 'F' || unit == 'f') {
	//	std::cout << "Enter the temperature in Celsius: ";
	//	std::cin >> temp;

	//	temp = (1.8 * temp) + 32.0;
	//	std::cout << "Temperature is " << temp << " F\n";
	//}
	//else if (unit == 'C' || unit == 'c') {
	//	std::cout << "Enter the temperature in Fahrenheit: ";
	//	std::cin >> temp;

	//	temp = (temp - 32) / 1.8;
	//	std::cout << "Temperature is " << temp << " C\n";
	//}
	//else {
	//	std::cout << "That is not a valid temperature idiot.\n";
	//}

	/*
	* basic string functions
	*/

	//std::string basicString;

	//std::cout << "Enter string: ";
	//std::getline(std::cin, basicString);

	//std::cout << basicString.length() << std::endl;
	//std::cout << basicString.at(2);

	/*
	* Loops
	*/



	// while loop

	//std::string whileloopString;

	//while (whileloopString.empty()) {
	//	std::cout << "Enter a string: ";
	//	std::getline(std::cin, whileloopString);
	//}

	//std::cout << "ye " << whileloopString << std::endl;



	// Do while loop

	//int number;

	//do {
	//	std::cout << "Etner a postitive #: ";
	//	std::cin >> number;
	//} while (number < 0);

	//std::cout << "# = " << number;


	// For loops

	//for (int i = 1; i <= 10; i++) {
	//	std::cout << i << std::endl;
	//}

	//std::cout << "WHOOOOOO";


	/*
	* Break & Continue
	*/

	//for (int i = 0; i <= 20; i++)
	//{
	//	if (i == 13) {
	//		//break; // Break stops the loop
	//		continue; // Stops this skips this loop
	//	}
	//	std::cout << i << std::endl;
	//}

	/*
	* Nested Loop
	*/

	//int rows;
	//int colums;

	//char symbol;

	//std::cout << "Rows: ";
	//std::cin >> rows;
	//std::cout << "Colums: ";
	//std::cin >> colums;

	//std::cout << "Symbol: ";
	//std::cin >> symbol;

	//for (int i = 1; i <= rows; i++) {

	//	for (int j = 1; j <= colums; j++) {
	//		std::cout << symbol;
	//	}

	//	std::cout << '\n';

	//}

	
	/*
	*  Random Number Gen
	*/
	//srand(time(NULL));

	//int num1 = (rand() % 6) + 1;
	//int num2 = (rand() % 6) + 1;
	//int num3 = (rand() % 6) + 1;

	//std::cout << num1 << std::endl;
	//std::cout << num2 << std::endl;
	//std::cout << num3 << std::endl;

	

	return 0;
}