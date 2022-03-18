/* Swap the strings using array and pointer. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void pointer_no_swap(char *str1, char *str2)
{
    char *temp;

    temp = str1;
    str1 = str2;
    str2 = temp;

    /* the swapped values will remain swapped only inside this function. */
    printf("\nInside no swap function\r\n%s\n", str1);
    printf("%s\n\n", str2);

}

void pointer_swap(char **str1, char **str2)
{
    /* Values changed here will reflect outside this function. */
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void arr_string_swap(char *arr1, char *arr2)
{
    char *temp = (char*)malloc((strlen(arr1) + 1)/sizeof(char));

    strcpy(temp, arr1);
    strcpy(arr1, arr2);
    strcpy(arr2, temp);

    free(temp);
}

void main()
{
    char *str1 = "hello";
    char *str2 = "world";

    /* using char arr to store the string */
    char arr1[] = "Naruto";
    char arr2[] = "Hinata";

    printf("Before swap\r\n%s\n", str1);
    printf("%s\n\n", str2);


    pointer_no_swap(str1, str2);
    /* This function does not swap the strings. It only changes the
       local pointer variable and the changes are not reflected 
       outside the function.*/
    printf("After no swap function\r\n%s\n", str1);
    printf("%s\n\n", str2);

    /****************************************//*
     * Correct way to swap the strings:
     * Change str1 and str2 to point to each others data. i,e swap pointers.
     * If we want to change the pointers and want to reflect the change outside the
     * function then we need to pass the pointer to the pointer.
     */
    pointer_swap(&str1, &str2);

    printf("After swap function\r\n%s\n", str1);
    printf("%s\n\n", str2);

    /* If using char arr to store the string then the preferred way is to swap the
     * data of both the arrays.
     * 
     * Double pointers can also be used with char arr strings but there might be a runtime
     * error of "stack smashing detected", this is because of buffer overflows"
     * 
     * ex: pointer_swap(*&arr1, *&arr2);
     */
    arr_string_swap(arr1, arr2);

    printf("After Array swap function\r\n%s\n", arr1);
    printf("%s\n\n", arr2);

}