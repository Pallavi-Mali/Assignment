#include<stdio.h>
int main()
{
//For Search

    int arr[10] = {1,5,4,8,9,2,0,6,11,7};
    int key,i,flag = 0;
    printf("Enter an element to search whether it exists in an array or not\n");
    scanf("%d",&key);
    for(i = 0; i < 10; i++)
    {
        if(arr[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("YES\n");
    else
        printf("NO\n");

//For Sequence

   int length =  sizeof(arr)/sizeof(arr[0]);
   printf("Sequence of the elements in an array is ");
   for (int i=0;i<10;i++)
   {
    printf("%d",arr[i]);
   }
      
 return 0;
}
