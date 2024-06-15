#include <stdio.h>
 int main(){

    int yearofbirth;
    printf("Enter year of birth: \n");
    scanf("%d",&yearofbirth);
    switch (yearofbirth){
        case 1928 ... 1945:
        // case (yearofbirth >= 1928 && yearofbirth <= 1945)
            printf("Silent generation\n");
            break;
        case 1946 ... 1964:
            printf("Baby Boomers\n");
            break;
        case 1965 ... 1980:
            printf("Generation X\n");
            break;
        case 1981 ... 1996:
            printf("Millenials\n");
            break;
        case 1997 ... 2012:
            printf("Generation Z\n");
            break;
        case 2013 ... 2024:
            printf("Generation Alpha\n");
            break;
        default:
            printf("Invalid year of birth\n");
    }


    //int year_of_birth=2000;
    //printf("Enter year of birth: \n");
    //scanf("%d",&year_of_birth);
    //switch (year_of_birth){
        //case ((year_of_birth >= 1928) && (year_of_birth <= 1945)):
            //printf("Silent Generation\n");
            //break;
        //case ((year_of_birth>=1946) && (year_of_birth<=1964)):
          //printf("Baby Boomers\n");
            //break;
        //case((year_of_birth>=1965) && (year_of_birth<=1980)):
            //printf("Generation X\n");
            //break;
        //case((year_of_birth>=1965) && (year_of_birth<=1980)):
            //printf("Millenials\n");
            //break;
        //case((year_of_birth>=1965) && (year_of_birth<=1980)):
            //printf("Generation Z\n");
            //break;
        //case((year_of_birth>=1965) && (year_of_birth<=1980)):
            //printf("Generation Alpha\n");
            //break;
        //default:
            //printf("Invalid year of birth\n");
        
        //}



        
    
        return 0;
}