#include<stdio.h>

int main(){

       int n;
       printf("Enter array size: ");
       scanf("%d", &n);

       int arr[n];
       printf("Enter %d numbers: ",n);
       for(int i; i<n; i++){
            scanf("%d", &arr[i]);
       }

       int key;
       printf("Enter value you want to search: ");
       scanf("%d", &key);

       int pos = linear_search(arr, n, key);

       if(pos == -1){
        printf("%d is not present in array.\n", key);
       }
       else{
        printf("%d is present at location %d.\n", key, pos+1);
       }

return 0;
}

int linear_search(int arr[], int n, int key){

      int i;
      for(i=0 ; i<n ;i++){
          if(arr[i] == key)
             return i;
   }

   return -1;
}


