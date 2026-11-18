#include<stdio.h>
#define TOLL_RATE 50
int processVehicle(char vehicleType[]){
    static int totalVehicles=0;
    static int totalFee=0;
    totalVehicles++;
    totalFee=totalFee+TOLL_RATE;
    printf("%s processed. Total vehicles: %d, Total fee: %d PKR\n",vehicleType,totalVehicles,totalFee);
    return totalFee;
}
int main(){
    int total;
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    total=processVehicle("Bike");
    printf("\nFinal Toll Plaza Report\n");
    printf("Toll Rate: %d PKR\n",TOLL_RATE);
    printf("Total Vehicles: %d\n",total/TOLL_RATE);
    printf("Total Collection: %d PKR\n",total);
    return 0;
}
