#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Note: ATM state machine:
1. Idle state -> insert the card -> go to 2
2. Card inserted state -> enter the pin -> go to 3
3. Pin entered state -> select option -> go to 4
4. Option selected state -> enter amount -> go to 5
5. Amount entered state -> Money Dispatched -> go to 1
*/

//Different state of ATM machine
typedef enum
{
    Idle_State,
    Card_Inserted_State,
    Pin_Entered_State,
    Option_Selected_State,
    Amount_Entered_State
} eSystemState;

typedef enum
{
    Card_Insert_Event,
    Pin_Enter_Event,
    Option_Selection_Event,
    Amount_Enter_Event,
    Amount_Dispatch_Event
} eSystemEvent;

int Card_Insert = 0;
int User_press_button = 0;

//Prototype of eventhandlers
eSystemState AmountDispatchHandler(void)
{
    return Idle_State;
}

eSystemState EnterAmountHandler(void)
{
    return Amount_Entered_State;
}

eSystemState OptionSelectionHandler(void)
{
    User_press_button = 1;
    return Option_Selected_State;
}

eSystemState EnterPinHandler(void)
{
    User_press_button = 1;
    return Pin_Entered_State;
}

eSystemState InsertCardHandler(void)
{
    Card_Insert = 1;
    return Card_Inserted_State;
}

eSystemEvent ReadEvent()
{
    printf("ReadEvent: Card_Insert = %d; User_press_button = %d\n ", Card_Insert, User_press_button);
    /* [Hardware detection] User insert the card */
     if (Card_Insert == 1)
           return Card_Insert_Event;

     /* [Hardware detection] User start to press button */
     else if (User_press_button == 1)
           return Pin_Enter_Event;

}

int main()
{
    eSystemState eNextState = Idle_State;
    eSystemEvent eNewEvent;
    int inputState;
    printf("Enter zero (0) or one (1):");
    scanf("%d",&inputState);
    if (inputState == 1)
    {
        Card_Insert = true;
    }
    else
    {
        User_press_button = true;
    }


    while(1)
    {

        //Read system Events
        eSystemEvent eNewEvent = ReadEvent();
        switch(eNextState)
        {
            case Idle_State:
                if(Card_Insert_Event == eNewEvent)
                {
                    eNextState = InsertCardHandler();
                }
            break;

            case Card_Inserted_State:
                if(Pin_Enter_Event == eNewEvent)
                {
                    eNextState = EnterPinHandler();
                }

            break;

            case Pin_Entered_State:

                if(Option_Selection_Event == eNewEvent)
                {
                    eNextState = OptionSelectionHandler();
                }

        break;
        case Option_Selected_State:

            if(Amount_Enter_Event == eNewEvent)
            {
                eNextState = EnterAmountHandler();
            }

        break;
        case Amount_Entered_State:

            if(Amount_Dispatch_Event == eNewEvent)
            {
                eNextState = AmountDispatchHandler();
            }

        break;
        default:
            break;


        }
    }


    printf("Hello world!\n");
    return 0;
}
