extern int swap_counter; // declare the share variable

int main()
{
    // swap_counter = 1; // assign the variable

    increase_swap_counter();
    printf("swap_counter = %d\n", swap_counter);
    increase_swap_counter();
    printf("swap_counter = %d\n", swap_counter);
    swap_counter += 10;
    printf("swap_counter = %d\n", swap_counter);
}