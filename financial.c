// we are gonna find our cost for each coin which we buy and sell a lot
#include<stdio.h>

int main(){
    char choice;
    char currency[20], coinName[20];
    float purchaseQuantity, salesQuantity;
    float totalPurchaseQuantity=0, totalSalesQuantity=0, totalPurchaseCost=0, totalSalesCost=0;
    float purchaseCost, salesCost, cost;

    printf( "Please enter your coinname which you buy: ");
    scanf( "%s", coinName);
    
    printf( "Please enter your currency: ");
    scanf( "%s", currency);
    
    do{
        printf( "Please enter how many %s how many %s did you buy: \n", currency, coinName);
        scanf( "%f %f", &purchaseCost, &purchaseQuantity);

        if (purchaseCost < 0 || purchaseQuantity < 0) /* We check if the numbers are positive. */ 
        {
            printf( "Please enter a valid number!\n" );
            printf( "Please enter how many %s how many %s did you buy: \n", currency, coinName);
            scanf( "%f %f", &purchaseCost, &purchaseQuantity);
        } 
        else
        {
            totalPurchaseCost += purchaseCost;
            totalPurchaseQuantity += purchaseQuantity;

            printf( "Type yes(y) to enter purchase information, no(n) to enter sales information:\n " );
            scanf( "%s", &choice);
        }
     } while (choice == 'y' || choice == 'Y');

printf( "Your total purchase cost is %f\nYour total purchase quantity is %f.\n", totalPurchaseCost, totalPurchaseQuantity);
    
    do{
        printf( "Please enter how many %s and how many %s you sold:\n ", currency, coinName);
        scanf( "%f %f", &salesCost, &salesQuantity);
        
        if (salesCost < 0 || salesQuantity < 0) /* We check if the numbers are positive. */ 
        {
            printf( "Please enter a valid number!\n" );
            printf( "Please enter how many %s how many %s did you buy: \n",currency,coinName);
            scanf( "%f %f", &salesCost, &salesQuantity);
        }
        else
        {
            totalSalesCost += salesCost;
            totalSalesQuantity += salesQuantity;

            printf( "Type yes(y) to enter sales information, and no(n) to find out your cost:\n" );
            scanf("%s", &choice);
        }
     } while (choice == 'y' || choice == 'Y');

printf( "Your total sales cost is %f\nYour total sales quantity is %f.\n", totalSalesCost, totalSalesQuantity);
    
    cost = ( totalPurchaseCost - totalSalesCost ) / ( totalPurchaseQuantity - totalSalesQuantity );
    if(cost<0)
    {
        printf( "You can sell it however you want, you have no cost in this coin :)" );
    }
    else
    {
        printf( "Your 1 %s' cost is %f %s\n", coinName, cost, currency);
        printf( "I hope you don't lose your money :)" );   
    }
    puts( "" );  

    return 0;
}
