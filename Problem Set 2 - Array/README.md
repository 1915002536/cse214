## Variable Decleration
int i, j;
int X; // Where X is Value
int K; // Where K is Position or Index
int size = 10, tag = 0;
## Array Decleration or Initialization
int array[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
Print The Array Elements
/*for ( initialize ; condition; increment ) {
   printf statement(s);
}*/

//Implement in Program
for(i=0; i<size; i++)
        printf("%d ", a[i]);
Insert Value in Array
//Insert Value
scanf("%d", &X);

//Insert Position
scanf("%d", &K);

for (i=size; i>=K; i--)
        a[i] = a[i - 1];
        
size++;

a[5] = X;
## Update Index with Another Value
for (i=0; i==K; i++)
        a[i] = a[i - 1];

a[5] = X;
## Update Index with Another Value in a Correct Position or Index
//Insert Position
scanf("%d", &K);

//Insert Value
scanf("%d", &X);

for (i=0; i==K; i++)
      a[i] = a[i - 1];

a[5] = X;
Search a Value in Array
//Insert Value
scanf("%d", &X);
    
for (i=0; i<size; i++){
      if(a[i]==X)
      num++;
    }
## Search a Value in Array and if Found Print -1
if(num!=1)
   printf("-1");
## Delete a Value in Array
//Insert Position
scanf("%d", &K);

for (i=K-1; i<size; i++)
       a[i] = a[i+1];
size--;
## Only Delete the First Occurrence of The Value
//Insert Value
    scanf("%d",&X);

for(i=0; i<size; i++){
        if(X==ay[i]){
            for(j=i; j<=size; j++){
                a[j] = a[j+1];
            }
            num++;
            break;
        }
    }

size--;

if(num!=1){
        printf("Element Not Found");
    }
    else{
        for(i=0; i<size; i++)
            printf("%d ",a[i]);
    }
## Delete All the Occurrence of The Value
//Insert Value
scanf("%d",&X);

for( i=0; i<=size; i++){
        if(X==array[i]){
            for(j=i; j<=size; j++){
                a[j] = a[j+1];
            }
            size--;
            num++;
            i--;
        }
    }
    
if(num==0){
        printf("Element Not Found");
    }
    else{
        for(i=0; i<size; i++)
            printf("%d ",a[i]);
    }
