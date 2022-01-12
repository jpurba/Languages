#ifndef AFCMESSAGES_H_
#define AFCMESSAGES_H_

#define AFC_BASE_MSG_ID         0x2000

#define AFC_CFG_MSG_ID      AFC_BASE_MSG_ID
#define AFC_GO_MSG_ID       AFC_BASE_MSG_ID + 1



typedef enum
{
    AFC_ENABLE,
    AFC_DISABLE
} afcEnableFlag_E;

#endif // AFCMESSAGES_H_
