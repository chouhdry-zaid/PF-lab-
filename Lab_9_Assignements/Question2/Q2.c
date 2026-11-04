#include<stdio.h>
void withdraw(float *balance,float amount){
    if (amount<=*balance)
    {
        *balance=*balance-amount;
        printf("Withdrawal successful\n");
        /* code */
    }else{
        printf("Transaction Declined: Insufficient Balance\n");
        /* code */
    }
    /* code */
}
void deposit(float *balance,float amount){
    *balance=*balance+amount;
    printf("Updated balance: %.2f\n",*balance);
    /* code */
}
int main(){
    float balance=10000;
    char type;
    float amount;
    printf("Select transaction (d-debit, c-credit):\n");
    scanf("%c",&type);
    printf("Enter the amount:\n");
    scanf("%f",&amount);
    if (type=='d')
    {
        withdraw(&balance,amount);
        /* code */
    }else if (type=='c')
    {
        deposit(&balance,amount);
        /* code */
    }else{
        printf("Invalid transaction type\n");
        /* code */
    }
    printf("Final account balance: %.2f",balance);
    return 0;
}