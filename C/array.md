## Important concepts

#### Declarations styles:

    - int a[3]; //integer array with 3 elements and garbage data
    
    - int a[3] = {1, 2, 3} //Integer array of 3 elements with 1, 2, 3 data in it.
    - int a[3] = {}/{0} //Initialize all array elements with zero.

### Advantages

        - Random access of elements using array index.
        - Easy to access, easy to traverse, easy to sort.

### Disadvantages

        - Fixed size not dynamic.
        - Adding new element can be costly

### Tips

#### Incorrect sizeof.
    - Do not use sizeof directly to find the size of arrays. this can result in an error in the code
    , as array parameters are treated as a pointer.

    ** refer array-basics.c for code.

    ex. void func(int arr[])
        {
            int arr_size = sizeof(arr)/sizeof(arr[0]);
            // this will generate warning.
        }
    The code will compile successfully but the output will not be correct.

#### Fix for incorrect sizeof:

    - Using saperate size parameter.
        In main function:

            int arr[] = {1, 2, 3, 4, 5};
            size_t arr_size = sizeof(arr)/sizeof(arr[0]); //This is allowed since the array declaration is in 
                                                          //main func.
    
    - Using macros:

    #define ARR_SIZE(arr)   sizeof(arr) / sizeof(*arr) 

    void main()
    {
        int arr[] = {1,2,3,4,5}

        size_t array_size = ARR_SIZE(arr);
    }

#### Array members are deeply copied

        We can assign the struct variable to another variable of same type. When we assign struct variable to another, 
        all members are copied to the other struct variable.
        
        - In case of pointers to the dynamically allocated memory, when we assign the struct1 to struct2, pointer of struct2 will also point to same memory location.
        This kind of copying is called **shallow copying**.

        - In case of array, The copy operation is called as deep copying.
            *refer array-basics.c*
        
#### Array size with strings

        arr[]  = "string";  // Compiler will add extra space for string terminator.'\0' size = 7.
        arr[6] = "string"   // Compiler does not add extra space. size = 6.
        
        arr[]  = {'a', 'b', 'c', 'd'} // Compiler does not add extra space. size will be 4.

 #### Difference in char s[] and char *s

    - char a[10] = "array";

        - a is array
        - sizeof(a) = 10 bytes
        - a and &a is same
        - array is stored in the stack region of memory.
        
        - a = 'g'; //this is not allowed, since a is address and string constant is also is           address.

        - a++ is invalid

        - a[0] = 'g' ///valid


    - char *s = "array";
      
        - s is a pointer variable
        - sizeof(s) is 4 bytes
        - s and &s is not same.
        - s is stored in stack but array is stored in code section.

        - s = "string"; //valid.

        - s++ is valid

        - s[0] = 'b'; //invalid because it is read-only
