// Method 1
class Solution
{
    public:
    string reverseWord(string str)
    {
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
    }
};

// Method 2
class Solution
{
    public:
    string reverseWord(string str)
    {
        int i=0;
        int j = str.length()-1;
        while(i < j){
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
        return str;
    }
};
