#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define n 10

void set_rep();
void union_set();
void intersection();
void difference();

int u[n]= {1,2,3,4,5,6,7,8,9,10};

int a[n]= {1,3,4,5,7};
int b[n]= {1,2,4,6,8,10};
int sa[n],sb[n],us[n],cs[n],ds[n],c[n],d[n],diff[n],i;

void main()
{
    int ch;
    do
    {
        printf("\n 1.Set Representation \n 2.Union\n 3.Intersection \n 4.Difference");
        printf("\n enter your choice - ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            set_rep();
            break;
        case 2:
            union_set();
            break;
        case 3:
            intersection();
            break;
        case 4:
            difference();
            break;
        case 5:
            exit(0);
        }
    }
    while(-1);
    getch();
}
void set_rep()
{
    for(i=0; i<n; i++)
    {
        if(u[i]!=-1)
        {
            us[i]=1;
        }
    }
    printf("\n the bit string representation of universal set \n");
    for(i=0; i<n; i++)
    {
        printf("%d,",us[i]);
    }
    for(i=0; i<n; i++)
    {
        int t=0,j;

        for(j=0; j<n; j++)
        {
            if(a[j]==u[i])
            {
                t=1;
                break;
            }
        }
        if(t==1)
        {
            sa[i]=1;
        }
        else
        {
            sa[i]=0;
        }
    }
    printf("\n the bit string representation of  set A \n");
    for(i=0; i<n; i++)
    {
        printf("%d,",sa[i]);
    }
    for(i=0; i<n; i++)
    {
        int t=0,j;

        for(j=0; j<n; j++)
        {
            if(b[j]==u[i])
            {
                t=1;
                break;
            }
        }
        if(t==1)
        {
            sb[i]=1;
        }
        else
        {
            sb[i]=0;
        }
    }


    printf("\n the bit string representation of set B \n");
    for(i=0; i<n; i++)
    {
        printf("%d,",sb[i]);
    }
}
void union_set()
{
    for(i=0; i<n; i++)
    {
        if(sa[i]==1|| sb[i]==1)
        {
            cs[i]=1;

        }
        else
        {
            cs[i]=0;
        }
    }
    printf("\n Union - ");

    for(i=0; i<n; i++)
    {
        printf("%d,",cs[i]);
    }
}
void intersection()
{
    for(i=0; i<n; i++)
    {
        if(sa[i]==1&& sb[i]==1)
        {
            ds[i]=1;

        }
        else
        {
            ds[i]=0;
        }
    }
    printf("\n Intersection - ");
    for(i=0; i<n; i++)
    {
        printf("%d,",ds[i]);
    }
}

void difference()
{
    for(i=0; i<n; i++)
    {
        if(sa[i]==1&& sb[i]==0)
        {
            diff[i]=1;

        }
        
        else
        {
            diff[i]=0;
        }
    }
    printf("\n Difference - ");
    for(i=0; i<n; i++)
    {
        printf("%d,",diff[i]);
    }
}
