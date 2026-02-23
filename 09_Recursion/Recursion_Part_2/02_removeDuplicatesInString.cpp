#include<iostream>
using namespace std;

void removeduplicates(string str, string ans, int i, int map[26]){

    if (i == str.size())
    {
        cout << "Ans: " <<ans << endl;
        return ;
    }
    
    char ch = str[i];
    int mapIdx = (int)(ch - 'a');

    if (map[mapIdx] == true)
    {
        removeduplicates(str,ans,i+1,map);
    }else{
        map[mapIdx] = true;
        removeduplicates(str,ans+str[i],i+1,map);
    }
    
}
int main(){

    string str = "allberrtsmmithhshhantoo";
    string ans = "";
    int map[26] = {false};

    removeduplicates(str,ans,0,map);
    return 0;
    
}