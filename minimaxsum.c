
void miniMaxSum(int arr_count, int* arr) 
{
    int i ,j,tmp,sum1 = 0,sum2 = 0;
    i = 0;
    while(i < arr_count - 1)
    {
        sum1 = sum1 +arr[i];
        i++;
    }
    i = 0;
    while(i < arr_count )
    {
        j = i + 1;
        while(j< arr_count)
        {
            if(arr[i]< arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while(i < arr_count - 1)
    {
        sum2 = sum2 + arr[i];
        i++;
    }
  printf("%lld %lld",sum1,sum2);  
}
int main()
{
  int b[5] = {7,69,2,221,8974};
  miniMaxSum(5,b);
  return 0;
}
