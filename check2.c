#include <stdio.h>
int main()
{
   // char *arr[] = {"ant", "bat", "cat", "dog", "egg", "fly"};
    char ar[][20] = {"ant", "bat", "cat", "dog", "egg", "fly"};
    //*m[5] vs *(m)[5];
    const int LIM=30,SLEN=40;
    const char *mytalents[30] = {
        "Adding numbers swiftly",
        "Multiplying accurately", "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"};

    char yourtalents[400][100] = {
        "Walking in a straight line",
        "Sleeping", "Watching television",
        "Mailing letters", "Reading email"};
    char *ptr=yourtalents;

    int n=sizeof(mytalents);
    int m=sizeof(yourtalents);
    printf("%d %d",n,m);
    /// arr[0][0]='b';
    // ar[0][1]="bant";
   
        // char *ptr1;
        // char *ptr2;
        // char **ptr = arr;
        // char **ptr3;
        // // ptr1 = (ptr)[0];
        // // ptr2 = (ptr + 5)[0];
        // // ptr3 = (ptr2 + 0)[0];//f
        // printf("%c\n", *(*(ptr + 4) + 0)+0);
        // printf("%c", ptr3);
        // printf("%s %s\n", ptr1, ptr2);
    
}