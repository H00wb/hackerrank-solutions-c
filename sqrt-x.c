int mySqrt(int x) {
    int left = 1;
    int right = x/2; // x'in karekökü hiçbir zaman x/2'den büyük olamaz. Upperbound x/2'dir.
    int result = 1;

    if(x == 0)
    {
        return 0;
    }
    else if(x > 0 && x < 4)
    {
        return 1;
    }

    while(left <= right)
    {
        int mid = left +(right-left)/2;
        if(mid == x/mid)
        {
            result = mid;
            break;
        }
        else if(mid <= x/mid)            //x/mid denmesinin sebebi ->  mid*mid <= x ~(midlerden biri karşıya 1/mid olarak geçti)~ mid  <= (x* (1/mid))  yani   mid <= x/mid oldu. Overflow'u engellemek için mükemmel bir hamle. 
        {
            left = mid + 1;
            result = mid;
        }
        else{
            right = mid-1;
        }
    }
    return result;
    
}
