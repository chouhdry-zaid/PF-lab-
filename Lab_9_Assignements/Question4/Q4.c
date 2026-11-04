#include<stdio.h>
int add(int a,int b){
    return a+b;
    /* code */
}
int multiply(int a,int b){
    return a*b;
    /* code */
}
int findMax(int a,int b){
    if (a>b)
    {
        return a;
        /* code */
    }else{
        return b;
        /* code */
    }
}
int compute(int a,int b,int (*operation)(int,int)){
    return operation(a,b);
    /* code */
}
int main(){
    int x,y;
    printf("Enter two integers:\n");
    scanf("%d %d",&x,&y);
    int sum=compute(x,y,add);
    int product=compute(x,y,multiply);
    int maximum=compute(x,y,findMax);
    printf("Sum: %d\n",sum);
    printf("Product: %d\n",product);
    printf("Maximum: %d",maximum);
    return 0;
    /* code */
}