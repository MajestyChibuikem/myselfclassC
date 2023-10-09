#include <stdarg.h>
#include <stdio.h>

void my_printf(const char* format, ...) {
    va_list args; // Define a variable of type va_list to hold the variable arguments
    va_start(args, format); // Initialize 'args' to point to the first variable argument

    while (*format != '\0') { // Loop until end of format string
        if (*format == '%') { // Check if '%' character is encountered
            format++; // Move to the next character after '%'
            
            switch (*format) { // Check the character after '%'
                case 'd': {
                    int num = va_arg(args, int); // Extract an integer argument
                    printf("%d", num); // Print the integer
                    break;
                }
                case 'f': {
                    double num = va_arg(args, double); // Extract a double argument
                    printf("%f", num); // Print the double
                    break;
                }
                case 's': {
                    char* str = va_arg(args, char*); // Extract a string argument
                    printf("%s", str); // Print the string
                    break;
                }
                case 'x':{
                    printf("%x", va_arg(args, unsigned int));
                    break;
                }
                default: {
                    putchar(*format); // If unknown specifier, print the character
                    break;
                }
            }
        } else {
            putchar(*format); // If not '%' character, print the character
        }

        format++; // Move to the next character in the format string
    }

    va_end(args); // Clean up the va_list variable
}

int main() {
    int num = 42;
    double pi = 3.14;
    char* str = "Hello, World!";

    my_printf("This is a number: %d\n", num); // Output: "This is a number: 42"
    my_printf("This is a float: %f\n", pi); // Output: "This is a float: 3.140000"
    my_printf("This is a string: %s\n", str); // Output: "This is a string: Hello, World!"

    return 0;
}