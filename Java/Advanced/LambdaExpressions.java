PerformOperation is_odd(){
    return a->a%2==1?true:false;
}

PerformOperation is_prime(){
    return a->{
        for (int i=2; i<a/2; i++){
            if (a%i==0){
                return false;
            }
        }
        return true;
    };
}

PerformOperation is_palindrome(){
    return a->{
        String str = Integer.toString(a);
        int n = str.length();
        for (int i=0; i<n/2; i++){
            if (str.charAt(i)!=str.charAt(n-i-1)){
                return false;
            }
        }
        return true;
    };

}
}