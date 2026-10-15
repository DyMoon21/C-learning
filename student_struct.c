/*
创建一个用来表示学生的结构体
学生（学号，姓名，年龄，成绩）；
创建至少5名学生并填充信息
定义3个函数：
1.传入全部学生信息，计算并返回最高分
2.传入全部学生信息，计算并返回平均分
3.传入全部学生信息，计算并返回及格率
*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char stuName[20];
    int age;
    double score;
}Student;

double maxScore(Student *stds, int len)
{
    double max = 0;
    for (int i = 0; i < len; i++)
    {
        if (stds[i].score > max)
        {
            max = stds[i].score;
        }
    }
    return max;
}

double average(Student *stds, int len)
{
    double allScore = 0;
    for(int i = 0; i < len; i++)
    {
        allScore += stds[i].score;
    }
    return allScore / len;
}

double passPercent(Student *stds, int len)
{
    double passCount = 0;
    for(int i = 0; i < len; i++)
    {
        if (stds[i].score >= 60)
        {
            passCount++;
        }
    }
    return passCount / len;
}

int main(int argc, char const *argv[])
{
    Student s1;
    Student s2;
    Student s3;
    Student s4;
    Student s5;

    Student stus[] = {s1, s2, s3, s4, s5};

    char* names[] = {"文彦博", "司马光", "孔融", "刘晏", "周瑜"};
    double scores[] = {56, 56, 89, 76, 89};
    int len = sizeof(stus) / sizeof(stus[0]);
    for (int i = 0; i < len; i++)
    {
        stus[i].id = i + 1;
        strcpy(stus[i].stuName, names[i]);
        stus[i].age = 20 + i;
        stus[i].score = scores[i];
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d - %s - %d - %lf\n", stus[i].id, stus[i].stuName, stus[i].age, stus[i].score);
    }
    printf("最高分：%lf\n", maxScore(stus, len));
    printf("平均分：%lf\n", average(stus, len));
    printf("及格率：%lf%%\n", passPercent(stus, len) * 100);

    return 0;
}