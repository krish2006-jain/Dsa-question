class Solution {
public:
    int myAtoi(string s) {
       int number=0;
       bool neg=false;
       bool digit=false;
       bool sign=false;
       for(int i =0;i<s.length();i++){
        //space removal
        if(s[i]==' '){
            if(digit||sign){
                break;
            }
            continue;
        }
        //negative maintain
        else if(s[i]=='-' ||s[i]=='+'){
        if(digit || sign){
            break;
        }
        sign=true;
        if(s[i]=='-'){
        neg=true;}
        continue;
        }
        //numerical value
        else if(s[i]>='0' && s[i]<='9'){
        digit=true;
        int num=s[i]-'0';
        if (number > INT_MAX / 10 || (number == INT_MAX / 10 && num > INT_MAX % 10)) {
                    return neg ? INT_MIN : INT_MAX;
                }
        number=number*10  +num;
        }
        else{
            break;
        }
       } 
       //negative maintain
       if(neg && number!=0){
        number=number*-1;
       }
       return number;
    }
};