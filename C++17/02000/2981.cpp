#include <cstdio>
#include <algorithm>
#include <vector>

int gcd(int a, int b)
{
	int tmp;
	while (b)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main()
{
	int n;
	int a[101];
	int tmp;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	std::sort(a, a + n);

	tmp = a[1] - a[0];
	for (int i = 2; i < n; i++)
	{
		tmp = gcd(tmp, a[i] - a[i - 1]);
	}

	std::vector<int> v;

	for (int i = 2; i * i <= tmp; i++)
	{
		if (i * i == tmp)
		{
			v.push_back(i);
			break;
		}
		if (tmp % i == 0)
		{
			v.push_back(i);
			v.push_back(tmp / i);
		}
	}
	v.push_back(tmp);

	std::sort(v.begin(), v.end());

	for (auto vec : v)
	{
		printf("%d ", vec);
	}

	return 0;
}