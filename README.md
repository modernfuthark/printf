# _printf
###  Hiram Velez, Tim Sninsky
---
_printf - Produces an output based on a given format.

_printf will print a string, while allowing for inline, formatted variables to be included within the string itself.

_printf will `return` the length of the formatted string.

---
## Format Specifiers
##### Format specifiers are a letter that is proceeded by a percent sign (%).
##### Example: `printf("An in-line string %s\n", "would look like this!");`
- `%`\
Print a percent sign.
- `d`, `i`\
Prints standard integers.
- `c`\
Print a character.
- `x`, `X`\
Print hexadecimal (lowercase and capital).
- `s`\
Print an in-line string.
- `o`\
Print octal.
- `ui`\
Print unsigned int
---

## Example

`/**`\
` * main - Print numbers 0 to 9, followed by a new line`\
` * Return: 0 on success.`\
` */`

`int main(void)`\
`{`\
`int i;`\
`for (i = 0; i < 10; i++)`\
`{`\
`_printf("%d", i); /*Print the variable i*/`\
`}`\
`_printf("\n"); /*Print a new line after every number is printed/*`\
`}`
 