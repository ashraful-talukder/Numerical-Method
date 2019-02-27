#include<stdio.h>
#include<math.h>


float F(float x)
{
    float b=(x*x)-(4*x)-10;
    return b;
}

int main()
{
    float a,b,x,f,x1=0,fa,fb;
    printf("The given function for this code is:\n\t\tf(x)=x^2-4x-10\n");
    printf("Enter the lower bound of the desired root: ");
    scanf("%f",&a);
    printf("Enter the upper bound of the desired root: ");
    scanf("%f",&b);
    int k=1;
    while(1)
    {
        x=(a+b)/2.0;
        f=F(x);
        fa=F(a);
        fb=F(b);
        printf("%d\t%f\t%f\n",k,x,f);
        if(fabs(x-x1)<=0.0001)
        {
            break;
        }
        else if((fa*f)<0)
        {
            b=x;
        }
        else if((fb*f)<0)
        {
            a=x;
        }
        x1=x;
        k=k+1;
    }
    printf("The answer is: %f\n",x);
    return 0;
}
