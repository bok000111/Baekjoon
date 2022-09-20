/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5615.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbok <jbok>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:21:56 by jbok              #+#    #+#             */
/*   Updated: 2022/09/17 20:21:56 by jbok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef unsigned long long	t_ull;
typedef unsigned int		t_ui;

t_ull	ft_modpow(t_ull base, t_ull pow, t_ull mod)
{
	t_ull	result;

	result = 1;
	while (pow > 0)
	{
		if (pow & 1)
		{
			result = result * base % mod;
		}
		base = base * base % mod;
		pow >>= 1;
	}
	return (result);
}

int	miller_rabin(t_ull n, t_ull prime)
{
	t_ull	d;
	t_ull	tmp;

	if (n == prime)
		return (1);
	d = n - 1;
	while (!(d & 1))
	{
		if (ft_modpow(prime, d, n) == n - 1)
			return (1);
		d >>= 1;
	}
	tmp = ft_modpow(prime, d, n);
	return (tmp == 1 || tmp == n - 1);
}

int	ft_is_prime_miller_rabin(t_ull n)
{
	return (miller_rabin(n, 2) && miller_rabin(n, 7) && miller_rabin(n, 61));
}

int	main(void)
{
	int		n;
	t_ui	m;
	int		cnt;

	cnt = 0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%u", &m);
		if (ft_is_prime_miller_rabin((t_ull)m * 2 + 1))
			cnt++;
	}
	printf("%d", cnt);
	return (0);
}
