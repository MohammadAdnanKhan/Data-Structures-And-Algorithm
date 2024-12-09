#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[20];
    int marks;
    int semester;
};

void enterStudentData(struct student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->rollno);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter marks: ");
    scanf("%d", &s->marks);
    printf("Enter semester: ");
    scanf("%d", &s->semester);
}

void displayAllRecords(struct student s[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d, Name: %s, Marks: %d, Semester: %d\n",
               s[i].rollno, s[i].name, s[i].marks, s[i].semester);
    }
}

void searchByRollNo(struct student s[], int count) {
    int roll;
    printf("Enter roll number: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (s[i].rollno == roll) {
            printf("Found: Roll No: %d, Name: %s, Marks: %d, Semester: %d\n",
                   s[i].rollno, s[i].name, s[i].marks, s[i].semester);
            return;
        }
    }
    printf("Student not found.\n");
}

void searchByName(struct student s[], int count) {
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    for (int i = 0; i < count; i++) {
        if (strcmp(s[i].name, name) == 0) {
            printf("Found: Roll No: %d, Name: %s, Marks: %d, Semester: %d\n",
                   s[i].rollno, s[i].name, s[i].marks, s[i].semester);
            return;
        }
    }
    printf("Student not found.\n");
}

void displayTopper(struct student s[], int count) {
    int maxMarks = -1, index = -1;
    for (int i = 0; i < count; i++) {
        if (s[i].marks > maxMarks) {
            maxMarks = s[i].marks;
            index = i;
        }
    }
    if (index != -1) {
        printf("Topper: Roll No: %d, Name: %s, Marks: %d, Semester: %d\n",
               s[index].rollno, s[index].name, s[index].marks, s[index].semester);
    }
}

void listBySemester(struct student s[], int count) {
    int sem;
    printf("Enter semester: ");
    scanf("%d", &sem);
    for (int i = 0; i < count; i++) {
        if (s[i].semester == sem) {
            printf("Roll No: %d, Name: %s, Marks: %d, Semester: %d\n",
                   s[i].rollno, s[i].name, s[i].marks, s[i].semester);
        }
    }
}

int main() {
    struct student students[100];
    int count = 0, choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Enter student\n2. Display all\n3. Search by roll no.\n");
        printf("4. Search by name\n5. Topper\n6. List by semester\n7. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enterStudentData(&students[count++]);
                break;
            case 2:
                displayAllRecords(students, count);
                break;
            case 3:
                searchByRollNo(students, count);
                break;
            case 4:
                searchByName(students, count);
                break;
            case 5:
                displayTopper(students, count);
                break;
            case 6:
                listBySemester(students, count);
                break;
            case 7:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

// Menu driven program (for struct student { int rollno; char name[20]; int marks; int semester; } )
// 1. Enter one student's data
// 2. Display all records
// 3. Search by roll no.
// 4. Search by name
// 5. Give topper details
// 6. List all students by semester
// 7. Exit
