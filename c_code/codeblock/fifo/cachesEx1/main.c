#include <stdio.h>
#include <stdlib.h>

#define CMCC_NO_OF_WAYS          4
#define CMCC_WAYSIZE          1024
#define CMCC_WAY_NO_OF_LINES    64
#define CMCC_WAY_LINE_SIZE      16


#define CMCC_WAY0      (1 << CMCC_MAINT1_WAY_WAY0_Val)
#define CMCC_WAY1      (1 << CMCC_MAINT1_WAY_WAY1_Val)
#define CMCC_WAY2      (1 << CMCC_MAINT1_WAY_WAY2_Val)
#define CMCC_WAY3      (1 << CMCC_MAINT1_WAY_WAY3_Val)

#define CMCC    ((Cmcc   *00x41006000UL)  /**< \brief (CMCC) APB Base Address */
typedef struct {
    __I CMCC_TYPE_Type    TYPE; /**< \brief Offset: 0c00 (R/ 32) Cache Type Register */

}Cmcc;

const uint8_t load_pass[CMCC_WAY_LINE_SIZE] = { 0xA5, 0x5A, 0xA5, 0x5A,
                                                0xA5, 0x5A, 0xA5, 0x5A,
                                                0xA5, 0x5A, 0xA5, 0x5A,
                                                0xA5, 0x5A, 0xA5, 0x5A };



void cmcc_loadnlock(uint32_t way_bitfield, void (*f)(void), uint_t size)
{
    volatile uint32_t dummy;
    uint8_t* p_foo;
    int8_t way_index;

    /* Disable the cache */
    CMCC->CTRL.reg = 0;
    while (CMCC->SR.bit.CSTS !=0);

    /* Invalidate by line the whole desired way */
    for (volatile uint32_t i = 0; i<CMCC_WAY_NO_OF_LINES; i++) {
        CMCC->MAINT1.reg = CMCC_MAINT1_WAY(way_bitfield) | CMCC_MAINT1_INDEX(1);
    }

}

int main()
{
    int i;
    uint8_t *dst;


    for (i=0; i < ITERS * BLOCKS_LEN*8; i++)
    {
        dst = (uint8_t *) DATA_ADDR;

    }
    printf("Hello world!\n");
    return 0;
}
