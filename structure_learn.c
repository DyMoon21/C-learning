#include <stdio.h>

typedef struct Birthday {
    int year;
    int month;
    int day;
} Birthday;

typedef struct Student {
    int id;
    char *name;
    int age;
    float score;
    Birthday birthday;
} Student;

void printStudentInfo(Student *pStu) {
    printf("学号：%d\t姓名：%s\t年龄：%d\t成绩：%.2f\t生日：%d年%d月%d日\n", 
           pStu->id, pStu->name, pStu->age, pStu->score, 
           pStu->birthday.year, pStu->birthday.month, pStu->birthday.day);
}

int main() {
    Student stu1 = {1001,"淡月",19,100,{2005,1,25}};
    
    Student stu2 = {1002,"烁白",21,91,{2000,7,8}};

    Student *pStu = &stu1;

    printStudentInfo(pStu);
    pStu = &stu2;
    printStudentInfo(pStu);

    return 0;
}