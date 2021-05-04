#include <cs50.h>
#include <stdio.h>
#include <math.h>
float get_positive_float(string);
float calccash(float);
int main(void)
{
float cash= get_positive_float("Change owed: "); //25 cent, 10 cent, 5 cent, 1 cent
int gnumber =calccash(cash);
printf("%i",gnumber);
}
float get_positive_float(string x)
{
float n;
do
{
n= get_float("%s",x);
}
while(n<0 );
return n;
}
float calccash(float cash)
{
int mycash,cent25,cent10,cent5,cent1,cent10tum,cent5tum,cent1tum;
mycash = round(cash*100);
cent25 =mycash/25; //16
cent10tum =mycash%25; // cent10tum =20
cent10 =cent10tum/10; //cent10 =2
cent5tum =cent10tum%10;
cent5 = cent5tum/5;
cent1tum =cent5tum%5;
cent1 = cent1tum/1;
return cent25+cent10+cent5+cent1;
}
