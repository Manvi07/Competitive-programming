#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        int a;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            m[a] += 1;
        }
        	typedef function<bool(pair<int, int>, pair<int, int>)> Comparator;
 
            // Defining a lambda function to compare two pairs. It will compare two pairs using second field
            Comparator compFunctor = [](pair<int, int> elem1 ,pair<int, int> elem2)
                    {
                        return elem1.second >= elem2.second;
                    };
        
            // Declaring a set that will store the pairs using above comparision logic
            multiset<pair<int, int>, Comparator> setOfWords(m.begin(), m.end(), compFunctor);
            auto it = setOfWords.begin();
            int sum = (it->second);
            int temp = sum;
            setOfWords.erase(setOfWords.begin());
            for (pair<int, int> element : setOfWords)
        		{
                    // cout << element.first << " :: " << element.second << endl;
                    if(element.second >= temp and temp-1>0)
                    {
                        sum += temp-1;
                        temp = temp-1;
                    }
                    else if(element.second<temp)
                    {
                        sum += element.second;
                        temp = element.second;
                    }
                    
                }
                cout << sum << endl;
    }
    return 0;
}