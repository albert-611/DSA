#include <iostream>
#include <climits>
using namespace std;

int trappedWater(int *heights, int n){

    int leftMax[20000], rightMax[20000];

    leftMax[0] = heights[0];
    rightMax[n-1] = heights[n-1];

    cout << "Left Max: \n";
    for (int i = 1; i < n; i++)
    {
       leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
       cout << leftMax[i]<<", ";
    }

    cout<< endl;

    cout<<"Right Max: \n";
    for (int i = n - 2; i >= 0 ; i--)
    {
       rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
       cout << rightMax[i]<<", ";
    }

    cout << endl;

    cout <<"Water trapped on per bar: \n";
    int waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        cout << currWater<<", ";

        if (currWater > 0)
        {
            waterTrapped += currWater;
        }      
    }

    cout<< endl;
    return waterTrapped;  

    cout << endl;
}

int main(){

    int heights[] = {4, 2, 0, 6, 3, 1, 4};
    int n = sizeof(heights) / sizeof(int);

    int water = trappedWater(heights, n);

    cout << "Total Water trapped = " <<water<<endl;

    return 0;


}