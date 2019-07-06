double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
   if(A.size()>B.size())return findMedianSortedArrays(B,A);
    int n1 = A.size();
    int n2 = B.size();
    int start = 0;
    int end = n1;
    bool even;
    if((n1+n2)%2 == 0)
    even = true;
    else
    even = false;
    if(n1 == 0)
    {
        if(n2%2 == 0)
        {
            // cout << "yo1\n";
            return (B[n2/2 - 1]+B[n2/2])/2.0;
        }
        else
        return B[n2/2];
    }
    else if(n2 == 0)
    {
        if(n1%2 == 0)
        {
            // cout << "yo2\n";
            // cout << A[n1/2] << A[n1/2 + 1] << endl;
            return (A[n1/2 - 1]+A[n1/2])/2.0;
        }
        else
        return A[n1/2];
    }
    else
    while(1)
    {
        int partA = (start+end)/2;
        int partB = (n1+n2+1)/2 - partA;
        int maxLeftA = partA == 0?INT_MIN:A[partA-1];
        int minRightB = partB==n2?INT_MAX:B[partB];
        int maxLeftB = partB==0?INT_MIN:B[partB-1];
        int minRightA = partA==n1?INT_MAX:A[partA];
        if(maxLeftA <= minRightB and maxLeftB <=minRightA)
        {
            if(even)
            {
                // cout << "yo3\n";
                return (max(maxLeftA, maxLeftB) + min(minRightA,minRightB))/2.0;
            }
            else
            return max(maxLeftA, maxLeftB);
        }
        else if(maxLeftA > minRightB)
        end = partA-1;
        else
        start = partA+1;
    }
}
