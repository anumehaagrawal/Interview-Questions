int Solution::evalRPN(vector<string> &tokens) {
     stack<int> tokTmp;
               for (int i = 0; i<tokens.size(); i++){
                      //tokens[i] is a string, so "" is used!
                      if ((tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")){
                            int y = tokTmp.top();
                            tokTmp.pop();
                            int x = tokTmp.top();
                            tokTmp.pop();
                            if (tokens[i] == "+")tokTmp.push(x + y);
                            else if (tokens[i] == "-")tokTmp.push(x - y);
                            else if (tokens[i] == "*")tokTmp.push(x*y);
                            else if (tokens[i] == "/")tokTmp.push(x / y);
                      }
                      else {
                            int x = stoi(tokens[i], nullptr, 10);
                            tokTmp.push(x);
                      }
               }
               return tokTmp.top();
        }
