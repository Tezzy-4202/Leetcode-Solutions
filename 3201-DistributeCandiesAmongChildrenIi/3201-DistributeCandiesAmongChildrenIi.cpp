// Last updated: 6/3/2025, 1:08:39 PM
class Solution {
public:
    long long distributeCandies(int n, int limit) {
        auto combinations = [](long long n,long long k)->long long{
            if (k>n || k<0) return 0;
            if (k==0 || k ==n) return 1;

            if (k>n-k) k = n-k;

            long long result =1;
            for(long long i=0;i<k;i++){
                result = result * (n-i)/(i+1);
            }
            return result;
        };
        long long total = combinations(n+2,2); //c(n+k,K) basically gives total ways without any constraint

        //adding cases/constraints ( entire thing is like sets- |AuBuC|=|A|+|B|+|c|-|AnB|-|AnC|-|BnC|+|AnBnC|)
        if (n>limit){   //child 1 gets more than limit
            total -= combinations(n-limit-1+2,2);
        } 
        if (n>limit){   //child 2 gets more than limit
            total -= combinations(n-limit-1+2,2);
        }
        if (n>limit){   //child 3 gets more than limit
            total -= combinations(n-limit-1+2,2);
        }

        if (n>2*limit){     //child 1 and 2 both get more than limit
            total += combinations(n-2*(limit+1)+2,2);
        }
        if (n>2*limit){     //child 1 and 3 both get more than limit
            total += combinations(n-2*(limit+1)+2,2);
        }   
        if ( n>2*limit){    //child 2 and 3 both get more than limit
            total += combinations(n-2*(limit+1)+2,2);
        }

        if (n>3*limit){     //child subtracting all threee children get more than limit
            total -= combinations(n-3*(limit+1)+2,2);
        }

        return total;
    }

};