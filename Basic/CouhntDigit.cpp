int countDigits(int n)
{
    int cnt = 0;
    int temp = n;
    while (temp != 0)
    {
        int rem = temp % 10;
        if (rem > 0 && n % rem == 0)
        {
            cnt++;
        }
        temp /= 10;
    }
    return cnt;
}