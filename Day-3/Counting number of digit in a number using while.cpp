#include<stdio.h>
int main() {
    //counting no of digit using while
    int no,count=0;
    printf("Enter the Number:");
    scanf("%d",&no);
    while (no!=0) {
        no=no/10;
        count++;
    }
    printf("The number %d is a %d digit number",no,count);
    return 0;
}