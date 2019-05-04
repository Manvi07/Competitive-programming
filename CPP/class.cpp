#include<bits/stdc++.h>
using namespace std;

class Stock
{
private:
  string company;
  long shares;
  double share_val;
  double total_val;
  void set_tot() { total_val=shares*share_val; }
public:
  void acquire(const string & co,long n,double pr);
  void buy(long num,double price);
  void sell(long num,double price);
  void update(double price);
  void show();
};

void Stock::acquire(const string & co,long n,double pr)
{
  company = co;
  if(n<0)
  {
    cout<<"Number of shares can't be negative;"<<company<<" shares set to zero\n";
    shares=0;
  }
  else shares=n;
  share_val=pr;
  set_tot();
}

void Stock::buy(long num,double price)
{
  if(num<0)
  {
    cout<<"Number of shares purchased can't be negative; transaction aborted.\n";
  }
  else
  {
    shares+=num;
    share_val=price;
    set_tot();
  }
}

void Stock::sell(long num,double price)
{
  if(num<0)
  {
    cout<<"Number of shares out cannot be negative; transaction aborted.\n";
  }
  else if(num>shares)
  {
    cout<<"You can't sell more than you have! Transaction aborted.\n";
  }
  else {
    shares-=num;
    share_val=price;
    set_tot();
  }
}

void Stock::update(double price)
{
  share_val=price;
  set_tot();
}

void Stock::show()
{
  cout<<"company "<<company<<endl;
  cout<<"Shares "<< shares<<endl;
  cout<<"Share Price "<<share_val<<endl;
  cout<<"Total worth "<<total_val<<endl;
  cout<<"-----\n";
}

int main()
{
  Stock fluffy;
  fluffy.acquire("Nanosmart",20,12.50);
  fluffy.show();
  fluffy.buy(15,18.125);
  fluffy.show();
  fluffy.sell(400,20.00);
  fluffy.show();
  fluffy.buy(300000,40.125);
  fluffy.show();
  fluffy.sell(300000,0.125);
  fluffy.show();
  return 0;
}
