
void reverseDigits(int& number) 
{
    int reverseNum = 0;
    while (number > 0) 
    {
        reverseNum = reverseNum * 10 + (number % 10);
        number /= 10;
    }
    number = reverseNum;
}