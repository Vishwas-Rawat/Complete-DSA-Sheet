//User function template for Java

class Solution
{
    public static void sort012(int a[], int n)
    {
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int i=0; i<a.length; i++){
            if(a[i] == 0){
                zero++;
            }
            if(a[i] == 1){
                one++;
            }
            if(a[i] == 2){
                two++;
            }
        }
        
        int j = 0;
        while(zero != 0){
            a[j] = 0;
            j++; 
            zero--;
        }
        while(one != 0){
            a[j] = 1;
            j++; 
            one--;
        }
        while(two != 0){
            a[j] = 2;
            j++; 
            two--;
        }
    }
}
