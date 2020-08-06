#include<stdio.h>
#include<stdlib.h>

int main(){
    int count1 = 0, count2 = 0, a = 0;
    char str[10];
    srand(1);

    printf("Who are you?\n");
    scanf("%s",str);
    printf("Hello, %s!\n",str);
    
    printf("Tossing a coin...\n");
    for(int i = 1; i < 4; i++){
        printf("Round %d: ",i);
        a = rand() % 2;
        if(a == 0){
            printf("Heads\n");
            count1++;
        }else{
            printf("Tails\n");
            count2++;
        }
    }
    printf("Heads: %d, Tails: %d\n",count1,count2);
    if(count1 > count2){
        printf("%s won\n",str);
    }else{
        printf("%s lost\n",str);
    }

    return 0;
}

