#include "genesis.h"

int main(bool hardReset) {

	VDP_drawText("Hello BlodTor!!!", 12, 12);

    while(TRUE) {
    	SYS_doVBlankProcess();
    }

    return 0;
}
