class Solution {
public:
    int Add(int num1, int num2)
    {
        //相加各位 + 计算进位
		//十进制思想
		//5+7 各位相加：2 进位：10
		//2+10 12 0
		//12+0
		//二进制计算过程
		//5+7 各位相加：101^111=010 进位：101&111=101 (<<1=1010)
		//2+10 各位相加：010^1010=1000 进位：010&1010=010 <<1=0100
		//8+4 1000^0100=1100 1000&0100=0
		//12+0
		if (num2 == 0) return num1;
		return Add(num1^num2, (num1&num2)<<1 );
    }
};