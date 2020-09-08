# Example of displaying the device information service (DIS) info for a UART device.
#
# !!! NOTE !!!
#
# Only works on Mac OSX at this time.  On Linux bluez appears to hide the DIS
# service entirely. :(
#
# !!! NOTE !!!
#
# Author: Tony DiCola

import Adafruit_BluefruitLE
from Adafruit_BluefruitLE.services import UART, DeviceInformation

# Get the BLE provider for the current platform
ble = Adafruit_BluefruitLE.get_provider()

# Main function implements the program logic so it can run in a background
# thread.  Most platforms require the main thread to handle GUI events and other
# asyncronous events like BLE actions.  All of the threading logic is taken care
# of automatically though and you just need to provide a main function that uses
# the BLE provider.

def main():
    