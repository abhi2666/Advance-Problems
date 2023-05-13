class Solution {
public:

    bool perfectSquare(int i)
    {
        int root = sqrt(i);

        if(root * root == i) return true;
        else return false;
    }

    int numSquares(int n) {
        int i = 2;
        while(i <= n)
        {
            if(perfectSquare(i))
            {
                // to be done
            }
        }

    }
};