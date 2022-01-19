#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
    char   std_input[100] ="";
    int test = 0;

    while (test == 0){
        printf("Enter a numric value : ");
        scanf("%s", &std_input); // reading std input as a char array
        for (int i =0; i < strlen(std_input); i++){ //going trough every char in array and test if it's not a number, if only one fails we get out of the loop
            if (!isdigit(std_input[i]) && std_input[i] != '.'){
                printf("'%s' is not a number\n", std_input);
                test = 0;
                break;
            }
            else 
                test = 1;
        }
        
    }

    //you can now cast the value to float or int as needed
    float f = (float)atof(std_input); // improuvement could be done here :)

    printf("The value %.2f you entred is a number", f);// you can choose the number of decimal position as you like here i have chosen 2


    return 0;
}

