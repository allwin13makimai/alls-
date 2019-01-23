#include<bits/stdc++.h>
using namespace std;
int main()
{
int p, m, temp, max_count=0;
cin>>p>>m;
vector<vector<int>> count(p+1, vector<int>(m+1));
for(int i=0; i<p; i++)
{
for(int j=0; j<m; j++)
{
cin>>temp;
if(i==0 || j==0 || temp == 0)
{
count[i+1][j+1] = temp;
} else 
{
count[i+1][j+1] = 1 + min({count[i][j+1] , count[i+1][j], count[i][j]});
}
max_count = max(max_count, count[i+1][j+1]);
}
}
for(int i=0; i<max_count; i++)
{
for(int j=0; j<max_count; j++)
{
cout<<1<<" ";
}
cout<<endl;
}
return 0;
}
