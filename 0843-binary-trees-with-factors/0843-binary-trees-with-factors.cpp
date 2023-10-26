class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort( arr.begin() , arr.end() ) ;
        int n = arr.size() ;
        int mod = pow( 10 , 9 ) + 7 ;
        unordered_map< int , long >mp ;
        int ans = 0 ;
        for( int i = 0; i < n ; i++ )
            mp[arr[i]]++ ;
        
        for( int i = 1  ; i < n ; i++ ){
            for( int j = 0 ; j < i ; j++ ){
                if( arr[i]%arr[j]==0 && mp.find(arr[i]/arr[j]) != mp.end()){
                    mp[arr[i]] = ( mp[arr[i]] + (mp[arr[j]]*(mp[arr[i]/arr[j]]))%mod )%mod  ;
                }
            }
        }
        
        for( auto i : mp ) ans = ( ans + i.second )%mod  ;
        return ans ;
    }
};