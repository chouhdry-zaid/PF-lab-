#include<stdio.h>
void printSensorData(void *data,char type){
    if (type=='f')
    {
        printf("Temperature: %.2f C\n",*(float *)data);
    }else if (type=='i')
    {
        if (*(int *)data==1)
        {
            printf("Motion Detected\n");
            /* code */
        }else{
            printf("No Motion\n");
            /* code */
        }
    }else if (type=='c')
    {
        if (*(char *)data=='O')
        {
            printf("Door Open\n");
            /* code */
        }else{
            printf("Door Closed\n");
            /* code */
        }
    }
}
int main(){
    float temperature;
    int motion;
    char door;
    printf("Enter temperature:\n");
    scanf("%f",&temperature);
    printf("Enter motion status (1 or 0):\n");
    scanf("%d",&motion);
    printf("Enter door status (O-open, C-closed):\n");
    scanf(" %c",&door);
    printf("\nSensor readings:\n");
    printSensorData(&temperature,'f');
    printSensorData(&motion,'i');
    printSensorData(&door,'c');
    return 0;
    /* code */
}