#include <iostream>
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void csort(int *p, int len)
{
    int jump = len / 2;
    while (jump)
    {
        for (int i = 0; i < len - jump; ++i)
        {
            for (int j = i; j >= 0 && p[j] > p[j + jump]; j -= jump)
            {
                swap(p[j], p[j + jump]);
            }
        }
        jump /= 2;
    }
}

bool find3Numbers(int A[], int arr_size, int sum)
{
    int l, r;
    csort(A, arr_size);
    for (int i = 0; i < arr_size - 2; i++)
    {
        l = i + 1;

        r = arr_size - 1;
        while (l < r)
        {
            if (((A[i] + A[l] + A[r]) % 3) == 0)
            {
                printf("%d %d %d", A[i],
                       A[l], A[r]);
                return true;
            }
            else if (((A[i] + A[l] + A[r]) % 3) < sum)
                l++;
            else
                r--;
        }
    }
    return false;
}

int main()
{
    int n, i, l, r, *data;
    std::cin >> n;
    data = new int[n];
    for (i = 0; i < n; ++i)
        std::cin >> data[i];
    csort(data, n);
    for (int i = 0; i < n - 2; i++)
    {
        l = i + 1;
        r = n - 1;
        while (l < r)
        {
            if (((data[i] + data[l] + data[r]) % 3) == 0)
            {
                std::cout << data[i] << ' ' << data[l] << ' ' << data[r] << '\n';
                delete[] data;
                return 0;
            }
            else if (((data[i] + data[l] + data[r]) % 3) < 3)
                l++;
            else
                r--;
        }
    }
    delete[] data;
    return 0;
}