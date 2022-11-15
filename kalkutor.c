#include<stdlib.h>
#include<stdio.h>

int main()
{

    int x,y,cal;
    char z;
    p:
    printf("unesi prvi broj\n");
    scanf("%d",&x);
    printf("unesi koja operacija oces da bude | - | + | / | * | | | % |\n");
    scanf(" %c",&z);
    printf("unesi drugi broj\n");
    scanf("%d",&y);
    if(z=='+')
    {
        printf("rezultat je:%d\n",x+y);
    }
    else
    {
        if (z=='-')
        {
             printf("rezultat je:%d\n",x-y);
        }
        else
        {
            if(z=='/')
            {
                printf("rezultat je %d\n",1.00*x/1.00*y);
            }
            else
            {
                if (z=='*')
                {
                    printf("rezultat je:%d",x*y);
                }
                else
                {
                    if (z=='|')
                    {
                         printf("rezultat je:%d",x/y);
                    }
                    else
                    {
                        if (z=='%')
                        {
                             printf("rezultat je:%d",x%y);
                        }
                        else
                        {
                            printf("nisi uneo dobar znak probaj ponovo");
                            goto p;
                        }
                        
                    }
                    
                }
            }
        }
        
    }
    




    return 0;
}