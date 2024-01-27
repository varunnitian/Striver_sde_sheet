/*Problem name- add digits*/
/*approach-3 T.C->O(1) S.C->O(1)*/
class Solution {
public:
    int addDigits(int num) {
        if(num == 0)
        {
            return 0;
        }
        if(num % 9 == 0)
        {
            return 9;
        }
        return (num%9);
        
    }
};

/*approach 1 iterative T.C->O(n2) S.C->O(1)*/

// class Solution {
// public:
//     int addDigits(int num) {
//         int sum=0;
//         while(num > 9)
//         {
//             while(num > 0)
//             {
//                 sum+=(num%10);
//                 num/=10;
//             }
//             num=sum;
//             sum=0;
//         }
//         return num;
//     }
// };

/*approach-2 using recursion T.C->O(n) S.C->O(n)*/
// class Solution {
// public:
//     int solveByRecursion(int num)
//     {
//         int sum=0;
//         int dummy;
//         while(num > 0)
//         {
//             sum+=(num%10);
//             num/=10;
//         }
//         if(sum >= 10)
//         {
//             dummy=solveByRecursion(sum);
//         }
//         else
//         {
//             dummy=sum;
//         }
//         return dummy;
//     }
//     int addDigits(int num) {
//         int ans=solveByRecursion(num);
//         return ans;
//     }
// };