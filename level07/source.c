
int read_number(unsigned int tab[25])
{
	unsigned int i;

	i = 0;
	printf(" Index: ");
	i = get_unum();
	printf(" Number at data[%u] is %u\n", i, tab[i]);
	return (0);
}

void clear_stdin()
{
	char c;

	c = 0;
	while (c != '\n' && c != EOF)
		c = getchar();
}

unsigned int get_unum()
{
	unsigned int i;

	i = 0;
	fflush(stdout);
	scanf("%u", &i);
	clear_stdin();
	return (i);
}

int store_number(unsigned int tab[25])
{
	int		number;
	int		index;

	printf(" Number: ");
	number = get_unum();
	printf(" Index: ");
	index = get_unum();
	if (index - (index * 0xaaaaaaab >> 0x21) * 3 == 0 || number >> 0x18 == 0xb7)
	{
		puts(" *** ERROR! ***");
		puts("   This index is reserved for wil!");
		puts(" *** ERROR! ***");
		return (1);
	} else {
		tab[index] = number;
		return (0);
	}
}

int main(int ac, char **argv, char **argenv)
{
	int len;
	char **env;
	char **av;
	int tab[25];
	int	tabi;
	char buff[20] = {0};

	env = argenv;
	av = argv;
	tabi = 0;
	memset(tab, 0, sizeof(tab));
	while (*av)
	{
		len = -1;
		memset(*av, 0, strlen(*av));
		av++;
	}
	while (*env)
	{
		len = -1;
		memset(*env, 0, strlen(*env));
		env++;
	}
	puts("----------------------------------------------------\n  Welcome to wil's crappy number storage service!\n----------------------------------------------------\n Commands:\n    store - store a number into the data storage\n    read  - read a number from the data storage\n    quit  - exit the program\n----------------------------------------------------\n   wil has reserved some storage :>\n----------------------------------------------------")
	while (42)
	{
		printf("Input command: ");
		tabi = 1;
		fgets(buff, 20, stdin);
		buff[strlen(buff) - 1] = '\0';
		if (sntrncmp("store", buff, 5) == 0)
			tabi = store_number(tab);
		else if (sntrncmp("read", buff, 4) == 0)
			tabi = read_number(tab);
		else if (sntrncmp("quit", buff, 4) == 0)
			return (0);
		if (tabi != 0)
			printf(" Failed to do %s command\n", buff);
		else
			printf(" Completed %s command successfully\n", buff);
	}
	return (0);
}