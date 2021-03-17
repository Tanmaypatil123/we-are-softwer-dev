#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter any two number: ");
    scanf("%d%d",&a,&b);
    if (b>0){
        while (b>0)
        {
            a++;
            b--;
        }
        
    }
    if (b<0){
        while (b<0){
            a--;
            b++;
        }
    }
    printf("%d",a);
    return 0;
}
