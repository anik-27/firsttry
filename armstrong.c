#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,rem,q,mul=1,result,o;
    printf("Enter the number\n");
    scanf("%d",&num);
    q=num;
    while(q!=0)
    {
        q=q/10;
        o++;
    }
    q=num;
      while(q!=0)
    {
        rem = q%10;
        for(i=1;i<=o;i++)
        {
     mul=mul*rem;
        }
        result = result+mul;
        q= q/10;
        mul =1;
    }
    if(num==result)
          printf("%d is an armstrong number\n",num);
    else
     printf("%d is not an armstrong number\n",num);
}