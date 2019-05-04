#include <bits/stdc++.h>
using namespace std;
 int main()
 {
   double a,b,c;
   cin >> a >> b >> c;
   double d = pow(((b*b)-(4.00*a*c)),0.5);
   double r1 = (-b+d)/2.0*a;
   double r2 = (-b-d)/2.0*a;
   printf("%0.6lf\n%0.6lf\n",r1,r2 );
   return 0;
 }
