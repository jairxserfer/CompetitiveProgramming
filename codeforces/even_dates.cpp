    #include<bits/stdc++.h>
	 
    using namespace std;  
    const int mm=110;  
   
   
    class node  
    {  
      public:int l,r;  
    }f[mm];  
    
    bool vis[mm];  
    int ans[mm];  
    bool ok(int a,int b)  
    {  
      if(f[a].l<f[b].l)return 1;  
      else if(f[a].l==f[b].l&&f[a].r<f[b].r)return 1;  
      return 0;  
    }  
    int main()  
    {  
      int n;  
      while(cin>>n)  
      {  
        for(int i=0;i<n;i++)  
        {  
          cin>>f[i].l>>f[i].r;vis[i]=0;  
        }  
        int k;  
        for(int i=0;i<n;i++)  
        { k=-1;  
          for(int j=0;j<n;j++)  
            if(!vis[j]&&(k==-1||ok(j,k)))
              k=j;  
            int w=ans[k]=f[k].l;  
            ++w;vis[k]=1;  
          for(int j=0;j<n;j++)
            if(w>f[j].l)  
            f[j].l=w;  
        }  
        for(int i=0;i<n;i++)  
        cout<<ans[i]<<" ";cout<<"\n";  
      }  
    }  