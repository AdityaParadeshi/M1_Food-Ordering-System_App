#include <complex.h>

int main ()
{
    printf ("\t\t     Welcome To My Cafe\n");
    while (1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                system ("COLOR 2");
                printf ("We are closed come by again\n\n");

            
             
                return 0;
            }
        }
    }
}
