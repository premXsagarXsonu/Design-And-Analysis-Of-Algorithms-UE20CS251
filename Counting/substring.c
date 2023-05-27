#include<stdio.h>
#include<string.h>
void subString(char str[], int n,int *count)
{
    // Pick starting point
    for (int len = 1; len <= n; len++)
    {   
        // Pick ending point
        for (int i = 0; i <= n - len; i++)
        {
            //  Print characters from current
            // starting point to current ending
            // point. 
            int j = i + len - 1;           
            for (int k = i; k <= j; k++)
                printf("%c",str[k]);
            *count +=1;
            printf("\n");
        }
    }
}
 
// Driver program to test above function
int main()
{
    char str[] = "abc";
    int count;
    subString(str, strlen(str),&count);
    printf("Number of Substring : %d",count);
    return 0;
}
