#include <stdio.h>
#include <stdarg.h>

void my_printf(const char* format, ...) {
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c':
                    putchar(va_arg(args, int));
                    break;
                case 's':
                    printf("%s", va_arg(args, char*));
                    break;
                case 'd':
                    printf("%d", va_arg(args, int));
                    break;
                case 'x':
                    printf("%x", va_arg(args, unsigned int));
                    break;
                default:
                    putchar('%');
                    putchar(*format);
                    break;
            }
        } else {
            putchar(*format);
        }
        format++;
    }

    va_end(args);
}

int main() {
    my_printf("Hello, %s! The answer is %d (in hex: %x)\n", "User", 42, 42);

    return 0;
}
