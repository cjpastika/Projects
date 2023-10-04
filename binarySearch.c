#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guesser(int lBound, int hBound, int num);

int main(){
    srand(time(0));
    int hBound;
    int lBound;
    int num;

    printf("Choose a low bound: ");
    scanf("%d", &lBound);

    printf("Choose a high bound: ");
    scanf("%d", &hBound);
    
    num = (rand() % hBound) + lBound;

    guesser(lBound, hBound, num);
    
    return 0;
}

void guesser(int lBound, int hBound, int num){
    int guess = (lBound + hBound) / 2;
    
    while (guess != num){
        guess = (lBound + hBound) / 2;
        if (guess == num){
            printf("%d is correct!\n", guess);
            break;
        } else if(guess < num){
            printf("%d\n", guess);
            lBound = guess;
        } else{
            printf("%d\n", guess);
            hBound = guess;
        }
    }

}

