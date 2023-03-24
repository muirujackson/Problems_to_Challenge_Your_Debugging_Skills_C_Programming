#include <stdio.h>
#include <string.h>

char *filename( char *path )
{
	char *p;
	int len;

/* find the end of the string */
	len = strlen(path);

/* return on empty string */
	if( len==0 )
		return("[Empty string]");

/* locate the extension separator */
	p = path+len;
	while( *p != '/' )
	{
		p--;
		/* avoid backing up too far */
		if( p==path )
			return(path);
	}

/* ensure a filename is present */
	if( *p == '\0' )
		return("[No filename]");
	else
		return(p);
}

int main()
{
	char *path[] = {
		"~/Documents/web/images/heading.png",
		"/mount/omicron/temp/",
		"~/Documents/web/media/menu.swf",
		"~/Pictures/vacation/2019/Hawaii/luau_sunday.jpg",
		"/users/bill/downloads/",
		"filename.txt"
	};
	int x;

	/* display paths and extracted filenames */
	for( x=0; x<6; x++ )
	{
		printf("%s -> %s\n",path[x],filename(path[x]) );
	}

	return(0);
}
