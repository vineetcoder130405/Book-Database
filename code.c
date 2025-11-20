#include <stdio.h>
struct Book{
    char book[50];
    char author[50];
    int year;
};

int main() {
    struct Book s[5];
    int i,j;
    
    for(i=0;i<5;i++){
        printf("Enter details of Book %d\n",i+1);
        printf("Name of book:");
        scanf("%s",s[i].book);
        printf("Name of author:");
        scanf("%s",s[i].author);
        printf("Year:");
        scanf("%d",&s[i].year);
        
    }
    struct Book temp;
    for(i = 0; i < 4; i++){
        for (j = i + 1; j < 5; j++) {
            if (s[i].year<s[j].year) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
        
    }
    
     printf("==Book Library==\n");
     printf("%-20s %-25s %-10s\n","Book","Author","Year");
     printf("------------------------------------------------\n");
     
     for(i=0;i<5;i++){
         printf("%-20s %-25s %-10d\n",s[i].book,s[i].author,s[i].year);
     }


    return 0;
}

