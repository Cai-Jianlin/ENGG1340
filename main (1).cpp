// C++ program for implementation of Bubble sort  
#include <iostream> 
using namespace std; 
  
int main ()
{   int n; // number of data for bubble sort 
    int i; // i: the loop variable for bubble sort
    int j; // j: the loop variable for bubble sort
    cout << "Please enter number of data for bubble sort:"<< endl;
    cin >> n;
    int a[n];  
    for (i = 0; i <= n-1; i++)   
    {   cout << "Please enter the number:"  ;
        cin >> a[i];
    }
    
    for (i = 0; i <= n-1; i++)
    {
        for (j=i+1; j<=n-1;j++)
        {
            int temp;
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for (i=0;i<=n-1;i++)
    {   
        cout <<a[i]<< endl;
    }

}  
  


  