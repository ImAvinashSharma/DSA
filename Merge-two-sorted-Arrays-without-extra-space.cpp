class Solution{
    public:
        int nextGap(int gap){
            if (gap <= 1){
                return 0;
            }
            return (gap / 2) + (gap % 2);
        }
        void merge(long long arr1[], long long arr2[], int n, int m) { 
            int gap = n + m; // we took gap as sum sum the size of both the array
            int i, j;
            gap = nextGap(gap); // everytime we will get a next gap from this
            for(; gap > 0 ; gap = nextGap(gap) ){
                for(i = 0; i + gap < n; i++){
                    if(arr1[i] > arr1[i+gap]) // whenever element in 1st array is greater then 2nd array swap the element and move ahead
                        swap(arr1[i], arr1[i+gap]);
                }
            for(j = (gap > n) ? (gap - n) : 0; i < n && j < m; i++, j++ ){
            if(arr1[i] > arr2[j]) // whenever element in 1st array is greater then 2nd array swap the element and move ahead
            swap(arr1[i], arr2[j]);
        }

//Comparing elements in second array arr2[]
            if(j < m){
                for(j = 0; j + gap < m; j++){
                    if(arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j+gap]);
                }
            }
        }
    }
};
