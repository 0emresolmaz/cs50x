#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void vigenere (string, string);
int main(int argc, string argv[])
{
if(argc !=2 || isdigit(*argv[1]) )
{
printf("Usage: ./vigenere keyword\n");
return 1;
}
else
{
for(int i=0, n=strlen(argv[1]);i<n;i++)
{
if(!isalpha(argv[1][i]))
{
printf("Usage: ./vigenere keyword\n");
return 1;
}
}
}
string a = get_string("plaintext: ");
printf("ciphertext: ");
vigenere(a,argv[1]);
printf("\n");
}
void vigenere (string a, string b)
{
int n = strlen(b);
int i=0;
int j=0;
while((i%n)<n && a[i] != '\0')
{
int key =b[j%n];
if (islower(a[i]))
{
if(key>64 && key <91) //key buyuk harfse
{
int x= (int)a[i] +(int)key-65;
if(x<123)
{
printf("%c",x);
}
else
{
printf("%c",x-26);
}
}
else if (key>96 && key <123) //key kucuk harfse
{
int x= (int)a[i] +(int)key-97;
if(x<123)
{
printf("%c",x);
}
else
{
printf("%c",x-26);
}
}
j++;
}
else if (isupper(a[i]))
{
if(key>64 && key <91) //key buyuk harfse
{
int x= (int)a[i] +(int)key-65;
if(x<91)
{
printf("%c",x);
}
else
{
printf("%c",x-26);
}
}
else if (key>96 && key <123) //key küçük harfse
{
int x= (int)a[i] +(int)key-97;
if(x<91)
{
printf("%c",x);
}
else
{
printf("%c",x-26);
}
}
j++;
}
else
{
printf("%c",a[i]);
}
i++;
}
}
