#include<iostream>
using namespace std;
#include<vector>

// vector<int> pairSum(vector<int> arr, int target){
//     int st=0, end=arr.size()-1;
//     int currSum=0;
//     vector<int> ans;
//     while(st<end){
//         currSum=arr[st]+arr[end];
//         if(currSum==target){
//             ans.push_back(st);
//             ans.push_back(end);
//             return ans;
//         }
//         else if(currSum>target){
//             end--;
//         }
//         else{
//             st++;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> vec={2, 7, 15, 20};
//     int target= 18;
//     vector<int> ans = pairSum(vec, target);
//         cout<<ans[0]<<", "<<ans[1];
    
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//repititive and missing number
// vector<int> missNum(vector<int> vec){
//     int n=vec.size();
//     vector<int> ans;
//     vector<bool>isPresent(n+1, false);
//     for(int i=0; i<n; i++){
//         if(isPresent[vec[i]]){
//             ans.push_back(vec[i]);
//         }
//         isPresent[vec[i]]=true;
//     }
//     for(int i=1; i<isPresent.size(); i++){
//         if(!isPresent[i]){
//             ans.push_back(i);
//             break;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector <int> vec = {1, 2, 3, 4, 6, 7, 8, 4};
//     vector<int> ans = missNum(vec);
//         cout<<ans[0]<<", "<<ans[1];
//         return 0;
    

// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//maximum area between heights
int maxHeight(vector<int>height){
    int left=0, right=height.size()-1;
    int maxArea=0;
    while(left<right){
        int currArea = min(height[left], height[right])*(right-left);
        maxArea = max(maxArea, currArea);
        if(height[left]<height[right]){
            left++;
        }else(right--);
    }
    return maxArea;
}
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<maxHeight(height);
    

}