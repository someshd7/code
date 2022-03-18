// #include <stdio.h>

// void main()
// {
//     int arr[4], i;

//     printf("size of int is %lu\n", sizeof(int));

//     for(i = 0; i < (sizeof(arr) / sizeof(int)); i++) //Array traverse till number of elements
//     {
//         printf("address of arr[%d] is %p\n", i, &arr[i]);

//         printf("value at arr[%d] element is %d\n\n", i, arr[i]); 
//     }
// }

//**********************************************************************************************************************
// C Program to demonstrate incorrect usage of sizeof() for
// arrays
// #include <stdio.h>

// void fun(int arr[])
// {
// 	int i;

// 	// sizeof should not be used here to get number
// 	// of elements in array
// 	int arr_size = sizeof(arr) / sizeof(arr[0]);

// 	for (i = 0; i < arr_size; i++) {
// 		arr[i] = i;
// 	}
// 	// executed only once
// }

// // Driver Code
// int main()
// {
// 	int i;
// 	int arr[4] = { 0, 0, 0, 0 };
// 	fun(arr);

// 	// use of sizeof is fine here
// 	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
// 		printf(" %d ", arr[i]);

// 	getchar();
// 	return 0;
// }

//********************************************************************************************************************


#include<stdio.h>
#include<string.h>

struct test
{
    char *str; 
    /* With Pointer variable, both the variables will have last updated value.i,e shallow copy.
     * 
     * In shallow copy, if the feild value is reference to an object(memory address), it copies the
     * reference. Hence referring to the same objects as the feilds of original. The referenced object
     * is generally shared, so if one of these object is modified, the change is visible in the other. 
     */

/*    char str[20];
     * In case of array, both variables will have their own values. This is called deep copy.

     * In Deep copy, the feilds are dereferenced, rather than references of the objects are copied.
     * A copy of object is copied in other object. It means that any changes made to the copy of
     * object does not reflect to other object.
 *
 */
};

void main()
{
    struct test st1, st2;

    strcpy(st1.str, "DemoString");

    st2 = st1;

    st1.str[0] = 'E';
    st2.str[0] = 'Y';

    /* Copy was shallow, so both strings are same. */
    printf("%s\n", st1.str);
    printf("%s\n", st2.str);
}







































