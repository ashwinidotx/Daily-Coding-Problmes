/*---------------------------------------------------------
cons(a, b) constructs a pair, and car(pair) and cdr(pair) returns
the first and last element of that pair.
For example,
car(cons(3, 4)) returns 3, and
cdr(cons(3, 4)) returns 4.
Given this implementation of cons:

def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair
Implement car and cdr.
------------------------------------------------------------*/

#include<stdio.h>
int car(int a,int b)
{
    return (a<b)?a:b;
}
int cdr(int a,int b)
{
    return (a>b)?a:b;
}
int cons(int a,int b)
{
    printf("Small: %d\n",car(a,b));
    printf("Not Small: %d\n",cdr(a,b));
    return 0;
}

int main()
{
    int a,b,i;
    printf("Enter pair(a,b):\n");
    scanf("%d %d",&a,&b);
    cons(a,b);
    return 0;
}