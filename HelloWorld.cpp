#include <iostream>
#include <vector>
#include <string>
#include <cmath>

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

	return 0;
}