<?php

if (isset($argv[1]) && is_numeric($argv[1])) {
	print(convert(intval($argv[1])) . "\n");
	exit;
}

print("Usage: php TimeConversion.php <number>\n");
exit(1);

function convert(int $value): string
{
	$hours = intdiv($value, 3600);
	$minutes = intdiv(($value % 3600), 60);
	$seconds = $value % 60;	
	return "$hours:$minutes:$seconds";
}