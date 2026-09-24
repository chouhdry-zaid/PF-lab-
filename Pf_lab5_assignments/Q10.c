#include<stdio.h>
int main() {
    int permission, model_status, user_roles;
    printf("enter the permission (1-for view, 2-for Train, 3-for Test, 4-for Deploy\n");
    scanf("%d ", &permission);
    printf("enter the model status (1-for Ready, 2-for Testing, 3-for Training\n");
    scanf("%d ", &model_status);
    printf("enter the user roles (1-for Admin, 2-for Developer, 3-for Researcher\n");
    scanf("%d ", &user_roles);

    float m_accuracy, confidence_score, data_size;
    printf("enter the m_accuracy, confidence_score, data_size\n ");
    scanf("%f %f %f ", &m_accuracy, &confidence_score, &data_size);
    int model_score =(m_accuracy + confidence_score)/2;
    switch (user_roles)
    {
    case 1:
        printf("Admin\n");
        switch (model_status)
        {
            case 1:
            printf("Ready\n");
            break;
            case 2:
            printf("Testing\n");
            break;
            case 3:
            printf("Training\n");
            break;
            
        }
        
        break;
    case 2:
        printf("Developer\n");
        switch (model_status)
        {
            case 1:
            printf("Ready\n");
            break;
            case 2:
            printf("Testing\n");
            break;
            case 3:
            printf("Training\n");
            break;
            
        }
        
        break;
    case 3:
        printf("Reasearcher\n");
        switch (model_status)
        {
            case 1:
            printf("Ready\n");
            break;
            case 2:
            printf("Testing\n");
            break;
            case 3:
            printf("Training\n");
            break;
            
        }
        
        break;
    

    }
    printf("enter the no; to take an action\n");
    scanf("%d", &permission);
    if (permission &2)
    {
        printf("you are allowed to Train only\n");
    }
    else if (permission & 1)
    {
        printf("you can view\n");

    }
    
    else if(permission & 4){
        printf("you are allowed to Test\n");
    }
    else
        printf("Not allowed\n");
        return 0;
        
    if (m_accuracy >=80 && confidence_score >=75 && data_size >= 1000 && model_status ==1 && (permission & 8)){
        printf("Deployment ready\n");
    }else
        printf("Deployment Not ready\n");
}