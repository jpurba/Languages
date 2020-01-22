"""
File: sharpenDetect.py
Project 7.10

Defines and tests a function to sharpen an image.
"""

from images import Image

def sharpen(image, degree, threshold):
    """Builds and returns a sharpened image.  Expects an image
    and two integers (the degree to which the image should be sharpened and the
    threshold used to detect edges) as arguments."""
    
    new = image.clone()
    calculate = (1-degree/100)
    for y in range(0,image.height - 1):
        for x in range(0, image.width - 1):
            (r,g,b) = image.getPixel(x,y)
            average =  (r+g+b)/3
            if(average > threshold):
                average = average * calculate
            image.setPixel(x,y,(r*calculate, g*calculate, b*calculate))
            
    print(average,calculate,r,g,b)        
    return new

def main():
    filename = ("smokey.gif") #input("Enter the image file name: ")
    image = Image(filename)
    newimage = sharpen(image, 20, 15)
    newimage.draw()

if __name__ == "__main__":
   main()
