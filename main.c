// Brainfuck++ interpreter 0.2.1 beta
// Alexander Pateenok, 2015

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned char tape[30000];
int i, p, var, end;              // input index, pointer, variable, EOF
char input[256];

void working();
int minus(int);
int plus(int);

int main()
{
    fgets (input, 256, stdin);
    end = strlen(input);
    working();
    return 0;
}

void working()
{
    int tmp;
    for ( ; i < end; i++)
        switch ( input[i] )
        {
            case '>' : p = plus(p); break;
            case '<' : p = minus(p); break;
            case '|' : p = 0; break;
            case ',' : scanf("%d",&tmp ); tape[p] = tmp; break;
            case '.' : printf("%u\n", tape[p]); break;
            case '=' : tape[p] = tape[ minus(p) ]; break;
            case '0' : tape[p] = 0; break;
            case '!' : var = tape[p]; break;
            case '?' : tape[p] = var; break;
            case '*' : tape[p] = ( tape[p] * tape[minus(p)] ) % 256; break;
            case '/' : tape[p] = tape[p] / tape[minus(p)]; break;
            case '+' : tape[p] = (tape[p]==255)?0:(tape[p]+1); break;
            case '-' : tape[p] = (!tape[p])?0:(tape[p]-1); break;
            case '^' : printf("%d", var); break;
            case '$' : var = p;
            case '(' :
                if (!tape[p])
                {
                    tmp = 1;
                    for (i++; tmp; i++)
                        if (input[i]=='(') tmp++;
                        else if (input[i]==')') tmp--;
                    i--;
                }
                break;
            case '[' :
                if ( !tape[p] )
                {
                    tmp = 1;
                    for (i++; tmp; i++)
                        if (input[i]=='[') tmp++;
                        else if (input[i]==']') tmp--;
                    i--;
                }
                else
                {
                    i++;
                    tmp = i;
                    do {
                        i = tmp;
                        working();
                    } while ( tape[p] );
                }
                break;
            case ']' : return;
        }
}

int plus(int a)
{
    return (a==29999)?0:(a+1);
}

int minus(int a)
{
    return (!a)?29999:(a-1);
}
