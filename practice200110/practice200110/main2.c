long tmp;
long rest = x;
for (tmp = 0; rest; tmp = tmp * 10 + rest % 10, rest = rest / 10);
if (tmp<0)
{
	return false;
}
if (tmp == x){
	return true;
}
else if (tmp != x)
{
	return false;
}
return 0;