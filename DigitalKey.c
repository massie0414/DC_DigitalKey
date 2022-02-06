#include <kos.h>

int main() {
    maple_device_t *cont;
    cont_state_t *state;

    while(1) {
        if((cont = maple_enum_type(0, MAPLE_FUNC_CONTROLLER)) != NULL) {
            state = (cont_state_t *)maple_dev_status(cont);

            if(state == NULL){
                break;
            }

            if(state->buttons & CONT_START){
		printf("START\n");
            }
            if(state->buttons & CONT_Y){
		printf("Y\n");
            }
            if(state->buttons & CONT_X){
		printf("X\n");
            }
            if(state->buttons & CONT_B){
		printf("B\n");
            }
            if(state->buttons & CONT_A){
		printf("A\n");
            }
            if(state->buttons & CONT_DPAD_UP){
		printf("UP\n");
            }
            if(state->buttons & CONT_DPAD_DOWN){
		printf("DOWN\n");
            }
            if(state->buttons & CONT_DPAD_LEFT){
		printf("LEFT\n");
            }
            if(state->buttons & CONT_DPAD_RIGHT){
		printf("RIGHT\n");
            }
        }
    }

    return 0;
}
