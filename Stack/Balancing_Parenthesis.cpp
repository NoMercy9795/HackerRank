#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
  stack<char>m;
    int n = s.length(),i;
  for(i  = 0;i < n;i++){
      if(s[i] == '{' || s[i] == '[' || s[i] == '('){
          m.push(s[i]);
      }
      else{
          if(m.empty())
              break;
          
          else if((s[i] == '}' && m.top() == '{')||( s[i] == ']' && m.top() == '[') ||( s[i] == ')' && m.top() == '('))
          m.pop();
          else{
              break;
          }
      
  }
    

}
    if(m.empty() && i == n){
        return "YES";
    }
    else{
        return "NO";
    }
    while(!m.empty()){
        m.pop();
    }
      }
             
 

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
