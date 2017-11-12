
#include <stdio.h>
#include <sys/utsname.h>
#include <errno.h>
#include <stdlib.h>

#if 0
struct utsname {
	char	sysname[SYS_NMLN];	/* Name of this OS. */
	char	nodename[SYS_NMLN];	/* Name of this network node. */
	char	release[SYS_NMLN];	/* Release level. */
	char	version[SYS_NMLN];	/* Version level. */
	char	machine[SYS_NMLN];	/* Hardware type. */
};
#endif

int main()
{
	struct utsname box;
	int rv = 0;
	printf("uname:\n");

	rv = uname(&box);

	printf("rv = %d\n", rv);
	if (rv < 0) {
		printf("error number = %d\n", errno);
		exit(1);
	}

	printf("box.sysname  = %s\n", box.sysname);
	printf("box.nodename = %s\n", box.nodename);
	printf("box.release  = %s\n", box.release);
	printf("box.version  = %s\n", box.version);
	printf("box.machine  = %s\n", box.machine);
	
	return 0;
}
