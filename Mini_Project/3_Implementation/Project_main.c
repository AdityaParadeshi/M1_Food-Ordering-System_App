#include <foodordersystem.h>

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

        p[order_cnt].number_of_food +=qunt;

        if (i==1) p[order_cnt].cost += (130*qunt);

        else p[order_cnt].cost += (180*qunt);
        break;
    }
    case 12 :{
        printf ("Enter the size of pizzasandwitch: 1. 10inch  2. 13inch  3. 17inch\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

        p[order_cnt].number_of_food +=qunt;

        if (i==1) p[order_cnt].cost += (750*qunt);

        else if (i==2) p[order_cnt].cost += (975*qunt);

        else  p[order_cnt].cost += (1250*qunt);

        break;
    }
    case 13 :{
        printf ("Enter the amount of Potato fries: 1. 1 pcs  2. 4 pcs  3. 10 pcs\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

        p[order_cnt].number_of_food +=qunt;

        if (i==1) p[order_cnt].cost += (85*qunt);

        else if (i==2) p[order_cnt].cost += (320*qunt);

        else  p[order_cnt].cost += (790*qunt);

        break;
    }
    case 14 :{
        printf ("Enter the size of veg  rice: 1. quarter  2. half  3. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

        p[order_cnt].number_of_food +=qunt;

        if (i==1) p[order_cnt].cost += (70*qunt);

        else if (i==2) p[order_cnt].cost += (140*qunt);

        else  p[order_cnt].cost += (250*qunt);

        break;
    }
    case 15 :{
        printf ("Enter the size of Biryani: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

        p[order_cnt].number_of_food +=qunt;

        if (i==1) p[order_cnt].cost += (130*qunt);

        else p[order_cnt].cost += (250*qunt);

        break;
    }
    case 16 :{
        printf ("Enter the size of masalabhel: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

        p[order_cnt].number_of_food +=qunt;

        if (i==1) p[order_cnt].cost += (120*qunt);

        else p[order_cnt].cost += (240*qunt);

        break;
    }
    case 17 : {
        printf ("250 ml of Milk SHAKE\n");

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

        p[order_cnt].number_of_food +=qunt;
        p[order_cnt].cost += (180*qunt);
        break;
    }
    case 18 : {
        printf ("250 ml of Apple Juice\n");

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

        p[order_cnt].number_of_food +=qunt;
        p[order_cnt].cost += (65*qunt);
        break;
    }
    case 19 : {
        printf ("250 ml of Coffee\n");

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

        p[order_cnt].number_of_food +=qunt;
        p[order_cnt].cost += (70*qunt);
        break;
    }
    case 20 :{
        printf ("Enter the size of Sprite: 1. 250ml  2. 500ml\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf (" enter the quantity: ");
        scanf ("%d", &qunt);
        getchar();

        p[order_cnt].number_of_food +=qunt;

        if (i==1) p[order_cnt].cost += (20*qunt);

        else p[order_cnt].cost += (30*qunt);
        break;
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
void items ()
{
    printf("..................................MENU...................................\n");

    printf("Item Code#   Description-------------------Size--------------------Price(rs)\n");

    printf("[11]---------Cake---------------------200/300gm------------------130/180\n");
    printf("[12]---------pizzasandwitch-------------12/14/16inch---------------750/975/1250\n");
    printf("[13]---------Potato Fries----------1/4/10 pcs-----------------85/320/790\n");
    printf("[14]---------veg rice-----------quarter/half/full----------70/140/250\n");
    printf("[15]---------Biryani------------------Half/Full------------------130/250\n");
    printf("[16]--------- Masalabhel------------Half/Full------------------120/240\n");
    printf("[17]---------Milk Shake---------------250ml----------------------180\n");
    printf("[18]---------Apple Juice---------------250ml----------------------65\n");
    printf("[19]---------coffee--------------------250ml----------------------70\n");
    printf("[20]---------Sprite--------------------250/500ml------------------20/30\n\n");


}
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
                printf ("Cafe is closed come  again\n\n");

            
             
                return 0;
            }
        }
    }
}