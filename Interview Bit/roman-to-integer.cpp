int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
int Solution::romanToInt(string str) {
     int res = 0;
    int val2;
    for (int i=0; i<str.length(); i++)
    {
        int val = value(str[i]);
        if(i!=str.length()-1){
            val2=value(str[i+1]);
        }
        else{
            res= res+val;
            break;
        }
        if(val>=val2){
            res = res+val;
        }
        else{
            res = res-val;
        }
      
        
    }
    return res;
}