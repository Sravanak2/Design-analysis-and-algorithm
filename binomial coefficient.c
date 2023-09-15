#include <stdio.h>
int binco(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
    return binco(n - 1, k - 1)+ binco(n - 1, k);
}
int main()
{
	int n,k;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter k: ");
    scanf("%d",&k);
    printf("Binomial Coefficient(%d, %d) is %d ", n, k,binco(n, k));
}
