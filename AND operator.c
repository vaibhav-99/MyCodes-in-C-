int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,k,max=INT_MIN;
    int ans;
    cin >> t;
    for(t ; t>0 ; t--)
    {
      cin >> n >> k;
      for(int i=1 ; i<n ; i++)
      {
        for(int j=i+1; j<=n ; j++)
        {
           ans=i&j;
           if(ans>max && ans<k)
             max = ans;
        }
      }
         cout << max;
    }
    return 0;
}
