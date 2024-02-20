You are given an array of integers. Your task is to create a new array where each element at index i is the product of all elements in the original array except the one at index i.Input: [1, 2, 3, 4]
Output: [24, 12, 8, 6]
Explanation: For the output array, the element at index 0 is the product of 2 * 3 * 4 = 24, and so on.


Also mutable vs immutable, string mutable or immutable, diff between for each and map in js

1.  DECODE STRING HACKERRANK

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

string decodeString(string &s){
    stack<int>counts;
    stack<string>strings;
    string currString;
    int count = 0;
    
    for(char ch:s){
        if(isdigit(ch)){
            count = 10*count + (ch - '0');
        }
        else if(isalpha(ch)){
            currString += ch;
            
        }
        else if(ch == '['){
            counts.push(count);
            strings.push(currString);
            currString = "";
            count = 0;
        }
        else if(ch == ']'){
            int repeatCount = counts.top();
            counts.pop();
            string repeatedString = currString;
            for(int i = 1;i<repeatCount;i++){
                currString += repeatedString;
            }
            currString = strings.top() + currString;
            strings.pop();
        }
    }
    return currString;
}

int main() {
    int T;
    cin>>T;
    for(int t = 0;t<T;++t){
        string str;
        cin>>str;
        string decodedstr = decodeString(str);
        cout<<decodedstr<<endl;
    }
    return 0;
}


2. COUNT OF CANDIES HACKERRANK

long candies(int n, vector<int> arr) {
    
    if(n == 0 )return 0;
    
    vector<long>candies(n,1);
    
    for(int i = 1;i<n;i++){
        if(arr[i-1] < arr[i]){
            candies[i] = candies[i-1] +1;
        }
    }
    for(int i = n-2;i>=0;i--){
        if(arr[i] > arr[i+1]){
            candies[i] = max(candies[i],candies[i+1] + 1);
        }
    }
    return accumulate(candies.begin(),candies.end(),0L);

}

3. Minimum Sum


int minSum(vector<int> num, int k) {
    int n = num.size();
    priority_queue<int>maxHeap(num.begin(),num.end());
    
    for(int i = 0;i<k;i++){
        int maxElement = maxHeap.top();
        maxHeap.pop();
        
        maxHeap.push(ceil((maxElement)/2.0));
    }
    int sum = 0;
    while (!maxHeap.empty()){
        sum += maxHeap.top();
        maxHeap.pop();
    }
    return sum;
}

4. SCORE OF PARENTHESIS


class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int score = 0;
        for(char c:s){
            if(c == '('){
                st.push(score);
                score = 0;
            }else{
                score = st.top() + max(2*score,1);
                st.pop();
            }
        }
        return score;
    }
};

5. SALUTE TO SOLDIERS

long Solution::countSalutes(string A) {
    long solutes = 0;
    long lefttorightSoldier = 0;
    
    for(int i =0;i<A.size();i++){
        if(A[i] == '>'){
            lefttorightSoldier++;
        }else if(A[i] == '<'){
            solutes += lefttorightSoldier;
        }
    }
    return solutes;
}



https://leetcode.com/problems/decode-string/description/


https://www.hackerrank.com/challenges/candies/problem

React.js , what is the EventLook , what are the promises , Create the New Promises

Question 1. No of salutes done by the soldiers if > represents soldier moving from left to right and < represents soldier moving from right to left . Soldiers will salute if they cross each other
 Question 2. Substring s=“()” has score 1 Substring s=“s1s2” has score of s1 +score of s2 Substring s=“(s)” has score 2* score of s Test case str=“()((()))” has score 5 Test case str=“((())())” has score 6

String builder

Array medium problem and balanced parantheses string problem(recursion).