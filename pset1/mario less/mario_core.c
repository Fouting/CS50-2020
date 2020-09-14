#include <cs50.h>
#include <stdio.h>

void mario(int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    mario(n);
}

void mario(int n)
{
    int x = 1;
    int z = n;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < z; j++)
        {
            printf(" ");
           
        }
       
        for (int y = 0; y < x; y++)
        {
            printf("#");
        }
        x++;
        z--;
        printf("\n");
    }
}
