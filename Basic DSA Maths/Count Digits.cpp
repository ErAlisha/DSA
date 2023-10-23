Return the number of digits of 'n'


int countDigits(int n){
	int cnt=0;
	while(n!=0){
		int last_digit=n%10;
		n=n/10;
		cnt++;
	}	
	return cnt;
}