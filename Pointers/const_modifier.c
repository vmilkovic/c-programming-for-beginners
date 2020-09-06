
int main(void){

    long value = 9999L;
    const long *pvalue = &value; // defines a pointer to a constant

    // *pvalue = 8888L; // error - attempt to change const location

    value = 7777L; // can change value because the pointer is the constant but not the value

    long number = 8888L;
    pvalue = &number; // can change the address in pvalue

    int count = 43;
    int *const pcount = &count; // Defines a constant pointer -> address cant change

    int item = 34;
    //pcount = &item; // Error - cant change constant pointer

    *pcount = 345; // Can change the value

    int item2 = 25;
    const int *const pitem = &item2;

    return 0;
}