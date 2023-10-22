//Trying to learn branching,by implementing different Sorting and Searching Techniques in this branch 
//In this branch I'll write code for int main, and for the concerned branch,I'll make matching function call for that particular branch

#include<iostream>
using namespace std;

    //Partition Function
    int partition(vector<int>& nums, int low, int high)
    {
        int pivot = nums[high];
        int partitionIndex = low;
        int temp;
        
        for(int i = low; i < high; i++)
        {
            if(nums[i] <= pivot)
            {
                temp = nums[i];
                nums[i] = nums[partitionIndex];
                nums[partitionIndex] = temp;
                
                partitionIndex++;
            }
        }
        
        temp = nums[high];
        nums[high] = nums[partitionIndex];
        nums[partitionIndex] = temp;
        
        return partitionIndex;
    }
    
	//Quick Sort Function
    void quickSort(vector<int>& nums, int low, int high)
    {
        if(low < high)
        {
			//Call Partition Function
            int partitionIndex = partition(nums, low, high);
			
			//Recursion Call
            quickSort(nums, low, partitionIndex-1);
            quickSort(nums, partitionIndex+1, high);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        
        int low = 0, high = nums.size()-1;
		
		//Call Quick Sort Function
        quickSort(nums, low, high);
        
        return nums;
    }



void bubbleSort(){

}




int main(){
cout<<"Learning different Searching and Sorting techniques";
int arr[12]={1,4,6,9,3,5,8,1,6,0,4,2};
sortArray(arr);
//now arr must be sorted
//print the arr
for(int i=0;i<12;i++){
      cout<<arr[i]<<" ";
}
return 0;
}