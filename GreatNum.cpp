#include<iostream>;
using namespace std;
int main(){
int num1, num2, num3;
cout<<"Enter the 3 intergers\n";
cin>>num1>>num2>>num3;
if(num1 > num2 && num1 >num3){
    cout<<num1<<" is the greatest number\n";
}
else if (num2 > num1 && num2 >num3){
    cout<<num2<<" is the greatest number\n";
}
else 
cout<<num3<<" is the greatest number\n";   
return 0;
}
