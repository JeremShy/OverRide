	typedef struct message {
	char	msg[140];
	char	username[40];
	int		i;
}				message;

void set_msg(message *mess)
{
	message *bufarg;
	char buffer[0x400];

	bufarg = mess;
	memset(buffer, 0, 0x400);
	puts(">: Msg @Unix-Dude");
	printf(">>: ");
	fgets(buffer, 0x400, stdin);
	strncpy(bufarg->msg, buffer, bufarg->i);
}

void set_username(message *mess)
{
	message *bufarg;
	char	buffer[0x80];
	int		i;

	bufarg = mess;
	memset(buffer, 0, 0x80);
	puts(">: Enter your username");
	printf(">>: ");
	fgets(buffer, 0x80m stdin);
	i = 0;
	while(i <= 0x28 && buffer[i])
	{
		bufarg->username[i] = buffer[i];
		i++;
	}
	printf(">: Welcome, %s", bufarg.username);
}

handle_msg() {
	message buffer;

	memset(buff.username, 0, 40);
	buffer.i = 0x8c;

	set_username(&buffer);
	set_msg(&buffer);
	puts(">: Msg sent !");
}

secret_backdoor()
{
	char buffer[0x80];

	fgets(stdin, buffer, 0x80);
	system(buffer);
}

void main()
{
	puts('-' <repeats 44 times>, "\n|   ~Welcome to l33t-m$n ~    v1337        |\n", '-' <repeats 44 times>);
	handle_msg();
}

