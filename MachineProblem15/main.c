#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LENGTH 50
#define MAX_NUMBER 20


struct student_t{
    char name[50];
    int id;
    double average;
    char grade;
    double scores[20];
    int numofgrade;
};

//Function Prototypes
void nameInAscending(char name[50]);
void getAverage(struct student_t average[]);
void getGrade(struct student_t grade[]);


int main(){

    char line[MAX_LENGTH];
    int numOfStudents;
    char filename[50];
    char *pch;
    double average;
    char grade;
    printf("Welcome to the automated grade book program.\n");
    printf("Enter student data filename: ");
    scanf(" %s", &filename);

    if(strcmp(filename, "grades.txt") != 0){
        printf("Unable to open file %s. Try again\n");
    } else {
        printf("Enter student data filename: ");
        scanf(" %s", &filename);
    }

    FILE* input_file;     /*File variable*/
    input_file = fopen(filename, "r");

    if (input_file == NULL) {
        printf("File %s not found!\n", filename);
        exit(1);
    }
    fscanf(input_file, "%d", &numOfStudents);

    struct student_t students[numOfStudents];

    for(int i=0; i < numOfStudents; i++){
        int j=0;

        fscanf(input_file,"%d\n", &students[i].id);
        fgets(students[i].name, 50,input_file);
        //printf("print: %d\t%s\t%d\n", &students[i].id, &students[i].name, &students[i].scores);

        fgets(line,50, input_file);
        pch = strtok(line," ");
        //printf("id=%d\nname=%s\n", students[i].id, students[i].name);
        //printf("score=");
        while(pch != NULL){
            students[i].scores[j] = atof(pch);
            //printf ("%.f ", students[i].scores[j]);
            j++;
            pch = strtok(NULL, " ");
        }
        //printf("\n");
    void nameInAscending(char name[50]);
    getAverage(student_t average[]);
    getGrade(student_t grade[]);

    return 0;
}

void nameInAscending(char name[50]){
    char temp[50];
    int count;
    int i,j;
    for(i=0; i<=count;i++)
        gets(name[i]);
    for(i=0;i<=count;i++)
        for (int j= i + 1; j <=count; j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    for(i=0; i<=count;i++)
        puts(name[i]);
}

void getAverage(struct student_t average[]){
    student_t average;
    struct student_t scores[50];
    int i, sum =0.0;
    for(i=0; i < MAX_NUMBER; i++){
        sum = sum + scores[i];
    }
    average = sum / MAX_NUMBER;

    return average;
}

void getGrade(struct student_t grade[]){
    for(int i=0; i < MAX_NUMBER; i++){
        if(student_t[i].average >= 90){
            grade = 'A';
        }elseif(student_t[i].average <=90){
            grade = 'B';
        }elseif(student_t[i].average <=80){
            grade = 'C';
        }elseif(student_t[i].average <=70){
            grade = 'D';
        }elseif(student_t[i].average <=60){
            grade = 'F'
        }
    }
    return grade;
}


