#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void encSezar (string a, string);
int main(int argc, string argv[])
{
if(argc !=2 || !isdigit(*argv[1]) )
{
printf("Usage: ./caesar key\n");
return 1;
}
string a = get_string("plaintext: ");
printf("ciphertext: ");
encSezar(a,argv[1]);
printf("\n");
}
void encSezar (string a, string b)
{
for (int i = 0, n= strlen(a); i < n; i++)
{
int x = (int)(a[i] + atoi(b)%26);
if (islower(a[i]) )
{
if(x<123)
{
printf("%c",x);
}
else
{
printf("%c",x-26);
}
}
else if (isupper(a[i]))
{
if(x<91)
{
 printf("%c",x);
}
else
{
printf("%c",x-26);
}
}
else
{
printf("%c",a[i]);
}
}
}
