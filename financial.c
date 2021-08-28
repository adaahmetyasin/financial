// we are gonna find our cost for each coin which we buy and sell a lot
#include<stdio.h>
  
int main(){
    char choice;
    char currency[20], coinname[20];
    float purchasequantity, salesquantity;
    float totalpurchasequantity=0, totalsalesquantity=0, totalpurchasecost=0, totalsalescost=0;
    float purchasecost, salescost, cost;

    printf("Please enter your coinname which you buy: ");
    scanf("%s",coinname);
    
    printf("Please enter your currency: ");
    scanf("%s",currency);
    
    
    do{
        printf("Please enter how many %s how many %s did you buy: \n",currency,coinname);
        scanf("%f %f",&purchasecost,&purchasequantity);
        
        totalpurchasecost += purchasecost;
        totalpurchasequantity += purchasequantity;

        printf("Do you want to repeat the operation?(Y/N): \n");
        scanf("%s", &choice);
     } while (choice == 'y' || choice == 'Y');

printf("Your total purchase cost is %f\nYour total purchase quantity is %f.\n",totalpurchasecost,totalpurchasequantity);
    
    do{
        printf("Please enter how many %s and how many %s you sold:\n ",currency,coinname);
        scanf("%f %f",&salescost,&salesquantity);
        
        totalsalescost += salescost;
        totalsalesquantity += salesquantity;

        printf("Do you want to repeat the operation?(Y/N): \n");
        scanf("%s", &choice);
     } while (choice == 'y' || choice == 'Y');

printf("Your total sales cost is %f\nYour total sales quantity is %f.\n",totalsalescost,totalsalesquantity);
    
    cost = (totalpurchasecost-totalsalescost) / (totalpurchasequantity-totalsalesquantity);
    if(cost<0){
        printf("You can sell it however you want, you have no cost in this coin :)");
    }
    
    printf("Your 1 %s' cost is %f %s\n",coinname,cost,currency);
    printf("I hope you don't lose your money :)");    

    
    return 0;
}
