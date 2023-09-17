void binary_search(int key, int n, int a[])
{
    int high, low, mid, pos, flag=0;
    high=n-1;
low=0;
mid=(high+low)/2;

while(low<=high)
{
    if(a[mid]==key)
    {
        flag=1; pos = mid; break;
    }
    else if(a[mid]>key)
    {
        high=mid-1; mid=(high+low)/2;
    }
    else if(a[mid]<key)
    {
        low=mid+1; mid=(high+low)/2;
    }
}

if(flag==1)
   printf("element found at index: %d", pos);
else
   printf("element not found");
}