# 1 "1-alphabet.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "1-alphabet.c"
# 1 "main.h" 1
# 2 "1-alphabet.c" 2





void print_alphabet(void)
{
 char a = 'a';

 while(a < 'z')
 {
  putchar(a);
  a++;
 }
 putchar('\n');
}
