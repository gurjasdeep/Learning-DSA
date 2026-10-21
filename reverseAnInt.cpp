class Solution {
public:
    int reverse(int x) {
        int8_t sign;
        unsigned int z;
        if (x == INT_MIN){
            z = 2147483648;
            sign = -1;
        }
        else if (x < 0){
            z = -x;
            sign = -1;
        } else {
            z = x;
            sign = 1;
        }
        uint32_t y = 0;
        uint32_t lastY = 0;
        
        int digits = 0;
        int first_digit = -1;
        int last = 0;

        while (z > 0){
            last = z % 10;
            if (first_digit < 0){
                first_digit = last;
            }

            z /= 10;
            digits++;
            if (digits > 10){
                return 0;
            }
            if (digits == 10 && first_digit > 4){
                return 0;
            }
            y = (y * 10) + last;
            
            std::cout << "y = " << y << "   lastY = " << lastY << std::endl;
            if (lastY > y){
                return 0;
            }
            if (y > INT_MAX){
                return 0;
            }
            lastY = y;
        }
        return sign*y;
    }
};
