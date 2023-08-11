int sum_integers(int integers[], int length)
{

    if (length > 0)
    {
        int sum = 0;

        for (int i = 0; i < length; i++)
        {
            sum += integers[i];
        }

        return sum;
    }
    return -1;
}

bool is_array_palindrome(int integers[], int length)
{
    if (length > 0)
    {

        for (int i = 0; i < length / 2; i++)
        {

            if (integers[i] != integers[length - i - 1])
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

int palindrome_sum(int integers[], int length)
{

    if (length > 0)
    {

        if (is_array_palindrome(integers, length))
        {
            return sum_integers(integers, length);
        }
        else
        {
            return -2;
        }
    }
    return -1;
}