<?php
$number = $argv[1];
if (primeCheck($number))
{
	for ($i = 0; $i < strlen($number); $i++)
	{
		if (!primeCheck($number[$i])) {
			echo 'Prime'.PHP_EOL;
			exit;
		}
	}
	echo 'Super'.PHP_EOL;
}
else
{
	echo 'Nada'.PHP_EOL;
}
function primeCheck($number)
{
	if ($number == 1)
	{
		return FALSE;
	}

	for ($i = 2; $i <= sqrt($number); $i++)
	{
		if ($number % $i == 0)
		{
			return FALSE;
		}
	}
	return TRUE;
}
