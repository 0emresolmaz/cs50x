#include <cs50.h>
#include <stdio.h>

int get_positive_int(string);

int main(void)
{
    int height= get_positive_int("Height: ");
    
    for(int i =0;i<height;i++)
    {
        for(int k =height-i;k>1;k--)
        {
               printf(" ");
        }
        for(int j =0;j<i+1;j++) 
        {
            printf("#");
            
        }
        
        printf("\n");
        
    }

}

int get_positive_int(string x) 
{
    int n;
    do
    {
        n= get_int("%s",x);
    }
    while(n<1 || n>8);
return n;
}
