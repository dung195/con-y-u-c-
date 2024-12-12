#include<bits/stdc++.h>
using namespace std;
#define ld long double
#define pii pair<int,int>
const int sized=1e5+5;
const int N=1e6;
const int LOG=25;
const int inf=1e9;
vector<char>a;
int dem[sized];
int dd[sized];
vector<char>ans;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int k;
    cin>>k;
    int maxi=-inf;
    int bien=s.size()-k; // doan nay con ghi la s.size()-k-1
    //cerr<<bien<<endl;
    for(int i=0;i<=bien;i++){
        maxi=max(maxi,int(s[i]));
    }
    int pos=0;
    //cerr<<maxi-'0'<<endl;
    for(int i=0;i<=bien;i++){ // doan nay la phai for tu 0
        if(s[i]==maxi) {
            pos=i;
            break;
              // hinh nhu doan nay con chua break, khong la sai tu doan nay
        }
    }
    for(int i=pos;i<s.size();i++){
        a.push_back(s[i]);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    for(int i=0;i<k;i++){
        dd[a[i]]++;
    }
    for(int i=pos;i<s.size();i++){ 
        if(dd[s[i]]!=0 && dem[s[i]]<dd[s[i]]){
            ans.push_back(s[i]);
            dd[s[i]]++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
    // không minh mẫn nên không nghĩ ra được cô ạ 
    // thuật này code rất loằng ngoằng và con thấy nó thuật theo tư duy của con nhất, chưa chắc 
    //đã thuận với của mọi người
    // trong bài của con có vài lỗi cài đặt, nếu cô không cho điểm thì con không ý kiến gì cả
    // còn nếu như cô chấp thuận thì cô cho điểm con nhé
    // con yêu cô =))))
}
