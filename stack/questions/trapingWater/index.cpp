#include<iostream>
using namespace std;
#include<stack>
#include<vector>

int trapedWater(vector<int>& height) {
    int n = height.size();
    stack<int> st;
    int water = 0;

    for(int i = 0; i < n; i++){
        while(!st.empty() && height[i] > height[st.top()]){

            int bottom = st.top();
            st.pop();

            if(st.empty()) break;

            int left = st.top();
            int width = i - left - 1;
            int boundedHeight =
                min(height[i], height[left]) - height[bottom];

            water += width * boundedHeight;
        }
        st.push(i);
    }
    return water;
}

int main(){
    vector<int> height= {7, 0, 4, 2, 5, 0, 6, 4, 0, 5};

    cout<<trapedWater(height);

    return 0;
}