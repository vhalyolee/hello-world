
float MovingAverage(int *arr,int Arrsize,int windowsize){
int i;
 for (i=0;i<Arrsize;i++){
 
   Subsum += arr[i]; 
   if(i >= windowsize) 
      Subsum -= array[i - windowsize];   
    
   if(i >= (windowsize - 1)) 
      return Subsum / (float)windowS/size;
}
