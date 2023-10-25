// Rotate Array

// Right Rotate array by k digits

void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n; //game changing step
//because if k is any multiple of n, it will give original vector back,so on k>n, we just need to figure out yhe remainder on k%n and consider it as actual k times ,array to be rotated. 
        reverse(nums.begin(),nums.begin()+(n-k));

        reverse(nums.begin()+(n-k),nums.end());
       
        reverse(nums.begin(),nums.end());
    }

// Left Rotate array by k digits

void rotateArr(int arr[], int d, int n){
        d=d%n;
       reverse(arr,arr+d);
       reverse(arr+d,arr+n);
       reverse(arr,arr+n);
    }