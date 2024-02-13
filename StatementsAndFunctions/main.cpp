#include <iostream>

int add_numbers(int first_number, int second_number)
{
    return first_number + second_number;
}

int multiply(int first_number, int second_number)
{
    return first_number * second_number;
}

float multiply_float(float a, float b) 
{
    return a * b;
}

int main() 
{
    
    int first_number {13}; // Statement
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "The sum is: " << sum << std::endl;

    sum = add_numbers(25, 7);
    std::cout << "Sum: " << sum << std::endl;
    
    sum = add_numbers(30, 54);
    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Sum: " << add_numbers(3, 42) << std::endl;   

    std::cout << "Product: " << multiply(3, 15) << std::endl;

    std::cout << "Floating point product: " << multiply_float(3.2, 3) << std::endl;

    return 0;
}