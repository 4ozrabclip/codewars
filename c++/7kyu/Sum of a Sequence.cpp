//Sum of a sequence

int sequenceSum(int start, int end, int step)
{
  int sum = 0;
  if(start > end){
    return sum;
  }
  else{

    for(int i = start; i <= end; i+=step){
      sum += i;
    }
    return sum;
  }
}