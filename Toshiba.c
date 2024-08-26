//Find the minimum sum without duplicates in an array 
//Input: 1 2 3 4 5
//Output: 15
//Input: 1 4 5 4 5
//Output: 23  (1+4+5+6+7=23) change the duplicate 4 to 6 and 5 to 7

#include<stdio.h>
#include<stdlib.h>


int min_sum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                arr[j]=arr[j]+1;
            }
        }
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int input1;
    scanf("%d",&input1);
    int arr[input1];
    for (size_t i = 0; i < input1; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=min_sum(arr,input1);
    printf("%d",sum);
    
}