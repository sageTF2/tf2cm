#include <stdio.h>

int main()
{
	FILE *f = fopen("autoexec.cfg", "a");
	if (f == NULL)
	{
		printf("Error opening file!\n");
		exit(1);
	}

	int fps;
	int picmip;

	/*sensible defaults*/
	fprintf(f, "cl_cmdrate 66\ncl_updaterate 66\ncl_interp 0\n\nfov_desired 90\n"); /* rate might be chosen based on a client's upload speed*/
	fprintf(f, "filesystem_buffer_size 262144\nfilesystem_max_stdio_read 64\nfilesystem_native 1\nfilesystem_unbuffered_io 1\n "); /* filesystem options speed up game boot time by a few seconds */
	printf("//TF2CM is software designed to streamline common configuration options for Team Fortress 2. All options are currently written to the file autoexec.cfg, and must be placed into your Team Fortress 2/tf/cfg folder in order for any changes to take effect.\n\n");
	/* better put two bars to comment the "TF2CM" line from teh config */
	printf("fps_max control your maximum fps ingame. There's no reason to limit this under 300 unless if you have overheating issues. Some systems in source will assume a framecap of 300\n");
	scanf("%d", &fps);
	fprintf(f, "fps_max = %d\n", fps);

	printf("Mat_picmip is a command which influences how close mipmap textures are to be generated. With -1 being best quality, and 2 being the lowest, what picmip value would you like?\n");
/* without sv_cheats you're looking at a value between -1 and 2 */
	scanf("%d", &picmip);
	fprintf(f, "mat_picmip = %d\n", picmip);
	
	printf("Projected shadows might give you an advantage in some fringe situations but they are also one of the most taxing effects in TF2 with a 15-20% performance deficit");
	scanf("%d", &shadows);
	fprintf(f, "r_shadows = %d\n", shadows);
}
