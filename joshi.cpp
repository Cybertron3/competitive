//Umang Joshi  18ucs206
//Daa Assignment



#include <bits/stdc++.h>
using namespace std;

void Merge(int A[], int a, int b, int z)
{
    int zl=b-a+1, ab=z-b;
    int Z[zl], L[ab],i=0,j=0,T=a;

    for(int i = 0;i<zl;i++){
        Z[i]=A[a+i];
    }
    for(int j=0;j<ab;j++){
        L[j]=A[b+1+j];
    }

    while(i<zl && j<ab){
        if(Z[i]<=L[j]){
            A[T]=Z[i];
            i++;
        }
        else{
            A[T]=L[j];
            j++;
        }
        T++;
    }

    while(i<zl){
        A[T]=Z[i];
        i++;
        T++;
    }

    while(j<ab){
        A[T]=L[j];
        j++;
        T++;
    }
}


void MergeSort(int A[],int a,int z){
    if(a>=z){
        return;
    }
    int b;
    b=a+(z-a)/2;
    MergeSort(A,a,b);
    MergeSort(A,b+1,z);
    Merge(A,a,b,z);
}



int Partition(int A[], int mini, int maxi){
    int point=A[maxi],i=mini-1; 
    for(int j=mini;j<=maxi-1;j++){
          if(A[j]<point){
            i++; 
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[maxi]);
    return (i+1);
}


void QuickSort(int A[], int mini, int maxi){
    if (mini<maxi){
        int tom=Partition(A, mini, maxi);
        QuickSort(A, mini, tom-1);
        QuickSort(A, tom + 1, maxi);
    }
}


int Partition2(int A[], int mini, int maxi){
    srand(time(NULL));
    int rndm=mini+rand()%(maxi-mini);
    swap(A[rndm], A[maxi]);
    return Partition(A, mini, maxi);
}


void RandomizedQuickSort(int A[], int mini, int maxi){
    if (mini<maxi){
        int tom=Partition2(A, mini, maxi);
        QuickSort(A, mini, tom - 1);
        QuickSort(A, tom + 1, maxi);
    }
}


void MaxNode(int A[], int n, int i){
    int High=i; 
    int a=2*i+1,z=2*i+2; 
 
    if (a<n && A[a]>A[High])    High = a;
    if (z<n && A[z]>A[High])    High = z;
    if (High!=i){
        swap(A[i], A[High]);
        MaxNode(A, n, High);
    }
}
 

void HeapSort(int A[], int n){
    
    for(int i=n/2-1;i>=0;i--)    MaxNode(A, n, i);
    for(int i=n-1;i>0;i--){
       swap(A[0], A[i]);
       MaxNode(A, i, 0);
    }
}

int Max(int A[], int n)
{
    int T = INT_MIN;
    for (int i=0;i<n;i++)
        T = max(T, A[i]);
    return T;
}

int Min(int A[], int n)
{
    int T = INT_MAX;
    for (int i=0;i<n;i++)
        T = min(T, A[i]);
    return T;
}

void CountSort(int A[], int n)
{
    int T = -1, b[n], minn=99999999;

    for (int i=0;i<n;i++)
            T = max(T, A[i]);
    for (int i=0;i<n;i++)
        minn = min(minn, A[i]);
    
    int count[T + 1] = {0};

    for(int i=0;i<n;i++)	count[A[i]-minn]++;

    for(int i=1;i< T + 1;i++)	count[i]+=count[i-1];

    for(int i=n-1;i>=0;i--)
    {
        b[count[A[i] - minn] - 1] = A[i];
        count[A[i] - minn]--;
    }

    for(int i=0;i<n;i++)
        A[i] = b[i];
}


void CountSortForRadix(int A[], int n, int q){	
	int count[11]={0},b[n];
	for(int i=0;i<n;i++)	count[(A[i]/q)%10]++;

	for(int i=1;i<=9;i++)	count[i]+=count[i-1];

	for(int i=n-1;i>=0;i--)	b[--count[(A[i]/q)%10]] = A[i];

	for(int i=0;i<n;i++)	A[i] = b[i];
}


void RadixSort(int A[],int n){
	int maxim=Max(A,n);
	for(int q=1;maxim/q>0;q*=10)	CountSortForRadix(A,n,q);
}


void BucketSort(float A[], int n){
    vector<float> b[n];
    for (int i=0;i<n;i++){
        int bi=n*A[i]; 
        b[bi].push_back(A[i]);
    }

    for (int i=0;i<n;i++)   sort(b[i].begin(), b[i].end());
    int place=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<b[i].size();j++)
            A[place++]=b[i][j];

    cout<<"\n When we will perform the BucketSort -> ";
    for(int i=0;i<n;i++)  	cout<<A[i]<<" ";
    cout<<'\n';
}

void Array(int A[],int n){
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
	cout<<'\n';
}

int main()
{
	
	int A[]={40,12,50,32,13};
	int n=5;
	cout<<"Array is -> ";
    Array(A,n);
    MergeSort(A,0,n-1);
    cout<<"When we will perform the MergeSort -> ";
    Array(A,n);
    cout<<"\n";

    int B[]={20,21,5,14,30};
    n=5;
    cout<<"Array is -> ";
    Array(B,n);    
    QuickSort(B,0,n-1);
    cout<<"When we will perform the QuickSort -> ";
    Array(B,n);
    cout<<"\n";

    int C[] = {9,15,3,10,60};
    n=5;
    cout<<"Array is -> ";
    Array(C,n);    
    RandomizedQuickSort(C,0,n-1);
    cout<<"When we will perform the RandomizedQuickSort -> ";
    Array(C,n);
    cout<<"\n";

    int D[] = {15,6,19,4,30};
    n=5;
    cout<<"Array is -> ";
    Array(D,n);    
    HeapSort(D,n);
    cout<<"When we will perform the MaxNode -> ";
    Array(D,n);
    cout<<"\n";

	int E[] = {7, 9, 1, 3, 6, 6};
    n=6;
    cout<<"Array is -> ";
    Array(E,n);    
    CountSort(E,n);
    cout<<"When we will perform the CountSort -> ";
    Array(E,n);
    cout<<"\n";

    
    int F[]={600,401,50,39,201,5,300,900,10,202};
    n=10;
    cout<<"Array is -> ";
    Array(F,n);
    RadixSort(F,n);
    cout<<"When we will perform the RadixSort -> ";
    Array(F,n);
    cout<<"\n";

   
    float G[] = {0.69,0.513,0.111,0.001,0.496,0.899};
    n=6;
    cout<<"Array -> ";
    for(int i=0;i<n;i++)
    	cout<<G[i]<<" ";
    BucketSort(G,n);
    cout<<"\n";


}

//Umang Joshi  18ucs206
//Daa Assignment