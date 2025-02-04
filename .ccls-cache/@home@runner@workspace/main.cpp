#include <iostream>

// Function to get user input and return it as a string
std::string getUserInput() {
  std::string userInput;
  std::cin >> userInput;
  return userInput;
}

// Function to get the output based on user inputs (first number, second number,
// operator)
std::string getOutput() {
  std::cout << "This is a simple calculator that will add, subtract, multiply, "
               "and divide two numbers.\n"
            << std::endl;

  std::cout << "Please enter the first number: ";
  std::string firstNumber = getUserInput();

  std::cout << "Please enter the second number: ";
  std::string secondNumber = getUserInput();

  std::cout << "Please enter the operator: ";
  std::string operatorInput = getUserInput();

  std::string finalOutput;

  if (operatorInput == "+") {
    finalOutput =
        std::to_string(std::stod(firstNumber) + std::stod(secondNumber));
  } else if (operatorInput == "-") {
    finalOutput =
        std::to_string(std::stod(firstNumber) - std::stod(secondNumber));
  } else if (operatorInput == "*") {
    finalOutput =
        std::to_string(std::stod(firstNumber) * std::stod(secondNumber));
  } else if (operatorInput == "/") {
    finalOutput =
        std::to_string(std::stod(firstNumber) / std::stod(secondNumber));
  }

  return finalOutput;
}

// Main function to control the flow of execution in the program
int main() {
  std::cout << getOutput() << std::endl;
  return -1;
}
