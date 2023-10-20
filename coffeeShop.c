#include <stdio.h>

void greeting(); //welcome the user to the coffee shop
void order(double *balance); //user will make a purchase
void viewAccount(double *balance); //display current account balance of user
void transaction(double *balance, double price); //transaction with user account
void reload(double *balance); //reload your account balance
void displayMenu(); //display beverage/food options and prices

int main()
{
    printf("\nWelcome to Collin's Coffee Shop!\n");
    printf("---------------------------------------------\n");

    //declare variables and pointers
    int input = 1;
    double currentBalance = 0;
    double *balance = &currentBalance;
    
    //MAIN LOOP until user exits
    while(input != 0){
        //call greeting
        greeting();

        
        //prompt user input
        printf("Please select an option: ");
        scanf("%d", &input);


        switch (input)
        {
        case 0:
            //end of program when user exits
            printf("---------------------------------------------\n");
            printf("Your ending balance is $%.2lf\n", balance);
            printf("Goodbye!");
            break;
        
        case 1:
            //print selection and call function
            printf("\nYou have selected the Order option\n");
            printf("---------------------------------------------\n");
            order(balance);
            break;

        case 2:
            //print selection and call function
            printf("\nYou have selected the View Balance option\n");
            printf("---------------------------------------------\n");
            viewAccount(balance);
            break;

        case 3:
            //print selection and call function
            printf("\nYou have selected the Reload Account option\n");
            printf("---------------------------------------------\n");
            reload(balance);
            break;

        case 4:
            //print selection and call function
            printf("\nYou have selected the Display Menu option\n");
            printf("---------------------------------------------\n");
            displayMenu();
            break;
                
        default:
            //print invalid and return to main loop
            printf("Invalid Input\n");
            break;
        }
    }    

    return 0;
}


void greeting()
{
    //display input options
    printf("Please select one of the following options\n");
    printf("1: Order\n");
    printf("2: View Account Summary\n");
    printf("3: Display Menu\n");
    printf("4: Reload Account\n");
    printf("0: Exit\n");
    printf("---------------------------------------------\n");
}


void order(double *balance)
{
    //declare variables
    int input;
    double price;


    //display menu
    printf("Collin's Coffee Shop Menu\n");
    printf("---------------------------------------------\n");
    printf("1. Hot Coffee                           $3.53\n");
    printf("2. Iced Coffee                          $4.20\n");
    printf("3. Hot Latte                            $3.13\n");
    printf("4. Iced Latte                           $4.12\n");
    printf("5. Bagel (includes cream cheese)        $3.99\n");
    printf("6. Big Scone                            $4.99\n");
    printf("7. Frozen Coffee                        $5.03\n");
    printf("8. Bottle Water                         $1.50\n");
    printf("---------------------------------------------\n");

    
    //prompt user input
    printf("What would you like to order?\n");
    printf("Option selected: ");
    scanf("%d", &input);


    switch (input){
        case 1:
            //set according price and call funtion
            price = 3.53;
            printf("Hot Coffee has been selected the total price is: $%.2lf\n", price);
            transaction(balance, price);
            break;

        case 2:
            //set according price and call funtion
            price = 4.2;
            printf("Iced Coffee has been selected the total price is: $%.2lf\n", price);
            transaction(balance, price);
            break;

        case 3:
            //set according price and call funtion
            price = 3.13;
            printf("Hot Latte has been selected the total price is: $%.2lf\n", price);
            transaction(balance, price);
            break;

        case 4:
            //set according price and call funtion
            price = 4.12;
            printf("Iced Latte has been selected the total price is: $%.2lf\n", price);
            transaction(balance, price);
            break;

        case 5:
            //set according price and call funtion
            price = 3.99;
            printf("Bagel has been selected the total price is: $%.2lf\n", price);
            transaction(balance, price);
            break;

        case 6:
            //set according price and call funtion
            price = 4.99;
            printf("Big Scone has been selected the total price is: $%.2lf\n", price);
            transaction(balance, price);
            break;

        case 7:
            //set according price and call funtion
            price = 5.03;
            printf("Frozen Coffee has been selected the total price is: $%.2lf\n", price);
             transaction(balance, price);
             break;

        case 8:
            //set according price and call funtion
            price = 1.5;
            printf("Bottle Water has been selected the total price is: $%.2lf\n", price);
            transaction(balance, price);
            break;

        default:
            //print invalid and return to main loop
            printf("Invalid input\n");
            printf("---------------------------------------------\n");
            break;
    }
}


void viewAccount(double *balance)
{
    //print current balance
    printf("Your current balance is: $%0.2lf\n", *balance);
    printf("---------------------------------------------\n");
}


void transaction(double *balance, double price)
{
    //determine if user can buy item
    if(*balance - price > 0)
    {   
        //update balance and print
        *balance -= price;
        printf("Transaction was successful!\n");
        printf("Your current balance is now %.2lf\n", *balance);
        printf("---------------------------------------------\n");
    }
    else
    {   
        //print invalid and call reload function
        printf("\nInvalid transaction: your current account balance is only: $%.2lf\n", *balance);
        printf("Please reload your account balance\n");
        printf("---------------------------------------------\n");
        reload(balance);
    }
}

void reload(double *balance)
{   
    //declare variables
    int input;

    //print user options and collect input
    printf("How much money would you like to add?\n");
    printf("1: $1\n");
    printf("2: $5\n");
    printf("3: $10\n");
    printf("Option Selected: ");

    scanf("%d", &input);


    switch (input)
    {
    case 1:
        //update balance and print successful additon
        *balance += input;
        printf("---------------------------------------------\n");
        printf("$1 has been added to your account successfully\n");
        printf("---------------------------------------------\n");
        break;

    case 2:
        //update balance and print successful additon
        *balance += input;
        printf("---------------------------------------------\n");
        printf("$5 has been added to your account successfully\n");
        printf("---------------------------------------------\n");
        break;

    case 3:
        //update balance and print successful additon
        *balance += input;
        printf("---------------------------------------------\n");
        printf("$10 has been added to your account successfully\n");
        printf("---------------------------------------------\n");
        break;
    
    default:
        //print invalid and return to main loop
        printf("---------------------------------------------\n");
        printf("Invalid input\n");
        printf("---------------------------------------------\n");
        break;
    }
}

void displayMenu(){
    //print menu
    printf("Collin's Coffee Shop Menu\n");
    printf("---------------------------------------------\n");
    printf("1. Hot Coffee                           $3.53\n");
    printf("2. Iced Coffee                          $4.20\n");
    printf("3. Hot Latte                            $3.13\n");
    printf("4. Iced Latte                           $4.12\n");
    printf("5. Bagel (includes cream cheese)        $3.99\n");
    printf("6. Big Scone                            $4.99\n");
    printf("7. Frozen Coffee                        $5.03\n");
    printf("8. Bottle Water                         $1.50\n");
    printf("---------------------------------------------\n");
}
