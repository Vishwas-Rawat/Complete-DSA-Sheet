// Method 1
class Compute 
{
    static Pair getMinMax(long a[], long n)  
    {
        Arrays.sort(a);
        Pair p = new Pair(a[0], a[a.length-1]);
        return p;
    }
}



// Method 2
class Compute 
{
    static Pair getMinMax(long a[], long n)  
    {
        Pair p = new Pair(min(a), max(a));
        return p;
    }
    
    public static long min(long a[]){
        long min = Long.MAX_VALUE;
        for(int i=0; i<a.length; i++){
            if(a[i] < min){
                min = a[i];
            }
        }
        return min;
    }
    
    
    public static long max(long a[]){
        long max = Long.MIN_VALUE;
        for(int i=0; i<a.length; i++){
            if(a[i] > max){
                max = a[i];
            }
        }
        return max;
    }
    
}
