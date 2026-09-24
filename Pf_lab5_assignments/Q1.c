#include<stdio.h>
int main() {
    float pr, math, Ai, attendence;
    printf("enter the marks of pr, math, Ai , and also attendence\n");
    scanf("%f %f %f %f", &pr, &math, &Ai ,&attendence);
    if (attendence>= 75)
    {
        if (pr >=50 && Ai >=50 && math >=50)
        {
           
            float avg = (math + pr + Ai)/3;
            if (avg >=80)
            printf("Excellent");
            
            else if (avg >=70)
            printf("Very Good");
            
            else if (avg >=60)
            printf("Good");
            else if (avg >=50)
            printf("Satisfactory");
            else if (avg <50)
            printf("Poor");
           
        }else {
            printf("Not elligible");

        }
          
    }else {
        printf("Not elligible");
    }
    
}