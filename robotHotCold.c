#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int hBound;
    int lBound;
    int num;

    printf("Choose a low bound: ");
    scanf("%d", &lBound);

    printf("Choose a high bound: ");
    scanf("%d", &hBound);
    
    int guess = hBound / 2;
    
    num = (rand() % hBound) + lBound;
    

    for (int i = 0; i < 1000; i++){
        if (guess == num){
            printf("%d is correct!\n", guess);
            break;
        } else if(num == hBound && hBound == lBound + 1){
            guess = hBound;
        } else if(num == lBound && lBound == hBound - 1){
            guess = lBound;
        } else if(guess < num){
            printf("%d\n", guess);
            lBound = guess;
            guess = (lBound + hBound) / 2;
        } else{
            printf("%d\n", guess);
            hBound = guess;
            guess = (lBound + hBound) / 2;
        }
    }
    

    return 0;
}