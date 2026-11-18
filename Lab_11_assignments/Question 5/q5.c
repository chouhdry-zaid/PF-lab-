#include<stdio.h>
struct HospitalRecord{
    int recordID;
    char admissionDate[20];
    struct PatientInfo{
        int patientID;
        char name[50];
        int age;
    } patient;
};
int main(){
    struct HospitalRecord record={5001,"18-11-2026",{201,"Ali",35}};
    struct HospitalRecord *ptr;
    ptr=&record;
    printf("Record ID: %d\n",ptr->recordID);
    printf("Admission Date: %s\n",ptr->admissionDate);
    printf("Patient ID: %d\n",ptr->patient.patientID);
    printf("Patient Name: %s\n",ptr->patient.name);
    printf("Patient Age: %d\n",ptr->patient.age);
    return 0;
}
