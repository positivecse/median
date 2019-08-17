void main()
{
int n,i,a[1000],middle=0;
clrscr();
printf("Enter any number:");
scanf("%d",&n);
printf("Enter any %d number for array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
if(n%2==0)
{middle=(a[(n-1)/2]+a[n/2])/2;}
else
middle=a[n/2];
printf("%d",middle);
getch();
}
