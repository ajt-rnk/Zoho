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


/*
Q : 3 Number to Alphabet English

#include <iostream>
#include<math.h>
using namespace std;

void Alpha10s(int n){
    string s[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    cout<<s[n%10]<<" ";
}
void get10Mul(int n){
    string s[]={"","","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninty"};
    cout<<s[n]<<" ";
}

int main() {
    for(int t=0;t<1000;t++){
    int n=t;
	//cin>>n;
	 cout<<n<<" :  ";
	string s[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	int digitCount = (n==0 ? 0 : floor(log10(n))+1);
	if(digitCount==0) cout<<s[0];
	int last_2_digits=n%100;
	int digit_1=n%10;n=n/10;
	int digit_2=n%10;
	int digit_3=n/10;
	
	//cout<<digit_3<<" "<<digit_2<<" "<<digit_1<<endl;
	
	if(digitCount==3){
	    cout<<s[digit_3]<<" Hundred ";
	    digitCount--;
	}if( last_2_digits > 9 && last_2_digits < 20 ){
	    Alpha10s(last_2_digits);
	    digitCount=0;
	}
	if(digitCount==2){
	 if(digit_2==0){
	     digitCount--;
	 } else {
	     get10Mul(digit_2);
	     if(digit_1>0)
	     cout<<s[digit_1]<<" ";
	 }
	} if(digitCount==1){
	    cout<<s[digit_1]<<" ";
	}
	cout<<endl;
    }
	return 0;
}

/*
Q: 4
1
1 1
2 1
1 2 1 1
1 1 1 2 2 1
*/
/*
import java.util.*;
public class MyClass {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
       String s="1";
       String temp="";
       int n=sc.nextInt();
       n--;
       System.out.println(s);
       int count=0;
       while(count<n){
           int tCount=0;
           for(int i=0;i<s.length();i++){
               tCount++;
               if(i==s.length()-1 || s.charAt(i)!=s.charAt(i+1)){
                   temp+=String.valueOf(tCount);
                    temp+=s.charAt(i);
                   tCount=0;
               }
           }
           s=temp;
           temp="";
           count++;
           System.out.println(s);
       }
    }
}
*/
