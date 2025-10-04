#include<stdio.h>
int main(){

    char type,size;


        printf("Enter the type of coffee (B for Black and W for White): ");
        scanf(" %c",&type);

        printf("Enter the size of coffee (D for Double and S for Single): ");
        scanf(" %c",&size);
    switch (type){
        case 'B':
        	
            switch (size){
            case 'D':
                     printf("\n Put Water: 30 min\n Sugar : 30 min\n Mix Well: 37.5 min\n Add Coffee 22.5 min\n Add Milk - \n Mix Well 37.5 min\n"); 
                     printf("\nTotal Time: 157.5 min\n");   
                     printf("Double ");
                     break;

            case 'S':
                     printf("\n Put Water: 20 min\n Sugar : 20 min\n Mix Well: 25min\n Add Coffee 15min\n Add Milk - \n Mix Well 25min\n");
                     printf("\nTotal Time: 105 min\n"); 
                     printf("Single ");
                     break;

            default:
                     printf("Invalid Size\n");
                }
                    printf("Black Coffee Ready!\n");
                    break;

        case 'W':
                
			switch (size){
            case 'D':
                     printf("\n Put Water: 22.5 min\n Sugar : 22.5 min\n Mix Well: 30min\n Add Coffee 3min\n Add Milk 3min\n Mix Well 30min\n"); 
                      printf("\nTotal Time: 111 min\n");
                     printf("Double ");
                     break;

            case 'S':
                     printf("\n Put Water: 15 min\n Sugar : 15 min\n Mix Well: 20min\n Add Coffee 2min\n Add Milk 2min\n Mix Well 20min\n");
                     printf("\nTotal Time: 74 min\n");
                      printf("Single ");
                     break;

            default:
                     printf("Invalid Size\n");
                }
                    printf("White Coffee Ready!\n");
                    break;
   
   
           default:
           printf("Invalid Type\n");
        }
    

    return 0;
}
