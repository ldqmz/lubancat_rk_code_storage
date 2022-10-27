#include "drm-core.h"

uint32_t color_table[6] = {RED,GREEN,BLUE,BLACK,WHITE,BLACK_BLUE};

int main(int argc, char **argv)
{
	int i,j;
	int ret;
	ret = drm_init();
	if(ret < 0){
		printf("drm init fail\n");
		return -1;
	}
	
    getchar();
    for(j = 0; j< 6; j++){
    	for(i = 0;i< buf.width*buf.height;i++)
		    buf.vaddr[i] = color_table[j];
        getchar();
    }

	drm_exit();	

	return 0;
}