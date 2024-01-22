# ft_printf

The goal is simple, remaking a more concise and small version of the famous printf function.

Our printf had to manage printf's ``%c``, ``%s``, ``%p``, ``%d``, ``%i``, ``%u``, ``%x``, ``%X`` and finally ``%%`` flags.

Just like the real printf, ft_print had to be used this way ``ft_printf("Message %flag1 %flag2", value1, value2)`` and needed to return the length of the string is successful.

Since it was one of the first 42 projects, it was interesting to play with different formats, transforming strings into integers, then back into strings, transforming integers into their hexadecimal form, printing the address of a pointer, etc.
It made us think about integers, chars and pointers in another way.
