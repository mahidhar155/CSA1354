#include<stdio.h>
#include<string.h>

int checkValidity(char ip[], int l){

    int iv = 0;

    for(int i = 0;i<l;i++){
        if(ip[i] == '0' || ip[i] == '1')
            continue;
        else{
            iv = 1;
            break;
        }
    }

    return iv;
}

int main(){
    char input[100];
    while(1){
        printf("Enter a String : ");
        scanf("%s",&input);

        int l = strlen(input);

        int invalid = checkValidity(input,l);

        if(invalid != 1){
            if(input[0] == '0' && input[l-1] == '1')
                printf("String Accepted ! \n\n ");
            else
                printf("String Rejected ! \n\n");
        }
        else
            printf("Enter a Valid String over E = {0,1} .\n\n");
    }

    return 0;
}