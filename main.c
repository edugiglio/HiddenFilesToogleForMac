#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	if (strcmp(argv[1], "on") == 0 || strcmp(argv[1], "true") == 0)
	{
		system("defaults write com.apple.finder AppleShowAllFiles TRUE ");
		printf("%s\n", "All hidden files and directories are visible now.");
	}
	else if (strcmp(argv[1], "off") == 0 || strcmp(argv[1], "false") == 0)
	{
		system("defaults write com.apple.finder AppleShowAllFiles FALSE && killall Finder ");
		printf("%s\n", "All hidden files and directories are invisible now.");
	}
	else
	{
		printf("%s\n", "Invalid parameter.");

	}
	return 0;
}
