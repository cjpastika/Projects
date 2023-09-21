#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int guess;
    int num = (rand() % (1000)) + 1;
    printf("Guess a number 1-1000: ");
    

    for(int i = 0; i < 20; i++){
        scanf("%d", &guess);
        if(guess == num){
            printf("correct!\n");
            break;
        } else if(guess > num){
            printf("too hot\n");
        } else{
            printf("too cold\n");
        }
    }

    return 0;
}