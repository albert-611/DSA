#include <iostream>
using namespace std;
// without index (i) it will check from backward
void removeDuplicates(string str, string ans, int map[26]){


    if (str.size() == 0)
    {
        cout << ans<<endl;
        return ;
    }
    
    int n = str.size();
    char ch = str[n-1];
    int mapIdx = (int) (ch - 'a');
    str = str.substr(0,n-1);

    if (map[mapIdx])
    {
        removeDuplicates(str,ans,map);
    }else{
        map[mapIdx] = true;
        removeDuplicates(str, ch + ans, map );
    }
    
    
}
int main(){

    string str = "allberrtsmmithhshhantoo";
    string ans = "";
    int map[26] = {false};
    
    removeDuplicates(str,ans,map);
    return 0;
    
}