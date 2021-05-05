//Author - Robin


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
 
int main(){
  
    int  num, guess, nguesses=1;
   
    srand(time(0));
    num= rand()%100 +1;//Generat the random number between 1to 100
    printf("%d\n",num);
    printf("Gess the number between 1 to 100\n");
    
    do
    {
      
        scanf("%d",&guess);
        if (guess>num)
        {
            printf("Lower number pleas!\n");
        }
        else if (guess<num)
        {
            printf("Higher number pleas!\n");
        }
        else
        {
            printf("Your guess is %d\n",nguesses);
        }
        nguesses++;
        
    } while (guess!=num);
    

    return 0;
}
