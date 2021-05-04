#include <stdio.h>
#include <cs50.h>
//american express = 15 digit.. begins 34 ||37
//mastercard =16 digit begins 51, 52, 53, 54 veya 55
// visa =13 & 16 begins 4
void cardkind(long x);
int calcnumber1(long);
int calcnumber2(long);
int calcnumber3(long);
int main(void)
{
long cardid =get_long("Number: \n");
cardkind(cardid);
}
void cardkind(long x)
{
long num13 = 1000000000000; //13 digit
long num14 =num13*10;
long num15 =num14*10;
long num16= num15*10;
int no =calcnumber3(x);
if (x/num13 ==4 || x/num16==4)
{
if(no==0)
{
printf("VISA\n");
}
else
{
printf("INVALID\n");
}
}
else if (x/num15==51 || x/num15==52 || x/num15==53 || x/num15==54 || x/num15==55 )
{
if(no==0)
{
printf("MASTERCARD\n");
}
else
{
printf("INVALID\n");
}
}
else if (x/num14==34 || x/num14==37 )
{
if(no==0)
{
printf("AMEX\n");
}
else
{
printf("INVALID\n");
}
}
else
{
printf("INVALID\n");
}
}
int calcnumber1(long y)
{
int sum1=0;
int sum2=0;
int sum = 0;
while (y > 0)
{
int i = (y % 100)/10;
if((i*2)<10)
{
sum1+=i*2;
}
else
{
sum2+= (i*2)%10;
sum2+= (i*2)/10;
}
y = y / 100;
}
sum = sum1+sum2;
return sum;
}
int calcnumber2(long y)
{
int sum = 0;
while (y > 0)
{
sum += y % 10;
y = y / 100;
}
return sum;
}
int calcnumber3(long y)
{
int a= calcnumber1(y);
int b= calcnumber2(y);
int result= (a+b)%10;
return result;
}
