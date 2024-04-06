#include <stdio.h>

int main() {
    int numCourses;
    float totalCGPA = 0.0, cgpa;
    
    printf("Enter the number of courses: ");
    scanf("%d", &numCourses);
    
    printf("Enter the CGPA for each course:\n");
    for (int i = 0; i < numCourses; i++) {
        printf("Course %d CGPA: ", i + 1);
        scanf("%f", &cgpa);
        totalCGPA += cgpa;
    }
    
    float avgCGPA = totalCGPA / numCourses;
    printf("Average CGPA: %.2f\n", avgCGPA);
    
    return 0;
}
