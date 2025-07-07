#include <unistd.h>

void	ft_print_alphabet(void)
{
    int x= 'a'; // use ascii values

    while (x <= 'z')
    {
         //write(1, "\n", 1);
        write(1, &x, 1);
        x--;
    }   
}int main (){

ft_print_alphabet();
    
    return 0;
}