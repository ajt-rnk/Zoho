/*
Q:2 Sorting array according to factors of array elements

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p[n]={0};
    for(int i=0;i<n;i++){
        int num=1;
        p[i]=1;
        while(num <= a[i]/2){ //Finding factors 
            if(a[i]%num==0){
                p[i]++;
            }
            num++;
        }
    } 
    for(int i=0;i<n-1;i++){ //Sorting the array a with respect to elemnts in array p
        for(int j=i+1;j<n;j++){
            if(p[i]<p[j]){
                int t=p[i];
                p[i]=p[j];
                p[j]=t;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
   for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    
    return 0;
}
*/
