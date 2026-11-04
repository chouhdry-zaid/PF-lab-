#include<stdio.h>
float calculate_discount(float total,char mem){
    
    if (mem=='P')
    {
        if (total>10000)
        {
            return total*(22/100.0);
            
            /* code */
        }else{
            
            return total*(1/5.0);
        }
        /* code */
    }else if (mem=='G')
    {
        if (total>10000)
        {
            int a =total*(12/100.0);
            return a;
            /* code */
        }else{
            return total*(1/10.0);
            
        }
        /* code */
    }else if (mem=='S')
    {
        if (total>10000)
        {
            return total*(7/100.0);
    
            /* code */
        }else{
            
            return total*(1/20.0);
        }
    }
}
float calculate_final_bill(float after_discount,float total,char membership){
    float after_tax=calculate_discount(total, membership)*(15/100.0);
    if (calculate_discount(total, membership)<=5000)
    {
        return after_discount+300+after_tax;
        /* code */
    }else{
        return after_discount+after_tax;
        
    }
    
}
int main(){
    float total_shoping;
    char membership;
    printf("Enter the membership type(P-paltinum),(G-Gold) and (S-standard):\n");
    scanf("%c",&membership);
    printf("Enter the total shoping amount:\n");
    scanf("%f",&total_shoping);
    float after_discount=total_shoping-calculate_discount(total_shoping,membership);
    printf("Total final payable amount:%.2f",calculate_final_bill(after_discount,total_shoping,membership));



}