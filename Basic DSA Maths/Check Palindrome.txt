//Check Palindrome

/*Approach - 1  Reverse the given num and compare with the original num
Approach - 2  Type cast the given num to string and simply keep comparing  the first and last characters of the string.*/

bool isPalindrome(int x) {
        string st = to_string(x);
        int s=0;
        int e=st.length()-1;
        while(s<e){
            if(st[s]==st[e]){
                s++;
                e--;
            }
            else{
                return false;
            }
        }
        return true;
    }

bool palindrome(int n)
{
    int x=n;
    int revNum=0;

    while(x!=0){
    int ld=x%10;
    x=x/10;
    revNum=revNum*10+ld;
    }
    if(revNum==n)
    return true;
    else
    return false;
}