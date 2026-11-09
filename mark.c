
#include <stdio.h>

enum grade {
    fail,
    pass,
    second_class,
    first_class,
    distinction
};

enum grade get_grade(int marks)
{
    if (marks < 0 || marks > 100)
        return fail;
    else if (marks < 40)
        return fail;
    else if (marks < 50)
        return pass;
    else if (marks < 60)
        return second_class;
    else if (marks < 70)
        return first_class;
    else
        return distinction;
}

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    enum grade result = get_grade(marks);

    switch(result)
    {
        case fail:
            printf("Fail");
            break;

        case pass:
            printf("Pass");
            break;

        case second_class:
            printf("Second Class");
            break;

        case first_class:
            printf("First Class");
            break;

        case distinction:
            printf("Distinction");
            break;
    }

    return 0;
}
