/* user and group to drop privileges to */
static const char *user  = "dante";
static const char *group = "dante";

/* Dracula theme */
static const char *colorname[NUMCOLS] = {
	[INIT] =   "#C48EAD",   /* after initialization */
	[INPUT] =  "#81A1C1",   /* during input */
	[FAILED] = "#BF616A",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
