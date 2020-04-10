#include<iostream>
#include<cstring>
#include<string>
#define N '\n'


using namespace std;

void solve()
{
    int n,k,m;
    while(cin>>n>>k>>m)
    {
        if(n==0 && k==0 && m==0)break;
        int arr[n+1];
        memset(arr,0,sizeof(arr));
        int k_cursor=1,m_cursor=n;
        while(true)
        {
            int k_value,m_value;
            for(int i=k_cursor,j=0;j<k;i++)
            {
                if (i>n)i=1;
                if(arr[i]==0)
                {
                    j++;
                    k_value=i;
                }
            }
            for(int i=m_cursor,j=0;j<m;i--)
            {
                if (i<1)i=n;
                if(arr[i]==0)
                {
                    j++;
                    m_value=i;
                }
            }
            if(k_value==m_value)
            {
                if(k_value>9)cout<<' '<<k_value;
                else cout<<"  "<<k_value;

                arr[k_value] = 1;
                k_cursor=m_cursor=k_value;


            }
            else
            {
                string k_space,m_space;
                if(k_value>9)k_space=" ";
                else k_space = "  ";
                if(m_value>9)m_space=" ";
                else m_space="  ";
                cout<<k_space<<k_value<<m_space<<m_value;
                arr[k_value]=arr[m_value]=1;
                k_cursor=k_value;
                m_cursor=m_value;
            }
            int Break = 1;
            for(int i=1; i<n+1; i++)
            {
                if(arr[i]==0)
                {
                    Break = 0;
                    break;
                }
            }
            if (Break)
            {
                cout<<N;
                break;
            }
            else cout<<',';

        }

    }


}

int main()
{
    solve();
    return 0;
}
