#define pi 3.141592653589793
#define MOD 1000000007
#define maa LLONG_MAX
#define mii LLONG_MIN
#define iofast ios_base::sync_with_stdio(false);cin.tie(NULL);
// Debugger Usage:: dg(code + "forces",-aux / 10 * 2.3); dg(x, y, z, s, b); 
#define dg(...) dg_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__);
vector<string> vec_splitter(string s) {	s += ','; vector<string> res; while(!s.empty()) { res.push_back(s.substr(0, s.find(','))); s = s.substr(s.find(',') + 1);}return res;} void dg_out(vector<string> __attribute__ ((unused)) args,__attribute__ ((unused)) int idx, __attribute__ ((unused)) int LINE_NUM) { cerr << endl; } template <typename Head, typename... Tail> void dg_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";stringstream ss; ss << H;cerr << args[idx] << " = " << ss.str();dg_out(args, idx + 1, LINE_NUM, T...);}
#define pr(...) pr_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__);
#define iofile freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define s___ auto t_____rt = chrono::high_resolution_clock::now();
#define e___ auto t____rt = chrono::high_resolution_clock::now(); double time_taken = chrono::duration_cast<chrono::nanoseconds>(t____rt - t_____rt).count(); time_taken *= 1e-9;cerr << "Time: SEE IT DON't IGNORE :-: " << fixed << time_taken << setprecision(9);cerr << " sec" << endl;
#define ll long long int
#define ld  double
#define pll pair<ll,ll>
#define pii pair<int,int>
#define vii vector<int>
#define vll vector<ll>
#define vld vector<ld>
#define lll ll t;cin>>t; while(t--)
#define l1(o,x,y) for(ll o=x;o<y;o++)
#define l1p(o,x,y,uu) for(ll o=x;o<y;o+=uu)
#define ok return
#define esz .size()
#define clr .clear()
#define mkp make_pair
#define fi first
#define si second
#define pb push_back
#define lc <<"\n"
#define all(x) x.begin(),x.end()
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
void pr_out(vector<string> __attribute__ ((unused)) args,__attribute__ ((unused)) int idx, __attribute__ ((unused)) int LINE_NUM) { cout << endl; } template <typename Head, typename... Tail>void pr_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {stringstream ss; ss << H;cout << ss.str() << " ";pr_out(args, idx + 1, LINE_NUM, T...);}
#define sw(v,n) l1(i,0,n) cout<<v[i]<<" " ; cout lc ;
#define dsw(v,n) cerr<<"Line("<<__LINE__<<") "; l1(i,0,n) cerr<<v[i]<<" " ; cerr lc ;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {    
       ll r = matrix esz ;
       l1 ( i , 0 ,  r )
       {  
           l1( j  , 0,matrix[i] esz)
       {  
           if( ! matrix[i][j]  )
               {
                   
                   l1(k , 0 , matrix[i] esz) 
                   {    
                        if(matrix[i][k] == 0 && k != j )
                           continue;
                       
                        matrix[i][k]=INT_MAX-1;   
                   }                     
                   l1(k , 0 , r ) 
                   {
                         if(matrix[k][j] == 0 && k != i )
                           continue;
                        matrix[k][j]=INT_MAX-1;   
                   }

                  
               }
               
           }
       } 
        
               l1 ( i , 0 ,  r )
               l1( j  , 0,matrix[i] esz)
               if(  matrix[i][j] == INT_MAX-1 )
               matrix[i][j]=0;  
    }
};


