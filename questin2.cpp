/******************************************************************************

                              Question 2 

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //unsigned is used to take only positive values
    unsigned int limit = 10000000;
    
    ////using Standard template Library
    vector<unsigned short> divisor(limit,0); 
    
    //this for loop means ceating total number of possible divisors
    //Any number can be divided by (half of itself) or (number less than half of itself)
    for(unsigned int i=1; i<=limit/2;i++ )
    
    //total number of multiples to check
    // j=i means we should not check the multiple less than divisor 
    for(unsigned int j=i; j<=limit; j+=1)
    //this line increases the value of the divisor by 1 if any divisor found
    divisor[j]++;
    
    
    
    //below is the code to verify the divisor if matches to its consecutive number
    unsigned int result=0;
    for(unsigned int i=2;i<limit;i++)
    if(divisor[i]==divisor[i+1])
    result++;
    cout>>result; 
    
    vector<unsigned int>count(limit+1,0)
    for(unsigned int i=2;i<limit;i++)
    {
        count[i]=count[i-1]
        if(divisor[i]==divisor[i+1])
        count[i]++;
        
    }
    
    //below code to see the result
    unsigned int test_cases=1;
    cin>>test_cases;
    while(test_cases--)
    {
        unsigned int i;
        cin>>i;
        cout<<count[i-1]
    }

    return 0;
}
