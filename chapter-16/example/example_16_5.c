//To illustrate bit-fields
#include<stdio.h>
struct date{
    unsigned int day:5;
    unsigned int month:4;
    unsigned int year:7;
};
struct emp{
    struct date doj;
    unsigned mar_status:2;
    unsigned grade :2;
    int empno;
    char name[20];
    float salary;
};
int main(void){
    struct emp e;
    unsigned int day, month, year, mar_status, grade;
    printf("Enter empno, name and salary\n");
    scanf("%d %s %f", &e.empno, e.name, &e.salary);

    printf("Enter date of joining (dd mm yyyy)\n");
    scanf("%u %u %u", &day, &month, &year);
    e.doj.day = day;
    e.doj.month = month;
    e.doj.year = year;

    printf("Enter marital status [1-3]\n");
    scanf("%u", &mar_status);
    e.mar_status = mar_status;

    printf("Enter grade [1-3]\n");
    scanf("%u", &grade);
    e.grade = grade;
    printf("%-4d %-15s %-8.2f", e.empno, e.name, e.salary);
    printf("%u/%u/%u %u %u\n", e.doj.day, e.doj.month, e.doj.year, e.mar_status, e.grade);
    return 0;
}
