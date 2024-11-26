
// Profit and loss calculation

#include <stdio.h>

int main(){

    int cost, selling_price, profit_loss;

    printf("Enter the cost: ");
    scanf("%d", &cost);
    printf("Enter the selling price: ");
    scanf("%d", &selling_price);

    if(selling_price > cost) 
    {
        profit_loss = selling_price - cost; // Calculate profit
        printf("Profit = %d", profit_loss);
    }        
    else if (cost > selling_price)
    {
        profit_loss = cost - selling_price; // Calculate loss
        printf("Loss = %d", profit_loss);
    } 
    // If selling price equals cost, no profit or loss
    else
    {
        printf("Neither profit nor loss has been made.");
    }

    return 0;
}