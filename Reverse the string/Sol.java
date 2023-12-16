// Method 1
class Reverse
{
    // Complete the function
    // str: input string
    public static String reverseWord(String str)
    {
        String e = "";
        for(int i=str.length()-1; i>=0; i--){
            e = e + str.charAt(i); // str[i]
        }
        return e;
    }
}


// Method 2
class Reverse
{
    // Complete the function
    // str: input string
    public static String reverseWord(String str)
    {
        char[] str2 = str.toCharArray();
        int i=0;
        int j = str2.length-1;
        while(i < j){
            char temp = str2[i];
            str2[i] = str2[j];
            str2[j] = temp;
            i++;
            j--;
        }
        return new String(str2);
    }
}
