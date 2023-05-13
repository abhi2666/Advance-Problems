int getPride(int n, long int arr[], int x)
{


    for(int i = 0; i < n; i++){
        count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[j] >= arr[i]) {
                count++;
            }
        }
        if(count == x){return i;}
    }
    return -1;
}