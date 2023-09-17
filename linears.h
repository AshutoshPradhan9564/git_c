void linear_search(int key, int n, int arr[])
{
   int flag = 0;
   for (int i=0; i<n; i++)
   {
      if (arr[i] == key)
      {
         printf("Element found at location %d", i+1);
         flag = 1;
      }
   }
   if (flag == 0)
      printf("Element not found");
}