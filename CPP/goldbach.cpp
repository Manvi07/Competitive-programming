#include<bits/stdc++.h>
using namespace std;

vector <int> primes;

void seiveEratosthenes(int n)
{
    vector<bool>isPrime(n);
    fill(isPrime.begin(), isPrime.end(), true);
    for(int i=2; i<n; i++)
    {
        if(isPrime[i] == true)
        {
            for(int j=2*i; j<n; j = j+i)
            {
                isPrime[j] = false;
            }
        }
    }
    primes.clear();
    for(int i=2; i<n; i++)
    if(isPrime[i])
    primes.push_back(i);
}

void seiveSundaram(int n)
{
    int New = (n-2)/2;
    bool marked[New+1];
    memset(marked, true, New+1);
    for(int i=1; i<New; i++)
    {
        for(int j=i; i+j+2*i*j<=New; j++)
        {
            marked[j+i+2*i*j] = false;
        }
    }
    primes.clear();
    if(n>2)
        primes.push_back(2);
    for(int i=1; i<=New;i++)
        if(marked[i] == true)
        {
            primes.push_back(2*i + 1);
        }
}

void goldbach(int n)
{
    if(n<=2 or n%2!=0)
    return;
    seiveEratosthenes(n);
    int num1=0, num2=0;
    for(int i=0; i<primes.size(); i++)
    {
        int diff = n - primes[i];
        for(int j=i; j<primes.size(); j++)
        if(primes[j] == diff)
        {
            num2 = primes[j];
            num1 = primes[i];
            break;
        }
    }
    cout << num1 << " " << num2 << endl;
}

int main()
{
    int n = 10;
    seiveEratosthenes(n);
    for(int i=0; i<primes.size(); i++)
    cout << primes[i] << " ";
    cout << endl;
    seiveSundaram(n);
    for(int i=0; i<primes.size(); i++)
    cout << primes[i] << " ";
    cout << endl;
    goldbach(n);
}