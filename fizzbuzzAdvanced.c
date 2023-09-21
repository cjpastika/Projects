#include <stdio.h>
#include <math.h>

int optionOne(){
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    
    if(i % 3 == 0 && i % 5 == 0){
        printf("fizzbuzz");
    } else if(i % 3 == 0){
        printf("fizz");
    } else if(i % 5 == 0){
        printf("buzz");
    } else {
        printf("%d", i);
    }
    return 0;   
}

int optionTwo(){
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
        printf("fizzbuzz\n");
        } else if(i % 3 == 0){
            printf("fizz\n");
        } else if(i % 5 == 0){
            printf("buzz\n");
        } else {
            printf("%d\n", i);
        }  
    }
    return 0;
}

int main() {
     int x;
     printf("Choose option 1 or option 2: ");
     scanf("%d", &x);
     if(x == 1){
        optionOne();
     } else if(x == 2){
        optionTwo();
     } else {
        printf("\nInvalid Choice :()");
     }
    
    return 0;
} 