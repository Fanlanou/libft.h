/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <bagomedovjusuf@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:36:24 by jbagomed          #+#    #+#             */
/*   Updated: 2023/09/23 16:48:17 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*
Эта функция точно такая же, как и наша функция ft_putchar,
за исключением того, что эта функция требует в качестве параметра дескриптор
файла, куда записывать вывод. параметр. Таким образом, вместо автоматической
записи в стандартный вывод, мы выбираем, использовать ли нам дескриптор файла,
полученный из системного вызова open системного вызова, или используем 0,
1 или 2 для ссылки на стандартный ввод, стандартный выходу или стандартной
ошибке, соответственно. Мы используем функцию write так же, как это было
сделано в функции ft_putchar, но на этот раз вместо того, чтобы первым
первым параметром write будет 1 для стандартного вывода, мы возьмем параметр
ft_putchar параметр int fd и используем его в качестве первого параметра
функции write. Мы по-прежнему используем адрес нашей строки символов
char c с нулевым окончанием в качестве содержимого для записи, и мы по-прежнему
знаем, что будем записывать только один символ в наш желаемый дескриптор файла,
поэтому мы используем 1, так как мы будем записывать 1 байт.
*/
