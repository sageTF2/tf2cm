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
	fprintf(f, "rate 100000\ncl_cmdrate 100\ncl_updaterate 100\ncl_smooth 0\n\nfov_desired 90\nviewmodel_fov 90\n\n");

	printf("TF2CM is software designed to streamline common configuration options for Team Fortress 2. All options are currently written to the file autoexec.cfg, and must be placed into your Team Fortress 2/tf/cfg folder in order for any changes to take effect.\n\n");

	printf("fps_max control your maximum fps ingame. This option should be a multiple of your monitor refresh rate +1. For example, if you use a 60hz monitor you would choose 121.\n");
	scanf("%d", &fps);
	fprintf(f, "fps_max = %d\n", fps);

	printf("Mat_picmip is a command which influences how close mipmap textures are to be generated. With -1 being best quality, and 10 being best performance, what picmip value would you like?\n");
	scanf("%d", &picmip);
	fprintf(f, "mat_picmip = %d\n", picmip);
}