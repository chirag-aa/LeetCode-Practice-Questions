class Solution {

  public int atmostKoddnumber(int k, int []arr) {
		// Write your code here
		int n = arr.length;
		int i = 0;
		int j = 0;
		int ans = 0;
        int countOfOddNumber=0;
		while(j<n){
			if(arr[j]%2!=0){
				countOfOddNumber++;
			}
			
			if(countOfOddNumber<=k){
				ans = ans + (j-i+1);
				j++;
			}
			else if(countOfOddNumber>k){
				while(countOfOddNumber>k){
					
					if(arr[i]%2!=0){
				       countOfOddNumber--;
			         }
					i++;
				}
				if(countOfOddNumber<=k){
				  ans = ans + (j-i+1);
			     }
				j++;
			}
		}
		return ans;
	}

    public int numberOfSubarrays(int[] nums, int k) {
        int n = nums.length;
        int countOfOddAtmostk = atmostKoddnumber(k,nums);
        int countOfOddAtmostkMinus1 = atmostKoddnumber(k-1, nums);
        return Math.abs(countOfOddAtmostk-countOfOddAtmostkMinus1);
    }
}