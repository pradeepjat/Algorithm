 #include<iostream>
 #include<conio.h>
 using namespace std;
 
 void maxRevenue(int x[],int r[],int distance,int milesRes,int n) 
 {
    int MR[distance+1]; //for calculating maximum revenue
    int nextBillBoard = 0;
    milesRes = milesRes + 1; // actual minimum distance between 2 billboards
    MR[0] = 0;
    for (int i = 1; i <= distance; i++) 
	{
       if(nextBillBoard < n)
	   {
           if (x[nextBillBoard] != i) 
		   {
               MR[i] = MR[i - 1];
           } 
		   else 
		   {
              if(i>=milesRes)
			  {
                 MR[i] = max(MR[i - milesRes] + r[nextBillBoard], MR[i - 1]);
              }
			  else
			  {
                 MR[i] = r[nextBillBoard];
              }
              nextBillBoard++;
           }
       }
	   else
	   {
          MR[i] = MR[i - 1];
       }

    }
    cout<<"Maximum Revenue is : "<<MR[distance];
 }


int main() 
{
	int n,distance,milesRestriction = 5;
	cout<<"Enter No. Possible Sites : ";
	cin>>n;
	cout<<endl;
    int x[n],r[n]; // x -> possible sites , r -> reveue for billboard
    for(int i=0;i<n;i++)
    {
      cout<<"Enter site "<<i+1<<" : ";
      cin>>x[i];
      cout<<endl;
      cout<<"Enter revenue assosiated with site "<<i+1<<" : ";
      cin>>r[i];
      cout<<endl;
	}
	cout<<"Enter the strech of the University Road: ";
    cin>>distance;
    cout<<endl;
    maxRevenue(x,r, distance, milesRestriction,n);
    return 0;
}

