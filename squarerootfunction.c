#include<stdio.h>
float square(float);
int main(int argc, char const *argv[])
{
    float a,b;
    printf("Enter any number:");
    scanf("%f",&a);
    b=square(a);
    printf("Square of %f is %f\n", a, b);
    return 0;
}
float square(float x)
{
    float y;
    y=x*x;
    return (y);

}