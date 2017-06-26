

int * SortArry(int *inputArr, int size){

int i,j,tmp;

// int* outputArr;
// outputArr = malloc(size * sizeof(*outputArr));
// if I used it in the func I wil create mem leak

for(i=0;i<=size;i++) {
 for(j=0;j<=size-i;j++){
  if(inputArr[j]>inputArr[j+1]) {
    tmp=inputArr[j];
    inputArr[j]=inputArr[j+1];
    inputArr[j+1]=tmp;
    }
   }
  }
return inputArr;
}
