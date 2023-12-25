class Solution:    
    #Function to return the count of number of elements in union of two arrays.
    def doUnion(self,a,n,b,m):
        
        # Using set to store unique elements.
        union_set = set()

        # Adding elements from array 'a' to the set.
        for i in range(n):
            union_set.add(a[i])

        # Adding elements from array 'b' to the set.
        for i in range(m):
            union_set.add(b[i])

        # Returning the count of unique elements in the union set.
        return len(union_set)
