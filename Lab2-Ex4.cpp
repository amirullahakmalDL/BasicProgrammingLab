#include<iostream> 
using namespace std; 
int main()
{
float num1, num2, num3, average;
cout<<" Enter the number 1 : "; 
cin>>num1;
cout<<" Enter the number 2: "; 
cin>>num2;
cout<<" Enter the number 3: "; 
cin>>num3;
cout<<"\n";
average= (num1+num2+num3)/ 3;
cout<<" The average is : " <<average; 
return 0;
}

//for Q4 (extra: you need to do another flowchart for this question)
/*
START

total sale = INPUT total_sale (230050)
FCSHD percentage sale = INPUT percentage of sale (29.4)

FCSHD total sale  = (percentage of sale / 100) * total sale (29.4/100) * 230050

OUTPUT FCSHD total sale

END
*/