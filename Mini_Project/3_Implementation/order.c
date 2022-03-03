#include<complex.h>
struct order{
    char name[50];
    int order_no;
    int number_of_food;
    int cost;
}p[10000];
int order_cnt = 0, served_cnt = 0, waiting_now = 0;
int order ()
{
    int num, inn, qunt;
    printf (" enter your name: ");
    gets (p[order_cnt].name);
    p[order_cnt].order_no = 10000+order_cnt;
    items();
    p[order_cnt].number_of_food = num;
    p[order_cnt].cost = 0;
    p[order_cnt].number_of_food = 0;
    
    level:
    printf (" enter number of items you want to order? ");
    scanf ("%d", &num);

    getchar ();
    while (num--){
        printf ("\nEnter item code you want to order\n");
        scanf ("%d", &inn);
        getchar();
        switch(inn){
    case 11 : {
        printf ("Enter the size of cake: 1. 200gm  2. 300gm\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

     
    }
    case 12 :{
        printf ("Enter the size of pizzasandwitch: 1. 10inch  2. 13inch  3. 17inch\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

      
    }
    case 13 :{
        printf ("Enter the amount of Potato fries: 1. 1 pcs  2. 4 pcs  3. 10 pcs\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

      
    }
    case 14 :{
        printf ("Enter the size of veg  rice: 1. quarter  2. half  3. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

      
    }
    case 15 :{
        printf ("Enter the size of Biryani: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

       
    }
    case 16 :{
        printf ("Enter the size of masalabhel: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

       
    }
    case 17 : {
        printf ("250 ml of Milk SHAKE\n");

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

     
    }
    case 18 : {
        printf ("250 ml of Apple Juice\n");

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

      
    }
    case 19 : {
        printf ("250 ml of Coffee\n");

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

      
    }
    case 20 :{
        printf ("Enter the size of Sprite: 1. 250ml  2. 500ml\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

      
    }
    default : {
        printf ("Invalid input try again\n");
        num++;
    }
        }
    }
    char temp;
    printf ("Do you want to order any item else?(yes/no)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[order_cnt].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %drs.\nPlease wait while we prepare the food.\n\n", p[order_cnt].name, p[order_cnt].cost);
    order_cnt ++;
}
int receive ()
{
    if (order_cnt==0){
        printf ("enter order first\n");
        return;
    }

    else if (served_cnt == order_cnt) {
        printf ("All order served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_cnt].order_no, p[served_cnt].name);
    printf ("Enjoy your meal\n\n");
    served_cnt++;
}
int display ()
{
    printf ("Total order taken: %d\n", (order_cnt));
    printf ("Total number of order served %d\n", served_cnt);
    printf ("Number of Currently waiting to be served: %d\n", (order_cnt-served_cnt));
    printf ("Currently preparing food for order no. %d\n\n", p[served_cnt].order_no);
}
